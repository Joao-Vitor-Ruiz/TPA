/*
Função= ler 4 notas com 4 pesoas e exiba a media ponderada
Nome= joão vitor dalto ruiz
Data De Criação=30/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1=0,peso1=0,nota2=0,peso2=0,nota3=0,peso3=0,nota4=0,peso4=0,media=0;	
	printf("Insira a primeira nota \n");
	scanf("%f", &nota1);
	printf("Insira o primeiro peso \n");
	scanf("%f", &peso1);
	printf("Insira a segunda nota \n");
	scanf("%f", &nota2);
	printf("Insira o segundo peso \n");
	scanf("%f", &peso2);
	printf("Insira a terceira nota \n");
	scanf("%f", &nota3);
	printf("Insira o terceiro peso \n");
	scanf("%f", &peso3);
	printf("Insira a quarta nota \n");
	scanf("%f", &nota4);
	printf("Insira o quarto peso \n");
	scanf("%f", &peso4);
	media =(nota1*peso1+nota2*peso2+nota3*peso3+nota4*peso4)/(peso1+peso2+peso3+peso4);
	printf("a media ponderada é %f",media);
	return 0 ;
	
}
