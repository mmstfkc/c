#include<stdio.h>
int main( void )
{
	int a;
	int b;
	int toplam,cikarma,carpma,bolme;
	a = 25;
	b = 5;
	toplam = a + b;
	cikarma = a - b;
	carpma=a*b;
	bolme=a/b;
	printf(" Toplam= %d \n",  toplam);
	printf(" cikarma= %d \n",  cikarma);
	printf(" carpma= %d \n",  carpma);
	printf(" bolme= %d \n",  bolme);
	return 0;
}