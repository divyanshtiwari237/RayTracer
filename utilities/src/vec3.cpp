#include"vec3.hpp"

vec3& vec3::operator+=(vec3 &v)
{
    e[0]+=v.e[0];
    e[1]+=v.e[1];
    e[2]+=v.e[2];
    return *this;
}

vec3& vec3::operator*=(double t)
{
    e[0]*=t;
    e[1]*=t;
    e[2]*=t;
    return *this;
}

vec3& vec3::operator/=(double t)
{
    return *this*=1/t;
}

vec3 vec3::operator-()
{
    return vec3(-e[0],-e[1],-e[2]);
}

 double& vec3::operator[](int i)
 {
     return e[i];
 }

 double vec3:: length() 
 {
    return sqrt(length_squared()); 
 }

 double vec3::length_squared()
 {
      return e[0]*e[0]+e[1]*e[1]+e[2]*e[2];
 }

