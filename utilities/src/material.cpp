#include "materials.hpp"

bool Lambertian:: scatter(Ray& rIn ,hitRecord& rec, color& attenuation, Ray& scattered)
{
    auto scatterDirection = rec.normal() + vec3::randomunitVector();
    scattered =Ray(rec.p,scatterDirection);
    attenuation = albedo;
    return true;
}