/*
Fun��o= leio o pre�o de venda de um terreno retangular
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
	float base=0, altura=0, custo=0, precoT=0;
	printf("Insira a base do terreno \n");
	scanf("%f", &base);
	printf("Insira a altura do terreno \n");
	scanf("%f", &altura);
	printf("Insira o pre�o do metro quadrado \n");
	scanf("%f", &custo);
	precoT= (base*altura)*custo;
	printf("O pre�o � %f", precoT);
	return 0 ;
}
