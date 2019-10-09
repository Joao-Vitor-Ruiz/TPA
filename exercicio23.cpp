/*
Função:Leia 3 numero e mostre o maior
Nome:João Vitor Dalto Ruiz
Data de Criação:09/20/2109
*/
 
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero1=0,numero2=0,numero3=0;
    printf("insira o primeiro numero: \n");
	scanf("%f", &numero1);
	printf("insira o segundo numero: \n");
	scanf("%f", &numero2);
	printf("insira o terceiro numero: \n");
	scanf("%f", &numero3);
	if(numero1>=numero2 and numero1>=numero3){
			printf("o numero %f é o maior", numero1);
	}else if(numero2>=numero1 and numero2>=numero3){
			printf("o numero %f é o maior", numero2);
	}else if(numero3>=numero1 and numero3>=numero2){
			printf("o numero % é o maior", numero3);
	}
	return 0;
}
