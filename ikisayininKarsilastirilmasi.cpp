#include<stdio.h>
int main(){
	int sayi1,sayi2;
	
	printf("Iki sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	if(sayi1==sayi2)
	printf("Sayilar esittir");
	else{
		printf("Sayilar esit degildir\n");
		if(sayi1<sayi2){
			printf("%d kucuktur %d",sayi1,sayi2);
		}else{
			printf("%d buyuktur %d",sayi1,sayi2);
		}
		
		
	}
	
	return 0;
}
