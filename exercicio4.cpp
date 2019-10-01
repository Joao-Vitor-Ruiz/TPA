/*
Função= leia 3 numeros e apresente o resultado da soma deles
Nome= joão vitor dalto ruiz
Data De Criação=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1=0,num2=0,num3=0,quadrado=0;
	printf("Insira o primeiro numero \n");
	scanf("%f", &num1);
	printf("Insira o segundo numero \n");
	scanf("%f", &num2);
	printf("Insira o terceiro numero \n");
	scanf("%f", &num3);
	quadrado=(num1+num2+num3)*(num1+num2+num3);
	printf("o quadrado da soma é %f", quadrado);
	
}

