/*
Fun��o= um valor em celsius em fharenheit
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float f=0, c=0;
	printf("Insira o valor em celcius \n");
	scanf("%f", &c);
	f=(c*1.8)+32;
	printf("os graus convertidos em fharenheit � %f", f);
	return 0 ;
	
}
