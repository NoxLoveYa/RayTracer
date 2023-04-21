/*
** EPITECH PROJECT, 2023
** bs
** File description:
** Color
*/

#pragma once

#include "Vector3.hpp"

namespace Math {

    class Color {
    public:
        Color() : e{0, 0, 0} {}
        Color(double r, double g, double b) : e{r, g, b} {}

        double r() const { return e[0]; }
        double g() const { return e[1]; }
        double b() const { return e[2]; }

        Color operator+(const Color& c) const {
            return Color(e[0] + c.e[0], e[1] + c.e[1], e[2] + c.e[2]);
        }

        Color operator*(double t) const {
            return Color(e[0] * t, e[1] * t, e[2] * t);
        }

        Color operator*(const Color& c) const {
            return Color(e[0] * c.e[0], e[1] * c.e[1], e[2] * c.e[2]);
        }

        friend Color operator*(double t, const Color& c) {
            return Color(t * c.e[0], t * c.e[1], t * c.e[2]);
        }

        friend std::ostream& operator<<(std::ostream& os, const Color& c) {
            os << int(255.999 * c.e[0]) << ' ' << int(255.999 * c.e[1]) << ' ' << int(255.999 * c.e[2]);
            return os;
        }

    private:
        double e[3];
    };

}
