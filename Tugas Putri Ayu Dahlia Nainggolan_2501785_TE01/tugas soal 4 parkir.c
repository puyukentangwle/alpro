#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    if (end < start) end += 24 * 60; 

    int duration = end - start;
    int hh = duration / 60;
    int mm = duration % 60;

    printf("%d jam %d menit\n", hh, mm);
    return 0;
}
