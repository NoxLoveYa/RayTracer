/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Sphere
*/

#pragma once

#include <cmath>
#include <iostream>

#include "Ray.hpp"

namespace RayTracer {
    class Sphere {
        public:
            Sphere();
            Sphere(const Math::Point3 &center, const double radius);
            ~Sphere();

            //Methods
            bool hits(const RayTracer::Ray &ray) const;

            // Attributes
            Math::Point3 center;
            double radius;
    };
}
