#include<stdio.h>
int main(){
	int sayi1,sayi2;
	/*degiskenlerimizi belirledik 
	simdi cagirip kaydedelim*/
	
	printf("Birinci sayiyi giriniz:");	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz:");	scanf("%d",&sayi2);
	
	printf("Toplamlari = %d\n",sayi1+sayi2);
	printf("Farklari = %d\n",sayi1-sayi2);
	printf("Carpimleri = %d\n",sayi1*sayi2);
	printf("Bolumleri = %d\n",sayi1/sayi2);
	printf("Reel Bolumu = %f\n",(double)sayi1/sayi2);
	// \n alt satira inmeye yariyor
	// %d tam sayi(integer) sayilar icin %f reel(float adn double)sayilar icin printf de kullanilir
	
	return 0;
	
}
