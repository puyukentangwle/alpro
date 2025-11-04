#include <stdio.h>

int main(){
    while(1){
        int n;
        int nilai[100];
        char initial[100][10];

        printf("\nMasukkan jumlah n Array (0 untuk keluar): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Program selesai.\n");
            break;
        }

        if (n < 0 || n > 100) {
            printf("Jumlah data tidak valid!\n");
            continue;
        }

        for (int i = 0; i < n; i++){
            printf("Masukkan initial siswa %d: ", i+1);
            scanf("%s", initial[i]);
            printf("Masukkan nilai siswa %s: ", initial[i]);
            scanf("%d", &nilai[i]);
        }

        printf("\nInitial\tNilai\tGraph\n");
        for (int i = 0; i < n; i++){
            printf("%s\t%d\t", initial[i], nilai[i]);
            for (int j = 0; j < nilai[i]; j++){
                printf("*");
            }
            printf("\n");
        }

        int maxIndex = 0;
        for (int i = 1; i < n; i++){
            if (nilai[i] > nilai[maxIndex]) {
                maxIndex = i;
            }
        }

        printf("\nSiswa dengan nilai tertinggi adalah %s inisial %d\n", initial[maxIndex], nilai[maxIndex]);
    }

    return 0;
}
