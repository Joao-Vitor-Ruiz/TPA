/*
Fun��o: classificar entre infantil, juvenil e adulto alunos de nata��o
Nome=jo�o vitor dalto ruiz
Data de cria��o:09/20/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade=0;
	printf("insira a  idade � ser classificada: \n");
	scanf("%i", &idade);
	if(idade>=18){
		printf("Voc� e classificado como adulto");
	}else if(idade<18 and idade>=12){
		printf("Voc� e classificado como Juvenil");
	}else if(idade<12 and idade>=5){
		printf("Voc� � classificado como infantil");
	}else{
		printf("Voce so pode matricular um maior de 4 anos de idade");
	}
	return 0;
}

