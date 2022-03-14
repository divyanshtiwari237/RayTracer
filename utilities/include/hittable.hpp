#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.hpp"
#include "maths.hpp"

class Material;

struct hitRecord
{
    point3 p;
    vec3 normal;
    shared_ptr<material> matPtr;
    double t;
    bool frontFace;

    inline void setfrontFace(Ray r, vec3 outwardNormal)
    {
        frontFace = vec3::dot(r.getDir(),outwardNormal)<0;
        normal = frontFace? outwardNormal:-outwardNormal;
    }
};

class Hittable
{
    public:

    virtual bool hit(Ray r,double t_min,double t_max,hitRecord& rec) =0;
};

class Sphere: public Hittable
{
    public:
        Sphere(){};
        Sphere(point3 center, double r, shared_ptr<MATERIAL> matPtr): center(center),radius(r), matPtr(matPtr){};

        virtual bool hit(Ray r, double t_min,double t_max, hitRecord& rec) override;
    
    public:
        point3 center;
        double radius;
        shared_ptr<MATERIAL> matPtr;
};

#endif