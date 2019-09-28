/*
Função= calcular a area de um circulo
Nome= joão vitor dalto ruiz
Data De Criação=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float PI=3.1416;
	float area =0, raio=0;
	printf("Insira o raio do circulo");
	scanf("%f", &raio);
	area=raio*raio*PI;
	printf("A área é %f", area);
}

