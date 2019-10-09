/*
função= mostre se o numero é par ou impar
Nome:joao vitor dalto ruiz
Data de criação:09/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num=0;
	printf("Insira o numero: \n");
	scanf("%i", &num);
	if(num==0){
		printf("Seu numero é 0, ou seja, neutro");
	} else if(num%2!=0 and num!=0){
		printf("Seu numero é impar");
	}else if(num%2==0){
		printf("Seu numero é par");
	}
	return 0;
}


