#include<stdio.h>
int main(){
	/*
	while dongusunden tek farkı 
	kesinlikle kosul yanlis bile olsa bie kere calisir
	denemek icin kosulu sayac<1 yapabilirsiniz

	do-while dongusu
	
	baslangis degeri
	
	do{
	islemler
	}while(kosul);
	
	*/
	int sayac=1;
	
	do{
		//\t bir tab lık bosluk birakmaya yarar
		printf("%d\t",sayac);
		sayac++;
		//sayac degerini birer birer arritmaya yarar
	}while(sayac<10);
			
	
	return 0;
}
