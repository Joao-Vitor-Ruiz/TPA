/*
Função= faça a area de um comodo e veja quanto de energia leva para o iluminar corretamente
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float comprimento=0,largura=0,area=0,energia=0;	
	printf("Insira o comprimento do cômodo(em metros) \n");
	scanf("%f", &comprimento);
	printf("Insira a largura do cômodo(em metros) \n");
	scanf("%f", &largura);
	area=comprimento*largura;
	energia=area*18;
	printf("a area do cômodo é %f, precisando de %f de energia",area,energia);
	return 0 ;
	
}
