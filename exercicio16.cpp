/*
Fun��o= fa�a a area de um comodo e veja quanto de energia leva para o iluminar corretamente
Nome= jo�o vitor dalto ruiz
Data De Cria��o=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float comprimento=0,largura=0,area=0,energia=0;	
	printf("Insira o comprimento do c�modo(em metros) \n");
	scanf("%f", &comprimento);
	printf("Insira a largura do c�modo(em metros) \n");
	scanf("%f", &largura);
	area=comprimento*largura;
	energia=area*18;
	printf("a area do c�modo � %f, precisando de %f de energia",area,energia);
	return 0 ;
	
}
