/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Camera
*/

#include "include/include.hpp"

namespace RayTracer
{
    Camera::Camera() : origin(Math::Point3(0, 0, 0)), screen(Rectangle(Math::Point3(-1, -1, -1), Math::Vector3(2, 0, 0), Math::Vector3(0, 2, 0)))
    {
    }

    Camera::Camera(const Math::Point3 &origin, const Rectangle &screen) : origin(origin), screen(screen)
    {
    }

    Camera::~Camera()
    {
    }

    Ray Camera::getRay(const double u, const double v) const
    {
        Math::Point3 point = this->screen.pointAt(u, v);
        Math::Vector3 direction = point - this->origin;
        return Ray(this->origin, direction);
    }
}
