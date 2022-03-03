#include"hittablelists.hpp"

bool HittableLists::hit (Ray r, double t_min, double t_max, hitRecord& rec)
{
    hitRecord tempRec;
    bool hitAnything = false;
    auto closestsoFar = t_max;

    for (auto& object :objects)
    {
        if(object->hit(r,t_min,closestsoFar,tempRec))
        {
            hitAnything=true;
            closestsoFar =tempRec.t;
            rec = tempRec;
        }
    }

    return hitAnything;

}

