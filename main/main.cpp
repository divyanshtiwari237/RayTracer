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

    if(world.hit(r,0,infinity,rec))
    {
       
        point3 target = rec.p +rec.normal + vec3::randominunitSphere();
        
        return 0.5 * ray_color(Ray(rec.p, target - rec.p), world,depth-1);
    }
    vec3 unitDirection = vec3::unit_vector(r.getDir());
    auto t = 0.5*(unitDirection.y() + 1.0);

    return (1.0-t)*color(1.0, 1.0, 1.0) + t*color(0.5, 0.7, 1.0);
}

int main()
{
    std::ofstream obj("../../Images/cordiffuse.ppm");
    //image
    const auto aspect_ratio =16.0/9.0;
    const int image_width = 400;
    const int image_height = static_cast<int>(image_width/aspect_ratio);
    int samplesperPixel =100;
    const int maxDepth = 50;

    //hittable objects
    HittableLists world;
    
    world.add(make_shared<Sphere>(point3(0,-100.5,-1),100));
    world.add(make_shared<Sphere>(point3(0,0,-1),0.5));
    
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
    
