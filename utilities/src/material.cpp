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
    scattered = Ray(rec.p, reflected +fuzz*vec3::randominunitSphere());
    attenuation = albedo;
    return (vec3::dot(scattered.getDir(), rec.normal) > 0);
}

bool Dielectric::scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered)
{
    attenuation = color(1.0,1.0,1.0);
    double refractionRatio = rec.frontFace ? (1.0/ir):ir;

    vec3 unitDirection = vec3::unit_vector(rIn.getDir());
    vec3 refracted = vec3::refract(unitDirection,rec.normal,refractionRatio);
    scattered = Ray(rec.p,refracted);
    return true;
}