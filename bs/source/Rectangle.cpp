/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Rectangle
*/

#include "include/include.hpp"

namespace RayTracer {
    Rectangle::Rectangle() : origin(Math::Point3(0, 0, 0)), bottom_side(Math::Vector3(0, 0, 0)), left_side(Math::Vector3(0, 0, 0)) {}

    Rectangle::Rectangle(const Math::Point3 &origin, const Math::Vector3 &bottom_side, const Math::Vector3 &left_side) : origin(origin), bottom_side(bottom_side), left_side(left_side) {}

    Rectangle::~Rectangle() = default;

    Math::Point3 Rectangle::pointAt(const double u, const double v) const {
        return this->origin + this->bottom_side * u + this->left_side * v;
    }
}
