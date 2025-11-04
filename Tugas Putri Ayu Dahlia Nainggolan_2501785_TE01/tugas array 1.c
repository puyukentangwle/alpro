#include <stdio.h>

int main(){
    while(1){
        int jumlahData = 0;
        int arrayInt[100];
        printf("Masukkan jumlah n Array: ");
        scanf("%d", &jumlahData);
        if(jumlahData <= 100){
            for (int i = 0; i < jumlahData; i++){
                int data;
                printf("Masukan data elemen array ke %d: ", i);
                scanf("%d", &data);
                arrayInt[i] = data;
            }
            printf("element\tvalue\tgraph\n");
            for(int i = 0; i < jumlahData; i++){
                printf("%d\t%d\t", i+1, arrayInt[i]);
                for(int grapCounter = 0; grapCounter < arrayInt[i]; grapCounter++){
                    printf("*");
                }
                printf("\n");
            }
        }
        else{
            printf("Data tidak boleh lebih dari 100\n");
        }
        
    }
    return 0;
}