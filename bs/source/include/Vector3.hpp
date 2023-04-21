/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Vector3
*/

#pragma once

#include <cmath>
#include <iostream>

namespace Math {
    class Vector3 {
        public:
            // Constructors
            Vector3();
            Vector3(double x, double y, double z);
            Vector3(const Vector3 &other);
            Vector3(const Vector3 &&other) noexcept;
            ~Vector3();

            // Operators
            Vector3 operator=(const Vector3 &other);
            Vector3 operator=(const Vector3 &&other) noexcept;
            Vector3 operator+(const Vector3 &other) const;
            Vector3 operator+=(const Vector3 &other);
            Vector3 operator-(const Vector3 &other) const;
            Vector3 operator-=(const Vector3 &other);
            Vector3 operator*(const Vector3 &other) const;
            Vector3 operator*=(const Vector3 &other);
            Vector3 operator/(const Vector3 &other) const;
            Vector3 operator/=(const Vector3 &other);

            Vector3 operator*(double scalar) const;
            Vector3 operator*=(double scalar);
            Vector3 operator/(double scalar) const;
            Vector3 operator/=(double scalar);

            friend std::ostream &operator<<(std::ostream &os, const Vector3 &vector);

            // Methods
            double length() const;
            double dot(const Vector3 &other) const;

            //Attributes
            double x, y, z;
    };
}
