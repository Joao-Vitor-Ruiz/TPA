/*
Fun��o= ler um numero e identificar se o numero e positivo, negativo ou neutro
Nome= jo�o vitor dalto ruiz
Data De Cria��o=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero=0;	
	printf("Insira o numero \n");
	scanf("%i", &numero);
	if(numero>0){
		printf("seu numero � positivo");
	}else{ if(numero==0){
		printf("seu numero � 0, ou seja, neutro");
	} else{
		printf("seu numero � negativo");
	}
	}
	return 0 ;
	
}
