/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Vector3D
*/

#include "include/Vector3.hpp"

namespace Math {
    Vector3::Vector3() : x(0), y(0), z(0)
    {
    }

    Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z)
    {
    }

    Vector3::Vector3(const Vector3 &other) : x(other.x), y(other.y), z(other.z)
    {
    }

    Vector3::Vector3(const Vector3 &&other) noexcept : x(std::move(other.x)), y(std::move(other.y)), z(std::move(other.z))
    {
    }

    Vector3::~Vector3()
    {
    }

    Vector3 Vector3::operator=(const Vector3 &other)
    {
        if (this != &other) {
            x = other.x;
            y = other.y;
            z = other.z;
        }
        return *this;
    }

    Vector3 Vector3::operator=(const Vector3 &&other) noexcept
    {
        if (this != &other) {
            x = std::move(other.x);
            y = std::move(other.y);
            z = std::move(other.z);
        }
        return *this;
    }

    Vector3 Vector3::operator+(const Vector3 &other) const
    {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    Vector3 Vector3::operator+=(const Vector3 &other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    Vector3 Vector3::operator-(const Vector3 &other) const
    {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    Vector3 Vector3::operator-=(const Vector3 &other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        return *this;
    }

    Vector3 Vector3::operator*(const Vector3 &other) const
    {
        return Vector3(x * other.x, y * other.y, z * other.z);
    }

    Vector3 Vector3::operator*=(const Vector3 &other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;
        return *this;
    }

    Vector3 Vector3::operator/(const Vector3 &other) const
    {
        return Vector3(x / other.x, y / other.y, z / other.z);
    }

    Vector3 Vector3::operator/=(const Vector3 &other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;
        return *this;
    }

    Vector3 Vector3::operator*(double scalar) const
    {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    Vector3 Vector3::operator*=(double scalar)
    {
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }

    Vector3 Vector3::operator/(double scalar) const
    {
        return Vector3(x / scalar, y / scalar, z / scalar);
    }

    Vector3 Vector3::operator/=(double scalar)
    {
        x /= scalar;
        y /= scalar;
        z /= scalar;
        return *this;
    }

    double Vector3::length() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    double Vector3::dot(const Vector3 &other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    std::ostream &operator<<(std::ostream &os, const Vector3 &vector)
    {
        os << "Vector3(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
        return os;
    }

}
