#include <stdio.h>
#include <stdlib.h>

int main(){
    while(1){
        int sayi;
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        for(int i=1; i<=sayi; i++){
            if(i % 3 == 0){
                continue;
            }
            if(i > 50){
                break;
            }
            printf("%d\n", i);
        }
        printf("Program bitti, basa donuluyor...\n\n");
    }
}
