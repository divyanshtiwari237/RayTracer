#ifndef VEC3_H
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
    vec3(const vec3& vector):e{vector.e[0],vector.e[1],vector.e[2]}{}

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
    vec3& operator+=(vec3 );
   
    // Overloaded *= operator for vector scalar multiplication
    vec3& operator*=(double);
    
    // Overloaded /= operator for vector scalar division
    vec3& operator/=(double);
    
    //returns the negative of the vector
    vec3 operator-();
    
    //vector indexing
    double&  operator[](int);
    
    
    //returns the magnitude of the vector
    double length();
    
    //returns the squared magnitude of the vector
    double length_squared();
    
    //overloaded << operator to print entire vector at once
    inline std::ostream &operator<<(  vec3 v)
    {
        std::cout<<v[0]<<" "<<v[1]<<" "<<v[2];
    }

    //+ operator used to add 2 vectors
    inline friend vec3 operator+  (vec3 u, vec3 v) 
    {
        return vec3(u[0]+v[0],u[1]+v[1],u[2]+v[2]);
    }

    //- operator used to substract 2 vectors
    inline friend vec3 operator- (vec3 u,vec3 v)
    {
        return vec3(u[0]-v[0],u[1]-v[1],u[2]-v[2]);
    }

    //* operator used to multiply 2 vectors term by term
    inline friend vec3 operator* (vec3 u,vec3 v)
    {
        return vec3(u[0]*v[0],u[1]*v[1],u[2]*v[2]);
    }

    //* operator used to multiply  vector with a scalar
    inline friend vec3 operator* (vec3 u,double t)
    {
        return vec3(u[0]*t,u[1]*t,u[2]*t);
    }

    //* operator used to multiply  vector with a scalar
    inline friend vec3 operator* (double t,vec3 u)
    {
        return u*t;
    }

    // / operator used to divide vector with a scalar
    inline friend vec3 operator/ (vec3 u,double t)
    {
        return u*(1/t);
    }

    //calculates dot product of 2 vectos
    static inline double dot(vec3 u,vec3 v)
    {
        return(u[0]*v[0] +u[1]*v[1]+u[2]*v[2]);
    }

    //calculates cross product of 2 vectors
    static inline vec3 cross (vec3 u,vec3 v)
    {
        return vec3(u.e[1] * v.e[2] - u.e[2] * v.e[1],
                    u.e[2] * v.e[0] - u.e[0] * v.e[2],
                    u.e[0] * v.e[1] - u.e[1] * v.e[0]);
    }

    //returns a unit vector in the direction of given vector
    static inline vec3 unit_vector(vec3 v)
    {
        return v/v.length();
    }

    inline static double randomDouble()
    {
        return rand()/(1.0 +RAND_MAX);
    }
    
    inline static double randomDouble(int min,int max)
    {
        return min +(max-min)*randomDouble();
    }

    inline static vec3 random()
    {
        return vec3(randomDouble(),randomDouble(),randomDouble());
    }

    inline static vec3 random(int min,int max)
    {

       
        return vec3(randomDouble(min,max),randomDouble(min,max),randomDouble(min,max));

    }

    inline static vec3 randominunitSphere ()
    {
        while(true)
        {
            auto p = vec3::random(-1,1);
            
            if(p.length_squared()>1) continue;
            return p;
        }
    }

    inline static vec3 randomunitVector()
    {
        return unit_vector(randominunitSphere());
    }

    inline static vec3 randominHemisphere(vec3 normal)
    {
    
        vec3 inunitSphere = randominunitSphere();
   
        if (vec3::dot(inunitSphere,normal)>0.0) // In the same hemisphere as the normal
        {
            return inunitSphere;
        }
    
        else
        {
            return -inunitSphere;
        }
}


};
using point3 = vec3;  //alias point3 of vec3
using color = vec3;  //alias color of vec3


#endif