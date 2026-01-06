#include <stdio.h>

int main() {
    int a;

    a = 0;
    while (a < 10) {
        printf("PERTAMA Variable i sekarang bernilai : %d\n", a);
        a = a + 1;
    }

    int b;
    printf("Set Angka : ");
    scanf("%d", &b);

    while (b <= 10) {
        printf("KEDUA Variable i sekarang bernilai : %d\n", b);
        b = b + 1;
    }
}