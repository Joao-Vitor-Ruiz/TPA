/*
Fun��o= calcular do aumento de um funcionario
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario=0, aumento=0, novoSalario=0;
	printf("Escreva o Sal�rio atual \n");
	scanf("%f", &salario);
	printf("escreva a taxa de aumento \n");
	scanf("%f", &aumento);
	novoSalario=salario+(salario*aumento)/100;
	printf("O novo salario � %f", novoSalario);
	return 0 ;
	
}
