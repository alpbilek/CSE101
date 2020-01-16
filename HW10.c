//#HW10
//ALP EMİR BİLEK
//161044049


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//FONSİKYONLARIMIZI TANIMLADIK.
void cikolataboyutlandirma(int cikolata[], int size);
void printcikolata(int cikolata[], int size);
void yarisma(int cikolata[], int size);
void test();
//TEST FONKSİYONUMUZU ÇAĞIRDIK.
int main() {
    test();
    return 0;
}
//ARRAYLARA RANDOM [1-11] DEĞERLER ATADIK.
void cikolataboyutlandirma(int cikolata[], int size){
    srand(time(NULL));
    int i;
    for(i=0;i<size;++i){
        cikolata[i] = (rand() % 11) +1;
    }
}
//ARRAYLARI PRİNT ETTİK.
void printcikolata(int cikolata[], int size){
    int i;
    for(i=0;i<size;++i){
        printf("%d ", cikolata[i]);
    }

    printf("\n");
}
//MEHMET İLE AYŞE ARASINDA GEÇİCEK OLAN YARIŞMA FONKSİYONUNU YAZDIK.
void yarisma(int cikolata[], int size){
    int ayse, mehmet, tempayse, tempmehmet;
    ayse = 0;
    mehmet = 0;
//ARRAYLARI YAZDIĞIMIZ FONKİSYON İLE ARRAYIMIZI PRİNT ETTİĞİMİZ FONKSİYONU ÇAĞIRIYORUZ.
    cikolataboyutlandirma(cikolata, size);
    printcikolata(cikolata, size);
//AYŞENİN SONDAN MEHMETİN BAŞTAN BAŞLAMASI İÇİN ARRAYLARI AYŞE İLE MEHMETE ATIYORUZ.
    tempayse = cikolata[size - 1];
    //MEHMET AYŞEDEN 2 KAT DAHA HIZLI YEDİĞİ İÇİN AYŞENİN BAŞLADIĞI ARRAYI 2 İLE ÇARPIYORUZ(ZAMAN KAVRAMINI KAYBETMEMEK İÇİN).
    tempayse*=2;
    tempmehmet = cikolata[0];
    //YARIŞMANIN OLABİLMESİ İÇİN YANİ İKİSİDE BİRER ÇİKOLATA YİYİP BIRAKMAMASI İÇİN BİR WHİLE DÖNGÜSÜ YAZIYORUZ.
    while(ayse + mehmet < size){
        //EĞER MEHMET ÇİKOLATASINI BİTİRİRSE DİĞER ÇİKOLATAYA GEÇSİN.
        if(tempmehmet == 0){
            tempmehmet = cikolata[mehmet];
        }
//EĞER AYŞE ÇİKOLATASINI BİTİRİRSE DİĞER ÇİKOLATAYA GEÇSİN VE YİNE 2 İLE ÇARPSIN.
        if(tempayse == 0){
            tempayse = cikolata[size - ayse - 1];
            tempayse*=2;
        }
//EĞER AYŞENİN ÇİKOLATASININ BOYU MEHMETİNKİNDEN BÜYÜKSE AYŞENİNKİNDEN MEHMETİNKİNİN ÇIKAR VE MEHMET DİĞER ÇİKOLATAYA GEÇSİN.
        if(tempayse > tempmehmet){
            tempayse-=tempmehmet;
            tempmehmet=0;
            ++mehmet;
        }
//EĞER MEHMETİN ÇİKOLATASININ BOYU AYŞENİNKİNDEN BÜYÜKSE MEHMETİNKİNDEN AYŞENİNKİNİ ÇIKAR VE AYŞE DİĞER ÇİKOLATAYA GEÇSİN.
        if(tempmehmet > tempayse){
            tempmehmet-=tempayse;
            tempayse=0;
            ++ayse;
        }
//ORTADAKİ ÇİKOLATAYI MEHMET ALSIN
        if((tempayse == tempmehmet) && mehmet + ayse != size - 3){
            ++ayse;
            ++mehmet;
            tempayse=0;
            tempmehmet=0;
        }
        else if(tempayse == tempmehmet){
            ++mehmet;
            tempmehmet=0;
        }
//EĞER MEHMET ÇİKOLATASINI AYŞEDEN ÖNCE BİTİRİRSE VE AYŞE HALA YEMEYE DEVAM EDİYORSA MEHMET O ÇİKOLATAYA HİÇ KARIŞMAYACAK VE AYŞE ÇİKOLATASINI DEVAM EDECEK(BU DURUM İKİSİNİN ÇİKOLATALARI YAN YANAYSA)
        if(mehmet == size - ayse - 1){
            if(tempmehmet == 0){
                ++ayse;
            }
            else{
                ++mehmet;
            }
        }
    }
    printf("Mehmet: %d\n",mehmet);
    printf("Ayse: %d\n",ayse);
//EĞER MEHMETİN YEDİĞİ ÇİKOLATA FAZLAYSA MEHMETİ PRİNT EDİYORUZ.
    if(mehmet>ayse){
        printf("Kazanan: Mehmet\n");
    }
//EĞER AYŞENİN YEDİĞİ ÇİKOLATA FAZLAYSA AYŞEYİ PRİNT EDİYORUZ.
    else if(ayse>mehmet){
        printf("Kazanan: Ayse\n");
    }
//EĞER İKİSİNİN YEDİĞİ ÇİKOLATALAR EŞİTSE BERABEREYİ PRİNT EDİYORUZ.
    else{
        printf("Berabere\n");
    }

}
//TEST FONSKİYONUMUZDA YARIŞMA FONKSİYONUNU ÇAĞIRIYORUZ.
void test(){
    int cikolatalar[6];
    yarisma(cikolatalar, 6);
}