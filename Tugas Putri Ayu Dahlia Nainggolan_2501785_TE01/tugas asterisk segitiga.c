#include <stdio.h>

int main() {
    int n;

    printf("Ayo masukkan jumlah baris asterisk segitiga yang kamu mau ^^: ");

    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Hey masukkan bilangan bulat positif dong.\n");
        return 1;
    }

    printf("Oke! Ini pola segitiga dengan jumlah %d baris:\n", n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}