/*
Fun��o= ler o ano de nascimento e dar a idade em anos e dias
Nome= jo�o vitor dalto ruiz
Data De Cria��o=28/09/2019
*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int anoNasc=0,anoAtual=0,idadeAno=0,idadeDia=0;
	printf("Insira o ano em que voce nasceu \n");
	scanf("%i", &anoNasc);
	printf("Insira o ano atual \n");
	scanf("%i", &anoAtual);
	idadeAno=anoAtual-anoNasc;
	idadeDia=idadeAno*365;
	printf("a idade em anos � %i e em anos %i", idadeAno,idadeDia);
	return 0 ;
	
}
