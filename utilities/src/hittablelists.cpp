#include "hittablelists.hpp"

bool Hittablelists::hit (Ray r, double t_min, double t_max, hitRecord& rec)
{
    hitRecord tempRec;
    bool hitAnything = false;
    auto closestsoFar = t_max;

    for (auto& object :objects)
    {
        if(object->hit(r,t_min,closestsoFar,tempRec))
        {
            hit_anything=true;
            closestsoFar =tempRec.t;
            rec = tempRec;
        }
    }

    return hitAnyting;

}

