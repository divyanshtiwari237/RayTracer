#include "material.hpp"

bool Lambertian:: scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered)
{
    auto scatterDirection = rec.normal+ vec3::randomunitVector();
    if(scatterDirection.nearZero())
    {
        scatterDirection = rec.normal;
    }
    scattered =Ray(rec.p,scatterDirection);
    attenuation = albedo;
    return true;
}

bool Metal::scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered)
{
    vec3 reflected = vec3::reflect(vec3::unit_vector(rIn.getDir()), rec.normal);
    scattered = Ray(rec.p, reflected);
    attenuation = albedo;
    return (vec3::dot(scattered.getDir(), rec.normal) > 0);
}