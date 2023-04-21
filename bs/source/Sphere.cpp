/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Sphere
*/

#include "include/Sphere.hpp"

namespace RayTracer {
    Sphere::Sphere() : center(Math::Point3()), radius(0)
    {
    }

    Sphere::Sphere(const Math::Point3 &center, const double radius) : center(center), radius(radius)
    {
    }

    Sphere::~Sphere()
    {
    }

    bool Sphere::hits(const RayTracer::Ray &ray) const
    {
        Math::Vector3 oc = ray.origin - center;
        double a = ray.direction.dot(ray.direction);
        double b = 2.0 * oc.dot(ray.direction);
        double c = oc.dot(oc) - radius * radius;
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0)
            return (false);
        else
            return (true);
    }
}
