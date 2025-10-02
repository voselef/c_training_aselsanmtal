#include <stdio.h>

int main(){
    int s1, s2, s3;
    printf("Uc sayi giriniz:\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    int gecici;
    if(s1 > s2){ gecici = s1; s1 = s2; s2 = gecici; }
    if(s1 > s3){ gecici = s1; s1 = s3; s3 = gecici; }
    if(s2 > s3){ gecici = s2; s2 = s3; s3 = gecici; }

    printf("Sirali: %d %d %d\n", s1, s2, s3);
}
