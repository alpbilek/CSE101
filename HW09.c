//#HW09
//ALP EMİR BİLEK
//161044049
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    //ARRAY'A RASTGELE SAYILAR ATIYORUZ.
    srand(time(NULL));
    //20'LİK ÜÇ ARRAY TANIMLIYORUZ.
    int array2[20];
    int array3[20];
    int array1[20];
    // DEĞİŞKENLERİMİZİ TANIMLIYORUZ.
    int counter1,counter2,i;
    double cosine_similarity,square_root,toplam1,toplam2,sonuc2,total,dot,sonuc1;
    counter1=0;
    counter2=0;
    dot=0;
    toplam1=0;
    sonuc1=0;
    square_root=0;
    cosine_similarity=0;
    toplam2=0;
    total=0;
    sonuc2=0;
    //ARRAYLARA RANDOM DEĞERLER ATIYORUZ.
    for(i=0;i<20;i++) {
        array1[i] = rand() % 10;
        array2[i] = rand() % 10;
    }
    //ARRAY1 'İ PRİNT EDİYORUZ.
    printf("VEKTOR 1=");
    for(i =0 ; i<20 ; i++) {
       printf("%d,",array1[i]);
    }
    //ARRAY2'Yİ PRİNT EDİYORUZ.
    printf("\nVEKTOR 2=");
    for(int i =0 ; i<20 ; i++) {
        printf("%d,", array2[i]);
    }
    //ARRAY1 DEKİ SAYILARIN NORMUNU ALIYORUZ.
    for(int k=0;k<=19;k++){
        //ARRAY1 DEKİ 0 LARI ALMAMAK İÇİN BİR COUNTER TUTUYORUZ.
        if(array1[k]!=0){
            counter1++;
        }
    }
    //ARRAY1 İN NORMUNU PRİNT EDİYORUZ.
    printf("\nVEKTOR 1 L0 NORM:");
    printf("%d",counter1);
    //ARRAY2 DEKİ SAYILARIN NORMUNU ALIYORUZ.
    for(int k=0;k<=19;k++){
        //ARRAY2 DEKİ 0 LARI ALMAMAK İÇİN BİR COUNTER TUTUYORUZ.
        if(array2[k]!=0){
            counter2++;
        }
    }
    //ARRAY2 İN NORMUNU PRİNT EDİYORUZ.
    printf("\nVEKTOR 2 L0 NORM:");
    printf("%d",counter2);
    printf("\nVEKTOR 1+ VEKTOR 2=");
    //ARRAY3'E ARRAY1 VE ARRAY2 NİN TOPLAMLARINI ATIYORUZ.
    for(i=0;i<20;i++){
        array3[i]=array1[i]+array2[i];
        //VEKTÖR1 VE VEKTÖR 2 Yİ PRİNT EDİYORUZ.
        printf("%d,", array3[i]);
    }
    for(i=0;i<20;i++){
        //COSİNE SİMİLARTY 'İ HESAPLAMAK İÇİN ARRAYLARIN KARELERİNİ ALIYORUZ.
        toplam1+=pow(array1[i],2);
        toplam2+=pow(array2[i],2);
        sonuc1=sonuc1+toplam1;
        sonuc2=sonuc2+toplam2;

    }
    for(i=0;i<20;i++){
        //VEKTÖRLERİN İÇ ÇARPIMINI BULMAK İÇİN ARRAYLARIN İNDEXLERİNİ ÇARPIP TOPLUYORUZ.
        total= array1[i] * array2[i];
        dot=total+dot;

    }
    //KARELERİNİ ALDIĞIMIZ ARRAYLARIN KAREKÖKLERİNİ ALIP TOPLUYORUZ.
    square_root= sqrt(sonuc1)*sqrt(sonuc2);
    //COSİNE SİMİLARTY İ HESAPLAMAK İÇİN İÇ ÇARPIMI BULDUĞUMUZ KAREKÖKE BÖLÜYORUZ.
    cosine_similarity=1-dot/square_root;
    //COSİNE SİMİLARİTY İ PRİNT EDİYORUZ.
    printf("\nsim(VEKTOR1,VEKTOR2)=%f",cosine_similarity);
    return 0;
}