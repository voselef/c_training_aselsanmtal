#include <stdio.h>

int main(){
    while(1){
        int ilkSayi, ikinciSayi;
        printf("Ilk sayiyi giriniz: ");
        scanf("%d", &ilkSayi);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%d", &ikinciSayi);

        printf("Toplam: %d\n", ilkSayi + ikinciSayi);
        printf("Fark: %d\n", ilkSayi - ikinciSayi);
        printf("Carpim: %d\n", ilkSayi * ikinciSayi);

        if(ikinciSayi != 0){
            printf("Bolum: %d\n", ilkSayi / ikinciSayi);
        }else{
            printf("Sifira bolme hatasi!\n");
        }
        printf("Program bitti, basa sariyor...\n\n");
    }
}
