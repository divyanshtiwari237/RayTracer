#ifndef MATHS_H
#define MATHS_H

#include <cmath>
#include <limits>
#include <memory>
#include "ray.hpp"
#include "vec3.hpp"

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degreestoRadians(double degrees) {
    return degrees * pi / 180.0;
}


#endif 