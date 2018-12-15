#include<stdio.h>
int main(){
	int sayi1,sayi2;
	
	printf("Iki sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("Toplamlari:%d\n",sayi1+sayi2);
	printf("Farklari: %d \n",sayi1-sayi2);
	printf("Carpimlari: %d \n",sayi1*sayi2);
	printf("Bolumleri: %d \n",sayi1/sayi2);
	printf("Bolumleri(ondalik sayi olarak): %.3f \n",(float)sayi1/sayi2);
	// %.3f nin anlami => %f float yani ondalikli sayi .3 ise virgulden sonra 3 basamak yaz
	printf("%dmod(%d): %d",sayi1,sayi2,sayi1%sayi2);
	
	return 0;
}
