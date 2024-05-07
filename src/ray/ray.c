#include "ray.h"
#include "../surfaces/sphere.h"

Ray ray(Tuple origin, Tuple direction) {
    return (Ray){origin,direction};
}
   
Tuple position(Ray r, double t) {
    // Calculate the position along the ray using the parametric equation
    double x = r.origin.x + r.direction.x * t;
    double y = r.origin.y + r.direction.y * t;
    double z = r.origin.z + r.direction.z * t;
    return (Tuple){x, y, z, 1}; // Assuming a homogeneous coordinate of 1 for points3
}

Sphere sphere(Tuple center, double radius) {
    return (Sphere){center, radius};
}