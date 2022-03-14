#include "hittable.hpp"

bool Sphere::hit(Ray r,double t_min,double t_max, hitRecord& rec)
{
    vec3 oc = r.getOrigin() - center;
    auto a = r.getDir().length_squared();
    auto half_b = vec3::dot(oc,r.getDir());
    auto c = oc.length_squared() -radius*radius;

    auto discriminant = half_b*half_b - a*c;

    if (discriminant < 0)
    {
         return false;
    }

    auto sqrtd = sqrt(discriminant);
    auto root = (-half_b - sqrtd) / a;

    if (root < t_min || t_max < root)
    {
        root = (-half_b + sqrtd) / a;

        if (root < t_min || t_max < root)
        {
            return false;
        }
    }

    rec.t = root;
    rec.p = r.pointAt(rec.t);
    vec3 outwardNormal = (rec.p - center) / radius;
    rec.matPtr = matPtr;
    rec.setfrontFace(r,outwardNormal);
    
    return true;
}