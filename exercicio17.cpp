/*
Fun��o= ler horas,minutos e segundos para segundos
Nome= jo�o vitor dalto ruiz
Data De Cria��o=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int horas=0,minutos=0,segundos=0,segundosfinais=0;	
	printf("Insira as horas desejadas \n");
	scanf("%i", &horas);
	printf("Insira os minutos desejados \n");
	scanf("%i", &minutos);
	printf("Insira os segundos desejados \n");
	scanf("%i", &segundos);
	segundosfinais=horas*3600;
	segundosfinais=minutos*60+segundosfinais;
	segundosfinais=segundos+segundosfinais;
	printf("As horas minutos e segundos inseridos em segundos s�o %i segundos",segundosfinais);
	return 0 ;
	
}
