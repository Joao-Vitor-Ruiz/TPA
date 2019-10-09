/*
Função:leia 3 numeros e coloque em ordem crecente
Nome:joão vitor dalto ruiz
data de criação:09/10/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1=0,num2=0,num3=0,maior=0,menor=0,meio=0;
	printf("Insira o primeiro numero; \n");
	scanf("%f", &num1);
	printf("Insira o segundo numero:  \n");
	scanf("%f", &num2);
	printf("Insira o terceiro numero: \n");
	scanf("%f", &num3);
	if(num1<=num2 and num1<=num3){
	      maior=num1;
	      if(num2<=num3){
	      	meio=num2;
	      	menor=num3;
		  }else{
		  	meio=num3;
		  	menor=num2;;
		  }
	}
	if(num2<=num1 and num2<=num3){
	      maior=num2;
	      if(num1<=num3){
	      	meio=num1;
	      	menor=num3;
		  }else{
		  	meio=num3;
		  	menor=num1;
		  }
	}
	if(num3<=num2 and num3<=num1){
	      maior=num3;
	      if(num2<=num1){
	      	meio=num2;
	      	menor=num1;
		  }else{
		  	meio=num1;
		  	menor=num2;
		  }
	}

	printf("A ordem Crescente é %f,%f,%f.",maior,meio,menor);
	return 0;
}
