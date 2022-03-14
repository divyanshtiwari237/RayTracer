#ifndef MATERIAL_H
#define MATERIAL_H

#include "maths.hpp"

struct hitRecord;

class MATERIAL
{
    public:
    virtual bool scatter(Ray rIn, hitRecord& rec, color attenuation, Ray scattered) =0;
};
#endif