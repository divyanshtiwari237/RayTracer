#include"color.hpp"
#include<iostream>

void writeColor(std:: ostream &out, color pixelColor)
{
    out<<static_cast<int>(255.999*pixelColor[0])<<" "
       <<static_cast<int>(255.999*pixelColor[1])<<" "
       <<static_cast<int>(255.999*pixelColor[2])<<"\n";
}
