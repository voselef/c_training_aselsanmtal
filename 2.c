#include <stdio.h>

int main(){
    while(1){
        int sayi;
        printf("Sayiyi giriniz: ");
        scanf("%d", &sayi);

        if(sayi > 0){
            printf("Pozitif\n");
        }else if(sayi < 0){
            printf("Negatif\n");
        }else{
            printf("Sifir\n");
        }
        printf("Program bitti, basa donuluyor...\n\n");
    }
}
