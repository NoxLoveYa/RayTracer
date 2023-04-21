/*
** EPITECH PROJECT, 2023
** bs
** File description:
** main
*/

#include "include/include.hpp"

int main(void) {
    RayTracer::Ray ray;
    RayTracer::Sphere sphere;
    std::cout << ray << " | hit: " << sphere.hits(ray) << std::endl;
    return 0;
}
