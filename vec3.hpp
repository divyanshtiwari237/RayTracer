#ifndef VEC_H
#define VEC3_H

#include<cmath>
#include<iostream>

using std::sqrt;

class vec3
{
    public:
    
    //e[3] stores the 3 components of the vector
    double e[3];
    
    // Constructor for the vec3 class
    vec3():e{0,0,0} {}
    vec3(double e0,double e1,double e2):e{e0,e1,e2}{}
    
    //getter for x-component
    double x()
    {
        return e[0];
    }
    //getter for y-component
    double y()
    {
        return e[1];
    }
    //getter for z-component
    double z()
    {
        return e[2];
    }

    vec3& operator+=(vec3 &v)
    {
        e[0]+=v.e[0];
        e[1]+=v.e[1];
        e[2]+=v.e[2];
        return *this;
    }

    vec3& operator*=(double t)
    {
        e[0]*=t;
        e[1]*=t;
        e[2]*=t;
        return *this;
    }

    vec3& operator/=(double t)
    {
        
        return *this*=1/t;
    }


    vec3 operator-()
    {
        return vec3(-e[0],-e[1],-e[2]);
    }
    double operator[](int i)
    {
        return e[i];
    }
    double length() 
    {
        return sqrt(length_squared());
    }
    double length_squared()
    {
        return e[0]*e[0]+e[1]*e[1]+e[2]*e[2];
    }
    

};
using point3=vec3;
using color = vec3;


#endif