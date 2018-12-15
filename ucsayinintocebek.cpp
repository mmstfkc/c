#include<stdio.h>
int main(){
	int sayi1,sayi2,sayi3;
	
	printf("Uc sayi giriniz\n");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	printf("Toplamlari: %d\n",sayi1+sayi2+sayi3);
	printf("Ortalamalari: %.2f\n",(sayi1+sayi2+sayi3)/(float)3);
	//paraneze almazsak yanlis sonuc verir
	printf("Carpimlari: %d\n",sayi1*sayi2*sayi3);
	
	/* 
	kosul icinde birden fazla kosul olabilir &&(kosulun ikiside dogru olmali) ve 
	||(kosulun biri dogru olmasi yeterli)
	*/
	if(sayi1<sayi2 && sayi1<sayi3){
		//ikiside dogru olursa bu kosul callisir
		printf("En kucuk %d\n",sayi1);
	}else if(sayi2<sayi3){
		printf("En kucuk %d\n",sayi2);
	}else{
		printf("En kucuk %d\n",sayi3);
	}
	if(sayi1>sayi2 && sayi1>sayi3){
		printf("En buyuk %d",sayi1);
	}else if(sayi2>sayi3){
		printf("En buyuk %d",sayi2);
	}else{
		printf("En buyuk %d",sayi3);
	}
	
	
	
	
	return 0;
}
