/*
Fun��o= calcular o imc da pessoa
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso=0, altura=0, imc=0;
	printf("Insira o peso da pessoa \n");
	scanf("%f", &peso);
	printf("Insira a altura da pessoa \n");
	scanf("%f", &altura);
	imc= peso/altura*altura;
	printf("Seu IMC  � %f", imc);
	return 0 ;
	
}
