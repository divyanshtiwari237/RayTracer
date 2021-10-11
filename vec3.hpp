#ifndef VEC_H
#define VEC3_H

#include<cmath>
#include<iostream>

using std::sqrt;

class vec3
{
    public:
    
    double e[3];
    
    vec3(double e0,double e1,double e2):e{e0,e1,e2}{}
    
    double x()
    {
        return e[0];
    }
    
    double y()
    {
        return e[1];
    }
    double z()
    {
        return e[2];
    }
    

};


#endif