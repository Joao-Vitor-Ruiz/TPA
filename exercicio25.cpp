/*
Função: classificar entre infantil, juvenil e adulto alunos de natação
Nome=joão vitor dalto ruiz
Data de criação:09/20/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade=0;
	printf("insira a  idade à ser classificada: \n");
	scanf("%i", &idade);
	if(idade>=18){
		printf("Você e classificado como adulto");
	}else if(idade<18 and idade>=12){
		printf("Você e classificado como Juvenil");
	}else if(idade<12 and idade>=5){
		printf("Você é classificado como infantil");
	}else{
		printf("Voce so pode matricular um maior de 4 anos de idade");
	}
	return 0;
}

