/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Ray
*/

#include "include/include.hpp"

namespace RayTracer {

    using namespace Math;
    Ray::Ray() : origin(Point3()), direction(Vector3())
    {
    }

    Ray::Ray(const Math::Point3 &origin, const Math::Vector3 &direction) : origin(origin), direction(direction)
    {
    }

    Ray::Ray(const Ray &other) : origin(other.origin), direction(other.direction)
    {
    }

    Ray::Ray(const Ray &&other) noexcept : origin(std::move(other.origin)), direction(std::move(other.direction))
    {
    }

    std::ostream &operator<<(std::ostream &os, const Ray &ray)
    {
        os << "Ray(" << ray.origin << ", " << ray.direction << ")";
        return os;
    }

    Ray::~Ray()
    {
    }
}
