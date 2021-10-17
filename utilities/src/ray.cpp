#include"ray.hpp"

Ray::Ray(point3 &origin,vec3 &dir):
origin{origin},dir{dir}
{}

point3 Ray::pointAt(double t)
{
    point3 point =dir*t;
    point+= origin;
    return point;
}
