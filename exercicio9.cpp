/*
Função= calcular o quociente e o resto de uma divisão
Nome= joão vitor dalto ruiz
Data De Criação=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int divisor=0, dividendo=0, quociente=0, resto=0;
	printf("Insira o divisor \n");
	scanf("%i", &divisor);
	printf("Insira o dividendo \n");
	scanf("%i", &dividendo);
	quociente = dividendo/divisor;
	resto=dividendo%divisor;
	printf("O quociente é %i, e o resto é %i", quociente, resto);
	return 0 ;
	
}
