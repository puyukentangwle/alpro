#include <stdio.h>

void cekSegitiga(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Bukan segitiga\n");
        return;
    }

    if (a == b && b == c) {
        printf("Segitiga Sama Sisi\n");
    } else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki\n");
    } else {
        printf("Segitiga Sembarang\n");
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    cekSegitiga(a, b, c);
    return 0;
}
