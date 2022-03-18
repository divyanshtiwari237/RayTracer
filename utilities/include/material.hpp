#ifndef MATERIAL_H
#define MATERIAL_H

#include "vec3.hpp"
#include "maths.hpp"
#include "hittable.hpp"

struct hitRecord;

class Material
{
    public:
    virtual bool scatter(Ray& rIn, hitRecord& rec, color& attenuation, Ray& scattered) =0;
};

class Lambertian: public Material
{
    public:
        Lambertian(color a): albedo(a){}

        virtual bool scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered) override;
    
    public:
        color albedo;

};

class Metal: public  Material
{
    public:
    
    Metal(color a,double f): albedo(a), fuzz(f < 1 ? f : 1) {}

    virtual bool scatter( Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered) override;

    public:
    color albedo;
    double fuzz;

};

class Dielectric : public Material
{
    public:
    
    Dielectric(double indexofRefraction): ir(indexofRefraction) {}

    virtual bool scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered) override;



    public:
    double ir;
};

#endif