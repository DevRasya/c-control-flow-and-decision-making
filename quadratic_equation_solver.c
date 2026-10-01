/**
 * @file quadratic_equation_solver.c
 * @brief Program untuk mencari akar-akar persamaan kuadrat (a*x^2 + b*x + c = 0).
 *        Menghitung nilai determinan D = b^2 - 4*a*c dan menentukan jenis akar:
 *        - D == 0 : 2 akar real kembar
 *        - D > 0  : 2 akar real berlainan
 *        - D < 0  : 2 akar imajiner berlainan (kompleks)
 * 
 * Catatan: Menggunakan fungsi pendekatan akar kuadrat numerik (metode Babylonian)
 *          tanpa bergantung pada pustaka math.h.
 */

#include <stdio.h>

/**
 * Menghitung akar kuadrat dari suatu bilangan positif menggunakan metode Babylonian.
 */
float hitung_akar(float n) {
    if (n <= 0.0f) return 0.0f;

    float x = n;
    float y = 1.0f;
    float e = 0.000001f; 

    while ((x - y > e) || (y - x > e)) {
        x = (x + y) / 2.0f;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b, c, D, x1, x2, realPart, imagPart, akarD;

    printf("==========================================\n");
    printf("   PROGRAM SOLVER PERSAMAAN KUADRAT       \n");
    printf("        a*x^2 + b*x + c = 0               \n");
    printf("==========================================\n");

    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    if (a == 0.0f) {
        printf("\nBukan persamaan kuadrat (nilai a tidak boleh 0).\n");
        return 0;
    }

    // Hitung Determinan
    D = (b * b) - (4.0f * a * c);

    printf("\nNilai Determinan (D) = %.2f\n", D);

    if (D == 0.0f) {
        x1 = -b / (2.0f * a);
        x2 = x1;
        printf("Terdapat 2 akar real yang kembar:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } 
    else if (D > 0.0f) {
        akarD = hitung_akar(D);
        x1 = (-b + akarD) / (2.0f * a);
        x2 = (-b - akarD) / (2.0f * a);
        printf("Terdapat 2 akar real yang berlainan:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else {
        akarD = hitung_akar(-D);
        realPart = -b / (2.0f * a);
        imagPart = akarD / (2.0f * a);
        printf("Terdapat 2 akar imajiner yang berlainan:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}