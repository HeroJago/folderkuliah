#include <stdio.h>

int main() {
    int angka, i, awal, akhir, hasil;

    printf("==========================\n");
    printf("Program Daftar Perkalian\n");
    printf("==========================\n");
    printf("Input Perkalian yang Diinginkan = ");
    scanf("%d", &angka);
    printf("Dari angka : ");
    scanf("%d", &awal);
    printf("Sampai Angka : ");
    scanf("%d", &akhir);

    printf("Daftar Perkalian %d Mulai Dari %d sampai %d", angka, awal, akhir);

    for (i = awal; i <= akhir; i++) {
        hasil = angka * i;
        printf("Hasil Dari %d x %d = %d\n", angka, i, hasil);
    };

    return 0;
}