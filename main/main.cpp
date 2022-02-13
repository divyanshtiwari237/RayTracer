#include<iostream>
#include"vec3.hpp"
#include"color.hpp"
#include"ray.hpp"

bool hit_sphere(const point3 center, double radius ,  Ray r)
{
    vec3 oc = r.getOrigin()- center;
    auto a = vec3::dot(r.dir,r.dir);
    auto b = 2.0*vec3::dot(oc,r.dir);
    auto c = vec3::dot(oc,oc) -radius*radius;
    auto discriminant =b*b -4*a*c;
    return (discriminant>0);


}
color ray_color( Ray r)
{
    if(hit_sphere(point3(0,0,-1),0.5,r))
    {
        return color(1,0,0);
    }
    vec3 unit_direction = vec3::unit_vector(r.getDir());
    auto t = 0.5*(unit_direction.y()+1.0);
    color c1 =color(1.0,1.0,1.0);
    color c2 =color(0.5,0.7,1.0);
    color c =(1.0-t)*c1 ;
    color c3 = t*c2;
    color c4 =c + c3;


    return c4;

}

int main()
{
    //image
    const auto aspect_ratio =16.0/9.0;
    const int image_width = 400;
    const int image_height = static_cast<int>(image_width/aspect_ratio);
    
    //Camera

    auto viewport_height =2.0;
    auto viewport_width = aspect_ratio*viewport_height;
    auto focal_length =1.0;

    auto origin = point3(0,0,0);
    auto horizontal = vec3(viewport_width,0,0);
    auto vertical = vec3(0, viewport_height, 0);
    auto lower_left_corner = origin - horizontal/2 - vertical/2 + vec3(0, 0, focal_length);


    //Render
    std::cout <<"P3\n"<<image_width<<" "<<image_height<<"\n255\n";

    for(int j=image_height-1;j>=0;--j)
    {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) 
        {
            auto u = double(i) / (image_width-1);
            auto v = double(j) / (image_height-1);
            Ray r(origin, lower_left_corner + u*horizontal + v*vertical - origin);
            color pixel_color = ray_color(r);
            writeColor(std::cout, pixel_color);
    }
            

            
            

        }
        std::cerr<<"\nDone.\n";
    }
    
