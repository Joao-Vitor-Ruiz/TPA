/*
Função= ler um numero, se ele for maior que 5 e menor que 20, exiba seu cubo
Nome= joao vitor dalto ruiz
Data de criação=06/10/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero=0;
	printf("insira o numero: \n");
	scanf("%f", &numero);
	if(numero>5 and numero<20){
		numero= numero*numero*numero;
	}
	printf("O numero modificado ou não é %f",numero);
}
