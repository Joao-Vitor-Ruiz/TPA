/*
Fun��o= calcular a area de um Retangulo
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float base=0, altura=0, area=0;
	printf("Insira a base do retangulo \n");
	scanf("%f", &base);
	printf("Insira a altura do retangulo \n");
	scanf("%f", &altura);
	area= base*altura;
	printf("a area � %f", area);
	return 0 ;
	
}
