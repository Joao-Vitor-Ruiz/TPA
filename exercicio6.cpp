/*
Fun��o= calcular o valor de uma presta��o
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float prestacao=0, valor=0, taxa=0;
	int tempo=0;
	printf("Qual � o valor a ser pago: \n");
	scanf("%f", &valor);
	printf("Qual � a taxa: \n");
	scanf("%f", &taxa);
	printf("Qual �  o tempo(em dias): \n");
	scanf("%i", &tempo);
	prestacao= valor+(valor*(taxa/100)*tempo);
	printf("Voc� tem que pagar %f", prestacao);
	return 0 ;
	
}

