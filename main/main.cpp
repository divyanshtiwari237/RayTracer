#include<iostream>
#include"vec3.hpp"
#include"color.hpp"

int main()
{
    
    const int imageWidth = 256;
    const int imageHeight = 256;
    
    std::cout<<"P3\n"<<imageWidth<<" "<<imageHeight<<"\n255\n";

    for(int j=imageHeight-1;j>=0;j--)
    {
        for(int i=0;i<imageWidth;i++)
        {
            //std::cerr<<"\rScanlines remaing"<<j<<' '<<std::flush;
            auto r = double(i)/(imageWidth -1);
            auto g = double(j)/(imageHeight-1);
            auto b = 0.25;
            vec3 v =vec3(1,0,0);
           // std::cout<<v[0];

            color pixelColor =color(r,g,b);
            writeColor(std::cout,pixelColor);
            

            

            
            

        }
    }
   // std::cerr<<"\nDone.\n";
}