#include <stdio.h>

int main() {
    while (1) {
        int jumlahData = 0;
        printf("Masukkan jumlah n Array (0 untuk keluar): ");
        scanf("%d", &jumlahData);

        if (jumlahData == 0) {
            printf("Program selesai.\n");
            break;
        }

        int nilai[jumlahData];
        char initial[jumlahData];

        for (int i = 0; i < jumlahData; i++) {
            printf("Masukkan inisial siswa %d: ", i + 1);
            scanf(" %c", &initial[i]);  // <-- ada SPASI sebelum %c di sini

            printf("Masukkan nilai siswa %d: ", i + 1);
            scanf("%d", &nilai[i]);
        }

        printf("\nDaftar Nilai Sebelum Sorting\n");
        printf("Initial\tNilai\n");
        for (int i = 0; i < jumlahData; i++) {
            printf("%c\t%d\n", initial[i], nilai[i]);
        }

        // Sorting ascending (terendah ke tertinggi)
        for (int i = 0; i < jumlahData; i++) {
            for (int j = i + 1; j < jumlahData; j++) {
                if (nilai[i] > nilai[j]) {
                    int temp = nilai[i];
                    nilai[i] = nilai[j];
                    nilai[j] = temp;

                    char tempInitial = initial[i];
                    initial[i] = initial[j];
                    initial[j] = tempInitial;
                }
            }
        }

        printf("\nDaftar Nilai Sesudah Sorting\n");
        printf("Initial\tNilai\n");
        for (int i = 0; i < jumlahData; i++) {
            printf("%c\t%d\n", initial[i], nilai[i]);
        }
        int total = 0;
for (int i = 0; i < jumlahData; i++) {
    total += nilai[i];
}
float rataRata = (float)total / jumlahData;
printf("\nRata-rata nilai siswa adalah: %.2f\n\n", rataRata);
    }

    return 0;
}
