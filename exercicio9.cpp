/*
Fun��o= calcular o quociente e o resto de uma divis�o
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
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
	printf("O quociente � %i, e o resto � %i", quociente, resto);
	return 0 ;
	
}
