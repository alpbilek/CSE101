//<ALP EMİR BİLEK>
//<161044049>



#include<stdio.h>
int main(){
int n,h,i,yildiz,bosluk,counter,sayac;		//kodumuza değişkenlerimizi tanımlıyoruz
printf("     Menü\n"
"1.Elmas çizimi\n"
"2.Öğrenci Bilgisi\n"
"0.Çıkış\n");

printf("Seçenek Giriniz:");		//kullanıcıdan menü için bir sayı girmesini istiyoruz
scanf("%d",&n);
while(n!=0){				//kullanıcının sürekli sayı girebilmesi için bu fonksiyonu yazdım
	if(n==1){			//kullanıcı eğer 1 değeri girerse elmas çiziyoruz

		counter=0;
		sayac=0;
		printf("ELMAS BOYUTUNU GİRİNİZ:");	//elmasın boyutu içiçn kullanıcıdan bir sayı istiyoruz
		scanf("%d",&h);
		h=(h+1)/2;
		for(i=0;i<h;i++){	
			for(bosluk=0;bosluk<h-1-i;bosluk++){	//elmasın kenarlarındaki boşlukları basıyoruz	
				printf(" ");
			}
			for(yildiz=0;yildiz<2*i+1;yildiz++){	//elması oluşturan yıldızları basıyoruz
				printf("*");
			}
			printf("\n");		
		}
		for(i=1;i<h;i++){				//elmasın üst kısmındaki algoritmanın tam tersini yapıyoruz
			for(bosluk=-counter;bosluk>=0;bosluk--){	
				printf(" ");
			}
			for(yildiz=2*h-sayac;yildiz>=4;yildiz--){
				printf("*");
			}
			printf("\n");
			counter--;
			sayac=sayac+2;		
		}

	}
	else if(n==2){				//kullanıcı 2 girerse diye yazdım
		printf("<Alp Emir>\n<Bilek>\n<161044049>\n");	//isim soy isim ve okul numarası basması için
	
	}
	printf("     Menü\n"			//kullanıcı sürekli sayı girebilsin diye bu fonsiyonu yazdım.
	"1.Elmas çizimi\n"
	"2.Öğrenci Bilgisi\n"
	"0.Çıkış\n");
	printf("Seçenek Giriniz:");
	scanf("%d",&n);

}






return 0;					//kodu bitirdim.
}
