/**
 * @file odd_numbers_continue.c
 * @brief Program perulangan menampilkan deret bilangan ganjil antara 11 sampai 30,
 *        kecuali bilangan 21 dan 27 menggunakan statement `continue`.
 * 
 * Output yang diharapkan:
 * 11 13 15 17 19 23 25 29
 */

#include <stdio.h>

int main() {
    for (int i = 11; i <= 30; i += 2) {
        if (i == 21 || i == 27) {
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}