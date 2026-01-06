#include <stdio.h>

int main() {
    int udin, hasil, i;

    printf("========================\n");
    printf("Program Daftar Perkalian\n");
    printf("========================\n");
    printf("Masukkan Angka Perkalian Yang Diinginkan : ");
    scanf("%d", &udin);

    for (i = 1;i < 11; i++) {
        hasil = udin * i;
        printf("Hasil dari %d x %d = %d\n", udin, i, hasil);
    };

    return 0;
}

#include <stdio.h>

int main() {
    int i;

    for (i = 1;i < 11; i++) {
        printf("Hello World ke %d\n", i);
    };

    return 0;
}

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