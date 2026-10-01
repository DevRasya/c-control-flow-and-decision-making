/**
 * @file temperature_converter_switch.c
 * @brief Program menu konversi suhu (Celsius, Fahrenheit, Reamur, Kelvin) menggunakan switch-case.
 * 
 * Menu Pilihan:
 * 1. Fahrenheit ke Celsius
 * 2. Celsius ke Fahrenheit
 * 3. Reamur ke Celsius
 * 4. Celsius ke Reamur
 * 5. Kelvin ke Celsius
 * 6. Celsius ke Kelvin
 */

#include <stdio.h>

int main() {
    int menu;
    float reamur, celcius, fahrenheit, kelvin;

    printf("===============================\n");
    printf("   PILIH MENU KONVERSI SUHU    \n");
    printf("===============================\n");
    printf("1. Fahrenheit ke Celsius\n");
    printf("2. Celsius ke Fahrenheit\n");
    printf("3. Reamur ke Celsius\n");
    printf("4. Celsius ke Reamur\n");
    printf("5. Kelvin ke Celsius\n");
    printf("6. Celsius ke Kelvin\n");
    printf("Masukkan Pilihan Anda (1-6): ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celcius = (fahrenheit - 32.0f) / 1.8f;
            printf("Hasil dari Fahrenheit ke Celsius adalah: %.2f C\n", celcius);
            break;

        case 2:
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &celcius);
            fahrenheit = (celcius * 1.8f) + 32.0f;
            printf("Hasil dari Celsius ke Fahrenheit adalah: %.2f F\n", fahrenheit);
            break;

        case 3:
            printf("Masukkan suhu dalam Reamur: ");
            scanf("%f", &reamur);
            celcius = 1.25f * reamur;
            printf("Hasil dari Reamur ke Celsius adalah: %.2f C\n", celcius);
            break;

        case 4:
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &celcius);
            reamur = (4.0f / 5.0f) * celcius;
            printf("Hasil dari Celsius ke Reamur adalah: %.2f R\n", reamur);
            break;

        case 5:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%f", &kelvin);
            celcius = kelvin - 273.15f;
            printf("Hasil dari Kelvin ke Celsius adalah: %.2f C\n", celcius);
            break;

        case 6:
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &celcius);
            kelvin = celcius + 273.15f;
            printf("Hasil dari Celsius ke Kelvin adalah: %.2f K\n", kelvin);
            break;

        default:
            printf("Pilihan anda tidak valid!\n");
            break;
    }

    return 0;
}