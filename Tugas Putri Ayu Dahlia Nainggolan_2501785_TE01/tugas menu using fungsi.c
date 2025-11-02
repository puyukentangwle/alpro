#include <stdio.h>
#include <windows.h>

void ketik(const char *teks, int delay) {
    while (*teks) {
        printf("%c", *teks);
        fflush(stdout);
        Sleep(delay);
        teks++;
    }
}

void animasiMenu() {
    for (int i = 0; i < 3; i++) {
        system("cls");
        printf("\n\n\n");
        ketik("     <(^^)>  MENU  <(^^)>", 40);
        printf("\n");
        Sleep(400);
        system("cls");
        Sleep(250);
    }
    system("cls");
}

float luasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

float luasBujurSangkar(float sisi) {
    return sisi * sisi;
}

void jenisSegitiga(float a, float b, float c) {
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (^_^)\n");
    } else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (o_o)\n");
    } else {
        printf("Segitiga Sembarang (¬_¬)\n");
    }
}

int main() {
    int pilihan;
    float p, l, s, a, b, c;

    do {
        animasiMenu();

        printf("1. Luas Persegi Panjang\n");
        printf("2. Luas Bujur Sangkar\n");
        printf("3. Jenis Segitiga\n");
        printf("4. Keluar.. (T_T)\n");
        printf("Ayo pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan panjang: ");
                scanf("%f", &p);
                printf("Masukkan lebar: ");
                scanf("%f", &l);
                printf("Luas Persegi Panjang = %.2f\n", luasPersegiPanjang(p, l));
                break;
            case 2:
                printf("Masukkan sisi: ");
                scanf("%f", &s);
                printf("Luas Bujur Sangkar = %.2f\n", luasBujurSangkar(s));
                break;
            case 3:
                printf("Masukkan sisi a: ");
                scanf("%f", &a);
                printf("Masukkan sisi b: ");
                scanf("%f", &b);
                printf("Masukkan sisi c: ");
                scanf("%f", &c);
                printf("Jenis Segitiga: ");
                jenisSegitiga(a, b, c);
                break;
            case 4:
                printf("Keluar dari program... Bye bye! (^_^)/\n");
                break;
            default:
                printf("Pilihan tidak valid! (x_x)\n");
        }

        if (pilihan != 4) {
            printf("\nTekan ENTER untuk kembali ke menu...");
            getchar(); getchar();
        }
    } while (pilihan != 4);

    return 0;
}