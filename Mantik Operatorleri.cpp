#include<stdio.h>
int main(){
	int sayi1,sayi2;
	
	printf("Birinci sayi:");	scanf("%d",&sayi1);
	printf("Ikinci sayi:");		scanf("%d",&sayi2);
	
	//bir kosul koyup eger dogruysa bunu calistir demek icin
	
	/*
	== esittir		!= esit degildir		<  kucuk		> buyuk
	<=  kucuk esit		>=   buyuk esit		
	*/
	
	if(sayi1==sayi2){
		//sayi1 sayi2 ye esitse burasi calisacak
		printf("%d esittir %d",sayi1,sayi2);
	}else{
		//esit degilse
		if(sayi1<sayi2){
			//sayi1 sayi2 den kucukse
			printf("%d kucuktur %d",sayi1,sayi2);
		}
		else{
			//sayi1 sayi2 den kucuk degilse
			printf("%d buyuktur %d",sayi1,sayi2);
		}
	}
	
	return 0;	
}
