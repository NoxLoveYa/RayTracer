/*
** EPITECH PROJECT, 2023
** bs
** File description:
** main
*/

#include "include/include.hpp"

void generatePPM(const char* filename, const RayTracer::Camera &camera, const RayTracer::Sphere &sphere) {
    const int width = 400;
    const int height = 200;

    // Open file for writing
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Failed to open file for writing: " << filename << std::endl;
        return;
    }

    // Write PPM header
    file << "P3\n" << width << " " << height << "\n255\n";

    // Render scene and write pixel colors to file

    for (double y = 0; y < width; y += 1) {
        for (double x = 0; x < height; x += 1) {
            double u = x / (width - 1);
            double v = y / (height - 1);
            RayTracer::Ray ray = camera.getRay(u, v);
            Math::Color pixelColor = Math::Color(0, 0, 0);
            if (sphere.hits(ray)) {
                pixelColor = Math::Color(255, 45, 87);
            }
            int r = int(pixelColor.r());
            int g = int(pixelColor.g());
            int b = int(pixelColor.b());

            file << r << " " << g << " " << b << "\n";
        }
    }

    // Close file
    file.close();

    std::cout << "PPM file saved as: " << filename << std::endl;
}


int main(void) {
    generatePPM("test.ppm", RayTracer::Camera(), RayTracer::Sphere(Math::Point3(0, 0, -10), 0.5));
    return 0;
}
