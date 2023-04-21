/*
** EPITECH PROJECT, 2023
** bs
** File description:
** camera
*/

#pragma once

#include <cmath>
#include <iostream>

#include "Rectangle.hpp"
#include "Ray.hpp"

namespace RayTracer
{
    class Camera
    {
        public:
            Camera();
            Camera(const Math::Point3 &origin, const Rectangle &screen);
            ~Camera();

            //Methods
            Ray getRay(const double u, const double v) const;

            // Attributes
            Math::Point3 origin;
            Rectangle screen;
    };
}
