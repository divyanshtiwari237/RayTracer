#ifndef HITTABLE_LISTS
#define HITTABLE_LISTS

#include "hittable.hpp"
#include<memory>
#include<vector>

using std::shared_ptr;
using std::make_shared;

class HittableLists : public Hittable
{
    public:
        HittableLists(){}
        HittableLists(shared_ptr<Hittable> object)
        { 
            add(object);
        }

        void clear()
        {
            objects.clear();

        }

        void add (shared_ptr<Hittable> object)
        {
            objects.push_back(object);
        }

        virtual bool hit(Ray r,double t_min,double t_max,hitRecord &rec) override;

        public:
            std::vector<shared_ptr<Hittable>> objects;



};

#endif