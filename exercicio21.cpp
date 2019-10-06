/*
Função= ler um numero e identificar se o numero e positivo, negativo ou neutro
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero=0;	
	printf("Insira o numero \n");
	scanf("%i", &numero);
	if(numero>0){
		printf("seu numero é positivo");
	}else{ if(numero==0){
		printf("seu numero é 0, ou seja, neutro");
	} else{
		printf("seu numero é negativo");
	}
	}
	return 0 ;
	
}
