/*
Função:Mostar o maior numero digitado pelo usuario
Nome:João Vitor Dalto Ruiz
Data de Criação:09/20/2109
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
		printf("o numero %f é o maior", numero1);
	}else if(numero1==numero2){
		printf("Os numero são iguais");
	}else{
			printf("o numero %f é o maior", numero2);
	}
	return 0;
}
