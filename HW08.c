#include <stdio.h>
int sinx(int x);
int powe(int taban,int us);
int fact(int sayi);

int sinx(int x){
    double radian=3.14*x/180;
    int n=1;
    double temp;
    int tempradian = radian * 100000;
    int sonuc=0;
    while(n<=6){
        temp=1;
        temp *= powe(tempradian,2*n-1);
        temp /= 100000;
        temp /= fact(2*n-1);
        if(n%2==1){
            sonuc += temp*100000;
        }
        else{
            sonuc -= temp*100000;
        }
        ++n;
    }
    return sonuc;
}
int powe(int taban,int us){
    int i=0;
    double temptaban = (taban * 1.0) / 100000;
    double sonuc=1;
    while(i<us){
        sonuc *=temptaban;
        i++;
    }
    sonuc*=100000;
    return sonuc;
}
int fact(int sayi){
    int i=1;
    int sonuc=1;
    while(i<=sayi){
        sonuc *=i;
        i++;
    }
    return sonuc;
}
int main() {
    int sonuc;
    int x;
    double doubsonuc;
    printf("sayi giriniz: ");
    scanf("%d",&x);
    sonuc=sinx(x);
    doubsonuc = (sonuc * 1.0) / 100000;
    printf("sonuc: %lf\n" , doubsonuc);
    return 0;

}