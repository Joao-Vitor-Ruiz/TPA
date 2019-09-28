/*
Função= calcular a media de 4 notas
Nome= joão vitor dalto ruiz
Data De Criação=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1=0, nota2=0, nota3=0, nota4=0, media=0;
	printf("Insira a  primeira note\n");
	scanf("%f", &nota1);
	printf("Insira a segunda nota \n");
	scanf("%f", &nota2);
	printf("Insira a terceira nota \n");
	scanf("%f", &nota3);
	printf("Insira a quarta nota \n");
	scanf("%f", &nota4);
	media = (nota1+nota2+nota3+nota4)/4;
	printf("a media é %f", media);
	return 0 ;
	
}
