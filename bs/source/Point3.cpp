/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Point3
*/

#include "include/include.hpp"

namespace Math {
    Point3::Point3() : x(0), y(0), z(0) {};
    Point3::Point3(double x, double y, double z) : x(x), y(y), z(z) {};
    Point3::Point3(const Point3 &other)  : x(other.x), y(other.y), z(other.z) {};
    Point3::Point3(const Point3 &&other) noexcept : x(std::move(other.x)), y(std::move(other.y)), z(std::move(other.z)) {};
    Point3::~Point3() {};

    // Operators
    Point3 Point3::operator+(const Point3 &other) const {
        return Point3(x + other.x, y + other.y, z + other.z);
    };

    Point3 Point3::operator+=(const Point3 &other) {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    };

    Point3 Point3::operator-(const Point3 &other) const {
        return Point3(x - other.x, y - other.y, z - other.z);
    };

    Point3 Point3::operator-=(const Point3 &other) {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        return *this;
    };

    Point3 Point3::operator*(const Point3 &other) const {
        return Point3(x * other.x, y * other.y, z * other.z);
    };

    std::ostream &operator<<(std::ostream &os, const Point3 &point) {
        os << "Point3(" << point.x << ", " << point.y << ", " << point.z << ")";
        return os;
    }

    Point3 Point3::operator+(const Vector3 &other) const {
        return Point3(x + other.x, y + other.y, z + other.z);
    };
}
