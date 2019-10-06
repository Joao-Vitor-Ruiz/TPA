/*
Função=receba um valor em segundos e exiba em horas minutos e segundos
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int segundos=0,segundosfinais=0,minutos=0,horas=0;	
	printf("Insira os segundos desejados \n");
	scanf("%i", &segundos);
	minutos=segundos/60;
	segundos=segundos%60;
	horas=minutos/60;
	minutos=minutos%60;
	printf("O tempo inserido são %i horas,%i minutos,%i segundos",horas,minutos,segundos);
	return 0 ;
	
}
