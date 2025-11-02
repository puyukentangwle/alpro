#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("Kelipatan 3 dan 5\n");
    } else if (n % 3 == 0) {
        printf("Kelipatan 3\n");
    } else if (n % 5 == 0) {
        printf("Kelipatan 5\n");
    }

    return 0;
}
