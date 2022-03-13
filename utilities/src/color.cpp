#include"color.hpp"
#include "maths.hpp"
#include<ostream>

void writeColor(std:: ostream &out, color pixelColor,int samplesperPixel)
{
    auto r = pixelColor.x();
    auto g = pixelColor.y();
    auto b = pixelColor.z();

    // Divide the color by the number of samples.
    auto scale = 1.0 / samplesperPixel;
    
    r = sqrt(r*scale);
    g = sqrt(g*scale);
    b = sqrt(b*scale);
    out<<static_cast<int>(256*clamp(r,0.0,0.999))<<" "
       <<static_cast<int>(256*clamp(g,0.0,0.999))<<" "
       <<static_cast<int>(256*clamp(b,0.0,0.999))<<"\n";
}
