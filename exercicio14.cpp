/*
Função= ler 2 nomes e duas alturas e exibir a media entre elas
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura1=0,altura2=0,media=0;
	char nome1,nome2;	
	printf("Insira a primeira altura\n");
	scanf("%f", &altura1);
	printf("Insira o nome da pessoa da altura anterior \n");
	scanf("%c", &nome1);
	printf("Insira a segunda altura \n");
	scanf("%f", &altura2);
	printf("Insira o nome da pessoa da altura anterior \n");
	scanf("%c", &nome2);
	media=(altura1+altura2)/2;
	printf("a media das alturas de %c e %c é %f",nome1,nome2,media);
	return 0 ;
	
}
