#include<stdio.h>
int main(){
	int sayi1,sayi2,toplam;
	
	//Kullaniciya birinic sayiyi girmesini soyluyoruz
	printf("Birinci sayiyi giriniz");
	//kullanicinin girdigi degeri sayi1 e kaydediyoruz
	scanf("%d",&sayi1);
	
	//yukarida yaptiklarimizi burdada yapiyoruz
	printf("Ikinci sayiyi giriniz");
	scanf("%d",&sayi2);
	//kaydettigimiz 2 sayiyi toplayip toplama kaydediyoruz
	toplam=sayi1+sayi2;
	//toplami yazdiriyoruz
	printf("Sayilarin toplami= %d ",toplam);
	
	return 0;
}
