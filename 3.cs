#include <stdio.h>

int main(){
    while(1){
        char harf;
        printf("Bir harf giriniz: ");
        scanf(" %c", &harf);

        if(harf=='a' || harf=='e' || harf=='i' || harf=='o' || harf=='u' ||
           harf=='A' || harf=='E' || harf=='I' || harf=='O' || harf=='U'){
            printf("Sesli harf\n");
        }else{
            printf("Sessiz harf\n");
        }
        printf("Program bitti, basa donuluyor...\n\n");
    }
}
