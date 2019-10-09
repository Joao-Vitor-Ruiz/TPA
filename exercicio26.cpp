/*
Função: ler a media de um aluno e seu nome, falando se ele passou ou não
nome:joão vitor dalto ruiz
Data de Criação:09/10/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	float nota1=0;
	printf("Insira seu nome: \n");
	scanf("%s", &nome);
	printf(" insira a sua média \n");
	scanf("%f", &nota1);
	if(nota1>=7){
		printf("%s foi aprovado!!!!!!:)",nome);
	}else{
		printf("%s foi reprovado",nome);
	}
	return 0;
}
