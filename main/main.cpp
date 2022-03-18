#include<iostream>
#include"maths.hpp"
#include"color.hpp"
#include "camera.hpp"
#include"hittablelists.hpp"
#include <fstream>
color ray_color( Ray r, HittableLists& world,int depth)
{
    if(depth<0)
    {
        return color(0,0,0);
    }
    hitRecord rec;

    if(world.hit(r,0.001,infinity,rec))
    {
        Ray scattered;
        color attenuation;

        if (rec.matPtr->scatter(r, rec, attenuation, scattered))
            return attenuation * ray_color(scattered, world, depth-1);

        return color(0,0,0);
        
    }
    vec3 unitDirection = vec3::unit_vector(r.getDir());
    auto t = 0.5*(unitDirection.y() + 1.0);

    return (1.0-t)*color(1.0, 1.0, 1.0) + t*color(0.5, 0.7, 1.0);
}

int main()
{
    std::ofstream obj("../../Images/dielectric.ppm");
    //image
    const auto aspect_ratio =16.0/9.0;
    const int image_width = 400;
    const int image_height = static_cast<int>(image_width/aspect_ratio);
    int samplesperPixel =100;
    const int maxDepth = 50;

    //hittable objects
    HittableLists world;
    
    auto materialGround = make_shared<Lambertian>(color(0.8, 0.8, 0.0));
    auto materialCenter = make_shared<Dielectric>(1.5);
    auto materialLeft   = make_shared<Dielectric>(1.5);
    auto materialRight  = make_shared<Metal>(color(0.8, 0.6, 0.2),1.0);

    world.add(make_shared<Sphere>(point3( 0.0, -100.5, -1.0), 100.0, materialGround));
    world.add(make_shared<Sphere>(point3( 0.0,    0.0, -1.0),   0.5, materialCenter));
    world.add(make_shared<Sphere>(point3(-1.0,    0.0, -1.0),   0.5, materialLeft));
    world.add(make_shared<Sphere>(point3( 1.0,    0.0, -1.0),   0.5, materialRight));

    
    //Camera

    Camera cam;


    //Render
    obj <<"P3\n"<<image_width<<" "<<image_height<<"\n255\n";

    for(int j=image_height-1;j>=0;--j)
    {
        std::clog << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) 
        {
            color pixel_color(0, 0, 0);
            for (int s = 0; s < samplesperPixel; ++s) {
                auto u = (i + vec3::randomDouble(-1,1)) / (image_width-1);
                auto v = (j + vec3::randomDouble(-1,1)) / (image_height-1);
                Ray r = cam.getRay(u, v);
                pixel_color += ray_color(r, world,maxDepth);
            }
            writeColor(obj, pixel_color, samplesperPixel);
    }
        
        }
        std::cerr<<"\nDone.\n";
    }
    
