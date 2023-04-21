/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Point3
*/

#pragma once

#include <cmath>
#include <iostream>

#include "Vector3.hpp"

namespace Math {
    class Point3 {
        public:
            Point3();
            Point3(double x, double y, double z);
            Point3(const Point3 &other);
            Point3(const Point3 &&other) noexcept;
            ~Point3();

            // Operators
            Point3 operator+(const Point3 &other) const;
            Point3 operator+=(const Point3 &other);
            Point3 operator-(const Point3 &other) const;
            Point3 operator-=(const Point3 &other);
            Point3 operator*(const Point3 &other) const;

            Point3 operator+(const Vector3 &other) const;

            friend std::ostream &operator<<(std::ostream &os, const Point3 &point);

            operator Vector3() const {
                return Vector3(x, y, z);
            }

            //Attributes
            double x, y, z;
    };
}
