/**
 * @file circle_area_circumference.c
 * @brief Program untuk menghitung luas dan keliling lingkaran berdasarkan input radius (jari-jari).
 * 
 * Rumus:
 * - Keliling = 2 * pi * r
 * - Luas     = pi * r^2
 */

#include <stdio.h>

int main() {
    const float pi = 3.14f;
    float keliling, luas, radius;

    printf("Masukkan Radius: ");
    scanf("%f", &radius);

    keliling = pi * (2 * radius);
    luas = pi * (radius * radius);

    printf("Luas lingkaran adalah: %.2f\n", luas);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}