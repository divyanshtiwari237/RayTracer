#ifndef RAY_H
#define RAY_H

#include"vec3.hpp"

class Ray
{
    public:
    point3 origin; //point of reference of the ray
    vec3 dir; //direction cosine of the ray

    //Constructor for the Ray class
    Ray(point3 &origin, vec3 &dir);

    //getter function of origin
    inline point3 getOrigin()
    {
        return origin;
    }
    
    //getter function of direction cosine
    inline vec3 getDir()
    {
        return dir;
    }

    // return a point at t distance from the orign along the ray
    point3 pointAt ( double t); 
    
        
    

};

#endif