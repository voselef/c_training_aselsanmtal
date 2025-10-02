#include <stdio.h>

int main(){
    int ogrenciSayisi = 5;
    int notSayisi = 4;

    for(int i=1; i<=ogrenciSayisi; i++){
        int toplam = 0;
        for(int j=1; j<=notSayisi; j++){
            int notDeger;
            printf("%d. ogrencinin %d. notunu giriniz: ", i, j);
            scanf("%d", &notDeger);
            toplam += notDeger;
        }
        int ortalama = toplam / notSayisi;
        printf("%d. ogrencinin ortalamasi: %d\n", i, ortalama);
        if(ortalama < 50){
            printf("Durum: Kaldi\n");
        }else{
            printf("Durum: Gecti\n");
        }
        printf("\n");
    }
}
