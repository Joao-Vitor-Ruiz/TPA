/*
Fun��o:Mostar o maior numero digitado pelo usuario
Nome:Jo�o Vitor Dalto Ruiz
Data de Cria��o:09/20/2109
*/
 
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero1=0, numero2=0;
	printf("Insira o primeiro numero \n");
	scanf("%f", &numero1);
	printf("Insira o segundo numero \n");
	scanf("%f", &numero2);
	if(numero1>numero2){
		printf("o numero %f � o maior", numero1);
	}else if(numero1==numero2){
		printf("Os numero s�o iguais");
	}else{
			printf("o numero %f � o maior", numero2);
	}
	return 0;
}
