//#HW07
//Alp Emir Bilek
//161044049

#include<stdio.h>

int arkadasSayi(int sayi);			//fonksiyon tanımlayıyoruz.

void main(){						//fonksiyonumumzda maini açıyoruz.

	int sayi;						//değişkenlerimizi tanımlıyoruz.
	int arkadas;

	printf("Arkadas sayisini bulmak istediğiniz sayıyı giriniz: ");		//Arkadaş sayısı bulunacak sayıyı kullanıcıdan istiyoruz.
	scanf("%d",&sayi);

	arkadas = arkadasSayi(sayi);	
	
	if(arkadas != 0){				//Girilen sayıyının eğer arkadaş sayısı varsa sayıyıyı bastır.
		printf("%d'nin arkadas sayisi: %d\n",sayi,arkadas);		
	}
	else							//Girilen sayının eğer arkadaş sayısı yoksa bulunmamaktadır bastır.
		printf("%d'nin arkadas sayisi bulunmamaktadir.",sayi);

}

int arkadasSayi(int sayi){

	int i,j;						//DEğişkenlerimizi tanımlıyoruz.

	int toplam = 0;					
	int toplam2 = 0;

	for(i=1;i<sayi;i++){			//Girilen sayının pozitif çarpanlarının toplamını bulmak için for döngüsü yazıyoruz.
		if(sayi%i==0){
			toplam += i;
			}
	}
	for(j = 1; j < toplam; j++){	//Arkadaş sayıyı bulmak için bir for döngüsü daha yazıyoruz.	
		if(toplam %j ==0){	
			toplam2 += j;
			}
	}
	if(toplam2 == sayi){			//Toplam2 sayiya eşit mi diye kontrol ediyoruz.
		return (toplam);			//Eşitse sayıyı bastırıyoruz.
	}
	else{
		return 0;					//Arkadaş sayı bulma kodumuzu bitiriyoruz.
	}
}
