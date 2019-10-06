/*
Função= ler um numero, se for maior que 100 some 150 
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero=0;	
	printf("Insira o numero \n");
	scanf("%f", &numero);
	if(numero>100){
		numero=numero+150;
	}
	printf("O numero é %f",numero);
	return 0 ;
	
}
