/*
Função: fazer a area de um triagulo
Nome: Joao vitor dalto ruiz
Data de Criação: 28/09/2019
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float base=0, altura=0, area=0;
	printf("Insira a base do triangulo : \n");
	scanf("%f", &base);
	printf("Insira a altura do triangulo : \n");
	scanf("%f", &altura);
	area = (base*altura)/2;
	printf( "a area é %f", area);
	return 0;
	
}
