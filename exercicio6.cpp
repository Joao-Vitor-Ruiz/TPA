/*
Função= calcular o valor de uma prestação
Nome= joão vitor dalto ruiz
Data De Criação=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float prestacao=0, valor=0, taxa=0;
	int tempo=0;
	printf("Qual é o valor a ser pago: \n");
	scanf("%f", &valor);
	printf("Qual é a taxa: \n");
	scanf("%f", &taxa);
	printf("Qual é  o tempo(em dias): \n");
	scanf("%i", &tempo);
	prestacao= valor+(valor*(taxa/100)*tempo);
	printf("Você tem que pagar %f", prestacao);
	return 0 ;
	
}

