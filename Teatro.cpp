/*				
Programa: Teatro  C++
Criadores: Jo�o Vitor Dalto Ruiz e Bruno Henrique Agostinho da Silva 
Data de Cria��o: 23/10/2019
Data de Finaliza��o: 04/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int tabuleiro[20][25], col = 0, li = 0, colunas = 0, linhas = 0, a = 0, b = 0, c = 0, d = 0, e = 0, lim1 = 0, lim2 = 0;
	int cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, totalOcupado = 0;
	int continuar = 0, opcao = 0, lugares = 0, minLugares = 0,comprar = 0, conta = 0;
	float precoIngre = 0.0, meia = 0.0, lucro = 0.0,confirmar = 0.0;
	int EVendaInte = 0;
	
int mapa(){
	conta = 0;
	printf("\n		Linhas na Horizontal\n");
	printf("		Colunas na Vertical\n");
	for(e = 0; e < colunas; e++){
		if(e == 0){
			printf("		");
		}
		if(e < 10){
			printf("  %i ", e + 1);
		}
		else if(e >= 10){
			printf(" %i ", e + 1);
		}
		if(e == colunas -1){
			printf("\n");
		}
	}
	for(a = 0; a < linhas; a++){
		conta = conta + 1;
		for(c = 0; c < colunas; c++){
			if(c == 0){
				printf("		");
			}
			printf("+---");
			if(c == colunas - 1){
				printf("+ \n");
			}
		}
		for(b = 0; b < colunas; b++){
			if(b == 0){
				if(conta < 10){
					printf("	       %i|", conta);
				}
				else{
					printf("	      %i|", conta);
				}
			}
			printf(" %i |", tabuleiro[a][b]);
			if(b == colunas - 1){
				printf("\n");
			}
		}
	}
	for(d = 0; d < colunas; d++){
		if(d == 0){
			printf("		");
		}
		printf("+---");
		if(d == colunas - 1){
			printf("+ \n");
		}
	}
}

int parciais(){
	for(int p1 = 0; p1 < linhas; p1++){
		for(int p2 = 0; p2 < colunas; p2++){
			if(tabuleiro[p1][p2] == 0){
				cont0 = cont0 + 1;
			}
			else if(tabuleiro[p1][p2] == 1){
				cont1 = cont1 + 1;
			}
			else if(tabuleiro[p1][p2] == 2){
				cont2 = cont2 + 1;
			}
			else if(tabuleiro[p1][p2] == 3){
				cont3 = cont3 + 1;
			}
		}
	}
}

int vendeInt(){
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	parciais();
	printf("\n		Voc� deseja comprar um lugar sem reserva, digite 1\n		Se voc� deseja comprar um lugar j� reservado, digite 2 \n		");
	scanf("%i", &comprar);
	if(comprar < 1 || comprar > 2){
		while(comprar < 1 || comprar > 2){
			printf("\n		Voc� deseja comprar um lugar sem reserva, digite 1\n		Se voc� deseja comprar um lugar j� reservado, digite 2 \n		");
			scanf("%i", &comprar);
		}
	}
	if(comprar == 1 && cont0 > 0){
		mapa();
		printf("\n		Selecione a linha desejada: \n		");
		scanf("%i", &li);
	    if(li > linhas || li < 1){
			while(li > linhas || li < 1){
				printf("\n		Insira uma linha Val�da: \n		");
				scanf("%i", &li);
			}
		}
		printf("\n		Selecione a coluna desejada: \n		");
		scanf("%i", &col);
		if(col > colunas || col < 1){
			while(col > colunas || col < 1){
				printf("		Insira uma coluna V�lida: \n		");
				scanf("%i", &col);
			}	
		}
	    if(tabuleiro[li - 1][col - 1] != 0){
	    	while(tabuleiro[li - 1][col - 1] != 0){
				printf("		Insira um lugar que ainda n�o foi escolhido.\n");
				printf("		Selecione a linha desejada: \n		");
				scanf("%i", &li);
	        	if(li > linhas || li < 1){
					while(li > linhas || li < 1){
						printf("		Insira uma linha Val�da: \n		");
						scanf("%i", & li);
					}
				}
				printf("		Selecione a coluna desejada: \n		");
				scanf("%i", &col);
				if(col > colunas || col < 1){
					while(col > colunas || col < 1){
						printf("		Insira uma coluna Val�da: \n		");
						scanf("%i", &col);
					}		
				}
			}
		}
		lucro = precoIngre + lucro;
		tabuleiro[li - 1][col - 1] = 2;
		printf("		Parab�ns a compra do do seu lugar foi feita \n");
	}
	else if(comprar == 1 && cont0 == 0){
		printf("\n		Voc� n�o pode vender nenhum lugar, pois n�o existe lugares vazios. \n");
	}
	if(comprar == 2 && cont1 > 0){
		mapa();
		printf("		Selecione a linha desejada: \n		");
		scanf("%i", &li);
	    if(li > linhas || li < 1){
			while(li > linhas || li < 1){
				printf("		Insira uma linha V�lida: \n		");
				scanf("%i", &li);
			}
		}
		printf("		Selecione a coluna desejada: \n		");
		scanf("%i", &col);
		if(col > colunas || col < 1){
			while(col > colunas || col < 1){
				printf("		Insira uma coluna V�lida: \n		");
				scanf("%i", &col);
			}	
		}
		if(tabuleiro[li - 1][col - 1] != 1){
			while(tabuleiro[li - 1][col - 1] != 1){
				printf("\n		Voc� deve selecionar um lugar que esteja reservado! \n");
				printf("		Selecione a linha desejada: \n		");
				scanf("%i", &li);
			    if(li > linhas || li < 1){
					while(li > linhas || li < 1){
						printf("		Insira uma linha V�lida: \n		");
						scanf("%i", &li);
					}
				}
				printf("		Selecione a coluna desejada: \n		");
				scanf("%i", &col);
				if(col > colunas || col < 1){
					while(col > colunas || col < 1){
						printf("		Insira uma coluna V�lida: \n		");
						scanf("%i", &col);
					}	
				}
			}
		}
		lucro = lucro + precoIngre * 0.4;
		tabuleiro[li - 1][col - 1] = 2;
		printf("		Lugar comprado.");
	}
	else if(comprar == 2 && cont1 == 0){
		printf("\n		Voc� n�o pode comprar nenhum lugar reservado, porque nenhum lugar est� reservado.\n");
	}
}

int limpa(){
	for(lim1 = 0; lim1 < 20; lim1++){
		for(lim2 = 0; lim2 < 25; lim2++){
			tabuleiro[lim1][lim2] = 0;
		}
	}
}

int inicio(){
	printf("---------------------TEATRO---------------------\n");
	printf("By: Bruno Henrique Agostinho da Silva\n");
	printf("    Jo�o Vitor Dalto Ruiz\n\n");
	printf("Insira o Pre�o de Ingresso: \nR$ ");
	scanf("%f", &precoIngre);
	if(precoIngre < 1){
		while(precoIngre < 1){
			printf("\n\nATEN��O: O  valor de Ingresso n�o deve ser inferior a R$1,00\n");
			printf("Insira o Pre�o de Ingresso: \nR$ ");
			scanf("%f", &precoIngre);
		}
	}
	meia = precoIngre / 2;
	printf("Quantas Fileiras o Teatro deve apresentar(1 a 20): \n");
	scanf("%i", &linhas);
	if(linhas < 1 || linhas > 20){
		while(linhas < 1 || linhas > 20){
			printf("\nO n�mero M�NIMO de filiras � 1 e o M�XIMO � 20\n");
			printf("Digite um valor V�LIDO para FILEIRAS: \n");
			scanf("%i", &linhas);
		}
	}
	printf("Quantas Colunas o Teatro deve apresentar(1 a 25): \n");
	scanf("%i", &colunas);
	if(colunas < 1 || colunas > 25){
		while(colunas < 1 || colunas > 25){
			printf("\nO n�mero M�NIMO de colunas � 1 e o M�XIMO � 25\n");
			printf("Digite um valor V�LIDO para COLUNAS: \n");
			scanf("%i", &colunas);
		}
	}
	lugares = colunas * linhas;
	minLugares = lugares * 0.6;
}

int valorTab(){
	printf("\n		+---+------------------------------+\n");
	printf("		| 0 | Lugar Vazio                  |\n");
	printf("		+---+------------------------------+\n");
	printf("		| 1 | Lugar Reservado              |\n");
	printf("		+---+------------------------------+\n");
	printf("		| 2 | Lugar Comprado para Inteira  |\n");
	printf("		+---+------------------------------+\n");
	printf("		| 3 | Lugar Comprado para Meia     |\n");
	printf("		+---+------------------------------+\n");
}


int lugar(){
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	parciais();
	mapa();
	printf("		Voc� deseja reservar um lugar, digite 1 \n		Cancelar a reserva um lugar, digite 2 \n		");
	scanf("%i", &comprar);
	if(comprar > 2 || comprar < 1){
		while(comprar > 2 || comprar < 1){
			printf("		N�mero Inv�lido!\n		Digite 1 para reservar \n		Digite 2 parar cancelar a reserva \n		");
			scanf("%i", &comprar);
		}
	}
	if(comprar == 2 && cont1 > 0){
		mapa();
		printf("		Selecione a linha do lugar que voc� deseja cancelar a reserva: \n		");
		scanf("%i", &li);
	    if(li > linhas || li < 1){
			while(li > linhas || li < 1){
				printf("		Insira uma linha V�lida: \n		");
				scanf("%i", &li);
			}
		}
		printf("		Selecione a coluna do lugar que voc� deseja cancelar a reserva: \n		");
		scanf("%i", &col);
		if(col > colunas || col < 1){
			while(col > colunas || col < 1){
				printf("		Insira uma coluna V�lida: \n		");
				scanf("%i", &col);
			}
		}
		if(tabuleiro[li - 1][col - 1] == 1){
			printf ("		Voc� cancelou a reserva do lugar\n");
		}else if(tabuleiro[li][col] != 1){
			while(tabuleiro[li][col] != 1){
				printf("		Insira um lugar que esteja reservado para cancelar a reserva.\n");
				printf("		Selecione a linha desejada: \n		");
				scanf("%i", &li);
        		if(li > linhas || li < 1){
					while(li > linhas || li < 1){
						printf("		Insira uma linha V�lida: \n		");
						scanf("%i", & li);
					}
				}
				printf("		Selecione a coluna desejada: \n		");
				scanf("%i", &col);
				if(col > colunas || col < 1){
					while(col > colunas || col < 1){
						printf("		Insira uma coluna V�lida: \n		");
						scanf("%i", &col);
					}		
				}
			}
		}
		tabuleiro[li - 1][col - 1] = 0;
		lucro = lucro - precoIngre * 0.6;
	}
	else if(comprar == 2 && cont1 == 0){
		printf("\n		Voc� n�o pode cancelar reservas, pois n�o existe nenhum lugar reservado. \n");
	}
	if(comprar == 1 && cont0 > 0){
		mapa();
		printf("		Selecione a linha desejada: \n		");
		scanf("%i", &li);
	    if(li > linhas || li < 0){
			while(li > linhas || li < 0){
				printf("		Insira uma linha V�lida: \n		");
				scanf("%i", &li);
			}
		}
		printf("		Selecione a coluna desejada: \n		");
		scanf("%i", &col);
		if(col > colunas || col < 1){
			while(col > colunas || col < 1){
				printf("		Insira uma coluna V�lida: \n		");
				scanf("%i", &col);
			}	
		}
	    if(tabuleiro[li - 1][col - 1] != 0){
	    	while(tabuleiro[li - 1][col - 1] != 0){
				printf("		Insira um lugar que ainda n�o foi escolhido \n");
				printf("		Selecione a linha desejada: \n		");
				scanf("%i", &li);
	        	if(li > linhas || li < 1){
					while(li > linhas || li < 1){
						printf("		Insira uma linha V�lida: \n		");
						scanf("%i", & li);
					}
				}
				printf("		Selecione a coluna desejada: \n		");
				scanf("%i", &col);
				if(col > colunas || col < 1){
					while(col > colunas || col < 1){
						printf("		Insira uma coluna V�lida: \n		");
						scanf("%i", &col);
					}		
				}
			}
		}
		lucro = precoIngre * 0.6 + lucro;
		tabuleiro[li - 1][col - 1] = 1;
		printf("		Parab�ns a reserva do do seu lugar foi efetuada \n");
	}
	else if(comprar == 1 && cont0 == 0){
		printf("\n		Voc� n�o pode reservar nenhum lugar, pois n�o existem lugares vazios. \n");
	}
}

int vendaMeia(){
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	parciais();
	if(cont0 > 0){
		mapa();
		printf("		Selecione a linha do lugar que voc� deseja Vender: \n		");
		scanf("%i", &li);
		if(li < 1 || linhas < li){
			while(li < 1 || linhas < li){
				printf("		Essa linha n�o � v�lida.\n");
				printf("		Selecione uma linha existente: \n		");
				scanf("%i", &li);
			}	
		}
		printf("		Selecione a coluna do lugar que voc� deseja Vender: \n		");
		scanf("%i", &col);
		if(col < 1 || colunas < col){
			while(col < 1 || colunas < col){
				printf("		Essa coluna n�o � v�lida.\n");
				printf("		Selecione uma coluna existente: \n		");
				scanf("%i", &col);
			}	
		}
		if(tabuleiro[li - 1][col - 1] != 0){
			while(tabuleiro[li - 1][col - 1] != 0){
				printf("\n		Esse Lugar j� est� ocupado.\n");
				printf("		Selecione uma linha V�LIDA: \n		");
				scanf("%i", &li);
				if(li < 1 || linhas < li){
					while(li < 1 || linhas < li){
						printf("		Essa linha n�o � v�lida.\n");
						printf("		Selecione uma linha existente: \n		");
						scanf("%i", &li);
					}	
				}
				printf("		Selecione uma coluna V�LIDA: \n		");
				scanf("%i", &col);
				if(col < 1 || colunas < col){
					while(col < 1 || colunas < col){
						printf("		Essa coluna n�o � v�lida.\n");
						printf("		Selecione uma coluna existente: \n		");
						scanf("%i", &col);
					}	
				}
			}	
		}
		tabuleiro[li - 1][col - 1] = 3;
		lucro = lucro + precoIngre * 0.5;
		printf("		Sua compra de um lugar foi efetuada com sucesso \n"); 
	}
	else{
		printf("\n		Voc� n�o pode vender nenhum lugar, pois n�o existem lugares livres. \n");
	}		
}
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	inicio();
	while(continuar == 0){
		printf("O que voc� deseja fazer?\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 1 | Abrir um espet�culo                        |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 2 | Reservar ou cancelar a reserva de um lugar |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 3 | Vender um lugar (inteira)                  |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 4 | Vender um lugar (meia)                     |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 5 | Verificar mapa do teatro                   |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 6 | Encerrar o espet�culo                      |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 7 | Verificar parciais                         |\n");
		printf("+---+--------------------------------------------+\n");
		printf("| 8 | Fechar Programa                            |\n");
		printf("+---+--------------------------------------------+\n");
		scanf("%i", &opcao);
		switch(opcao){
			case 1:
				limpa();
				lucro = 0.0;
				printf("\n		O teatro agora est� com todos os lugares dispon�veis.\n\n");
			break;
			
			case 2:
				lugar();
			break;
				
			case 3:
				vendeInt();
			break;
			
			case 4:
				vendaMeia();
			break;
			
			case 5:
				printf("\n		Esse � o estado do mapa do teatro.\n");
				valorTab();
				mapa();
				printf("\n\n");
			break;
			
			case 6:
				cont0 = 0;
				cont1 = 0;
				cont2 = 0;
				cont3 = 0;
				parciais();
				totalOcupado = cont1 + cont2 + cont3;
				if(totalOcupado < minLugares){
					printf("		O espet�culo n�o pode ser executado, pois apresenta menos de 60 porcento dos seus lugares ocupados.\n\n");
				}
				else{
					printf("		O expet�culo pode ser realizado.\n\n");
				}
			break;
			
			case 7:
				cont0 = 0;
				cont1 = 0;
				cont2 = 0;
				cont3 = 0;
				parciais();
				totalOcupado = cont1 + cont2 + cont3;
				printf("\n		Status do Teatro:");
				printf("\n		%i lugares Vazios;", cont0);
				printf("\n		%i lugares Reservados;",cont1);
				printf("\n		%i lugares Comprados para Inteira;", cont2);
				printf("\n		%i lugares Comprados para Meia;", cont3);
				printf("\n		%i lugares est�o Ocupados;\n", totalOcupado);
				printf("\n		O total de dinheiro recebido at� agora foi: R$ %.2f ;", lucro);
				if(minLugares > totalOcupado){
					printf("\n		Faltam %i lugares para o espet�culo poder ser iniciado.\n\n", minLugares - totalOcupado);
				}
				else{
					printf("\n		O espet�culo pode ser executado, pois os lugares ocupados j� superam o m�nimo de lugares(60 porcento dos lugares).\n\n");
				}
			break;
			
			case 8:
				continuar = 1;
			break;
			
			default:
				printf("\n		Essa op��o n�o existe.\n		Escolha outra op��o.\n\n");
		}
	}
}
