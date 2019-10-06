/*
Função= ler o raio e calcular o comprimento, a area e o volume de uma esfera
Nome= joão vitor dalto ruiz
Data De Criação=06/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float raio=0,comprimento=0,area=0,volume=0;
	printf("coloque o raio da esfera \n");
	scanf("%f", &raio);
	comprimento= 2*3.14*raio;
	area= 3.14*(raio*raio);
    volume= 4/3*3.14*(raio*raio*raio);
	printf("O comprimento  é %f a area é %f e o volume %f",comprimento,area,volume);
	return 0 ;
	
}
