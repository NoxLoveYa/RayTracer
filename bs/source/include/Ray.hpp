/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Ray
*/

#pragma once

#include <cmath>
#include <iostream>

#include "Vector3.hpp"
#include "Point3.hpp"

namespace RayTracer {
    class Ray {
        public:
            // Constructors
            Ray();
            Ray(const Math::Point3 &origin, const Math::Vector3 &direction);
            Ray(const Ray &other);
            Ray(const Ray &&other) noexcept;
            ~Ray();

            // Operators
            friend std::ostream &operator<<(std::ostream &os, const Ray &ray);

            // Attributes
            Math::Point3 origin;
            Math::Vector3 direction;
    };
}
