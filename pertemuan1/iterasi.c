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