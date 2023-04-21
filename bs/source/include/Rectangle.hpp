/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Rectangle
*/

#pragma once

#include <cmath>
#include <iostream>

#include "Point3.hpp"
#include "Vector3.hpp"

namespace RayTracer {
    class Rectangle {
        public:
            Rectangle();
            Rectangle(const Math::Point3 &origin, const Math::Vector3 &bottom_side, const Math::Vector3 &left_side);
            ~Rectangle();

            //Methods
            Math::Point3 pointAt(const double u, const double v) const;

            // Attributes
            Math::Point3 origin;
            Math::Vector3 bottom_side;
            Math::Vector3 left_side;
    };
}
