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

    // Overloaded += operator for vector addition
    vec3& operator+=(vec3 &v)
    {
        e[0]+=v.e[0];
        e[1]+=v.e[1];
        e[2]+=v.e[2];
        return *this;
    }

    // Overloaded *= operator for vector scalar multiplication
    vec3& operator*=(double t)
    {
        e[0]*=t;
        e[1]*=t;
        e[2]*=t;
        return *this;
    }

    // Overloaded /= operator for vector scalar division
    vec3& operator/=(double t)
    {
        return *this*=1/t;
    }

    //returns the negative of the vector
    vec3 operator-()
    {
        return vec3(-e[0],-e[1],-e[2]);
    }

    //vector indexing
    double& operator[](int i)
    {
        return e[i];
    }

    //returns the magnitude of the vector
    double length() 
    {
        return sqrt(length_squared());
    }

    //returns the squared magnitude of the vector
    double length_squared()
    {
        return e[0]*e[0]+e[1]*e[1]+e[2]*e[2];
    }

    //overloaded << operator to print entire vector at once
    inline std::ostream &operator<<( vec3 &v)
    {
        std::cout<<v[0]<<" "<<v[1]<<" "<<v[2];
    }

    //+ operator used to add 2 vectors
    inline friend vec3 operator+ (vec3 &u,vec3 &v)
    {
        return vec3(u[0]+v[0],u[1]+v[1],u[2]+v[2]);
    }

    //- operator used to substract 2 vectors
    inline friend vec3 operator- (vec3 &u,vec3 &v)
    {
        return vec3(u[0]-v[0],u[1]-v[1],u[2]-v[2]);
    }

    //* operator used to multiply 2 vectors term by term
    inline friend vec3 operator* (vec3 &u,vec3 &v)
    {
        return vec3(u[0]*v[0],u[1]*v[1],u[2]*v[2]);
    }

    //* operator used to multiply  vector with a scalar
    inline friend vec3 operator* (vec3 &u,double t)
    {
        return vec3(u[0]*t,u[1]*t,u[2]*t);
    }

    //* operator used to multiply  vector with a scalar
    inline friend vec3 operator* (double t,vec3 &u)
    {
        return u*t;
    }

    // / operator used to divide vector with a scalar
    inline friend vec3 operator/ (vec3 &u,double t)
    {
        return u*(1/t);
    }

    //calculates dot product of 2 vectos
    inline double dot(vec3 &u,vec3&v)
    {
        return(u[0]*v[0] +u[1]*v[1]+u[2]*v[2]);
    }

    //calculates cross product of 2 vectors
    inline vec3 cross (vec3 &u,vec3&v)
    {
        return vec3(u.e[1] * v.e[2] - u.e[2] * v.e[1],
                    u.e[2] * v.e[0] - u.e[0] * v.e[2],
                    u.e[0] * v.e[1] - u.e[1] * v.e[0]);
    }

    //returns a unit vector in the direction of given vector
    inline vec3 unit_vector(vec3 v)
    {
        return v/v.length();
    }

};
using point3=vec3;  //alias point of vec3
using color = vec3;  //alias color of vec3


#endif