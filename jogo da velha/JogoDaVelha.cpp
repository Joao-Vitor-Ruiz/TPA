/*				
Programa: Jogo da velha C++
Criadores: João Vitor Dalto Ruiz e Bruno Henrique Agostinho da Silva 
Data de criação:23/10/2019
Data de finalização: 20/11/2019
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
int i = 0, linha = 0, coluna = 0, PlacarJ1 = 0, PlacarJ2 = 0 , TrocaPlacar = 0, statusJogo = 1;
char posicao[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};				  
	char nomeJ1[50] = " ", nomeJ2[50] = " ", NomeTroca[50]="  ", X[2]= {'X'}, O[2] = {'O'}, S[2] = {'S'}, N[2] = {'N'};
	char j1s[2] = {' '}, j2s[2] = {' '}, check[2] = {' '}, trocaNome[50]={" "}, empaResp[2] = {' '};
int jogo(){
	setlocale(LC_ALL, "Portuguese");
	for(i = 0; i < 9; i++){
		if(i == 0){
			printf("Jogador %s \n", nomeJ1);
			printf("Encolha X ou O: ");
			scanf("%s", &j1s);
			if(strcmp(j1s, X) != 0 && strcmp(j1s, O) != 0){
				while(strcmp(j1s, X) != 0 && strcmp(j1s, O) != 0){
					printf("Insira um caracter VÁLIDO \n");
					printf("Escolha X ou O: ");
					scanf("%s", &j1s);
				}
			}
			if(strcmp(j1s, "X") == 0){
				strcpy(j2s, O);
			}
			else{
				strcpy(j2s, X);
			}
		}
		if(i % 2 == 0){
			printf("É vez do(a) jogador(a) %s \n",nomeJ1);
		}
		else if(i % 2 != 0){
			printf("É vez do(a) jogador(a) %s \n",nomeJ2);
		}
		printf("Digite a linha desejada: \n");
		scanf("%i", &linha);
		if(linha < 1 || linha > 3){
			while(linha < 1 || linha > 3){
				printf("Digite uma linha VÁLIDA(1 a 3): \n");
				scanf("%i", &linha);
			}
		}
		printf("Digite a coluna desejada: \n");
		scanf("%i", &coluna);
		if(coluna < 1 || coluna > 3){
			while(coluna < 1 || coluna > 3){
				printf("Digite uma coluna VÁLIDA(1 a 3): \n");
				scanf("%i", &coluna);
			}
		}
		if(posicao[linha - 1][coluna - 1] == 'O' || posicao[linha - 1][coluna - 1] == 'X'){
			while(posicao[linha - 1][coluna - 1] == 'O' || posicao[linha - 1][coluna - 1] == 'X'){
				printf("Essa posição já está ocupada.\nDigite valores de linha e coluna que determinem uma casa vazia.\n");
				printf("Linha: \n");
				scanf("%i", &linha);
				if(linha < 1 || linha > 3){
					while(linha < 1 || linha > 3){
						printf("Digite uma linha VÁLIDA(1 a 3): \n");
						scanf("%i", &linha);
					}
				}
				printf("Coluna: \n");
				scanf("%i", &coluna);
				if(coluna < 1 || coluna > 3){
					while(coluna < 1 || coluna > 3){
						printf("Digite uma coluna VÁLIDA(1 a 3): \n");
						scanf("%i", &coluna);
					}
				}	
			}
		}
		if(i % 2 == 0){
			if(strcmp(j1s,"X") == 0){
				posicao[linha - 1][coluna - 1] = 'X';
			}
			if(strcmp(j1s,"O") == 0){
				posicao[linha - 1][coluna - 1] = 'O';
			}
		}
		if(i % 2 != 0){
			if(strcmp(j2s,"X") == 0){
				posicao[linha - 1][coluna - 1] = 'X';
			}
			if(strcmp(j2s,"O") == 0){
				posicao[linha - 1][coluna - 1] = 'O';
			}
		}
		printf("              colunas \n");
		printf("             1   2   3 \n");
		printf("           +---+---+---+ \n");
		printf("        1  | %c | %c | %c | \n",posicao[0][0],posicao[0][1],posicao[0][2]);
		printf("           +---+---+---+ \n");
		printf(" linhas 2  | %c | %c | %c | \n",posicao[1][0], posicao[1][1], posicao[1][2]);
		printf("           +---+---+---+ \n");
		printf("        3  | %c | %c | %c | \n", posicao[2][0], posicao[2][1], posicao[2][2]);
		printf("           +---+---+---+ \n");
		if(i >= 4 && i < 10){
			if(posicao[0][0] == posicao[0][1] && posicao[0][1] == posicao[0][2] && posicao[0][0] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][0] == posicao[0][1] && posicao[0][1] == posicao[0][2] && posicao[0][0] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[1][0] == posicao[1][1] && posicao[1][1] == posicao[1][2] && posicao[1][0] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
						PlacarJ2 = PlacarJ2 + 1;
						strcpy(check, j2s);
						i = 10;
					}
				}
			else if(posicao[1][0] == posicao[1][1] && posicao[1][1] == posicao[1][2] && posicao[1][0] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[2][0] == posicao[2][1] && posicao[2][1] == posicao[2][2] && posicao[2][0] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[2][0] == posicao[2][1] && posicao[2][1] == posicao[2][2] && posicao[2][0] == 'O'){
			   	if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][0] == posicao[1][0] && posicao[1][0] == posicao[2][0] && posicao[0][0] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][0] == posicao[1][0] && posicao[1][0] == posicao[2][0] && posicao[0][0] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][1] == posicao[1][1] && posicao[1][1] == posicao[2][1] && posicao[0][1] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][1] == posicao[1][1] && posicao[1][1] == posicao[2][1] && posicao[0][1] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][2] == posicao[1][2] && posicao[1][2] == posicao[2][2] && posicao[0][2] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][2] == posicao[1][2] && posicao[1][2] == posicao[2][2] && posicao[0][2] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
		   	}
		   	else if(posicao[0][0] == posicao[1][1] && posicao[1][1] == posicao[2][2] && posicao[0][0] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}
			}
			else if(posicao[0][0] == posicao[1][1] && posicao[1][1] == posicao[2][2] && posicao[0][0] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}	
			}
			else if(posicao[0][2] == posicao[1][1] && posicao[1][1] == posicao[2][0] && posicao[0][2] == 'X'){
				if(strcmp(j1s, "X") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
					}
				}
			else if(posicao[0][2] == posicao[1][1] && posicao[1][1] == posicao[2][0] && posicao[0][2] == 'O'){
				if(strcmp(j1s, "O") == 0){
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ1);
					PlacarJ1 = PlacarJ1 + 1;
					strcpy(check, j1s);
					i = 10;
				}
				else{
					printf("Fim de Jogo --------------------------\nJogador(a) %s GANHOU!!!!!!!!!!!!", nomeJ2);
					PlacarJ2 = PlacarJ2 + 1;
					strcpy(check, j2s);
					i = 10;
				}	
			}
			else if(i == 8){
				printf("Fim de Jogo ---------------------------------- \n Deu velha !!!!!!!");
			}
		}
	}
}

int placar(){
	setlocale(LC_ALL, "Portuguese");
	printf("\nAqui estão os Placares: \n");	
	printf("%s = %i vitória(s)!!!\n", nomeJ1, PlacarJ1);
	printf("%s = %i vitória(s)!!!\n", nomeJ2, PlacarJ2);
	if(PlacarJ1 > PlacarJ2){
		printf("O(A) jogador(a) %s ganhou!\n", nomeJ1);
	}
	else if (PlacarJ1 < PlacarJ2){
		printf("O(A) jogador(a) %s ganhou!\n", nomeJ2);
	}
	else{
		printf("Empate!!!\n");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    printf("------JOGO DA VELHA------\n");
	printf("Digite o nome do jogador 1: \n");
	gets(nomeJ1);
	fflush(stdin);
	printf("Digite o nome do jogador 2: \n");
	gets(nomeJ2);
	fflush(stdin);
	while(statusJogo == 1){
		printf("              colunas \n");
		printf("             1   2   3 \n");
		printf("           +---+---+---+ \n");
		printf("        1  |   |   |   | \n");
		printf("           +---+---+---+ \n");
		printf(" linhas 2  |   |   |   | \n");
		printf("           +---+---+---+ \n");
		printf("        3  |   |   |   | \n");
		printf("           +---+---+---+ \n");
	    jogo();
		printf("\nDigite 1 para jogar novamente.\nDigite qualquer outro número para parar.\n");
		scanf("%i",&statusJogo);
		for(int l1 = 0; l1 < 3; l1++){
	 		for(int l2 = 0; l2 < 3; l2++){
	 	        posicao[l1][l2]= ' ';
			}
		}
		if(strcmp(check, j2s) == 0){
			strcpy(trocaNome, nomeJ1);
            strcpy(nomeJ1, nomeJ2);
			strcpy(nomeJ2, trocaNome);
			TrocaPlacar = PlacarJ1;
			PlacarJ1 = PlacarJ2;
			PlacarJ2 = TrocaPlacar; 	
		}
		if(statusJogo != 1){
			placar();
			if(PlacarJ1 == PlacarJ2){
				printf("Deseja Realizar uma partida de desempate?\n[S] para Sim\n[N] para Não\n");
				scanf("%s", &empaResp);
				if(strcmp(empaResp, S) != 0 && strcmp(empaResp, N) != 0){
					while(strcmp(empaResp, S) != 0 && strcmp(empaResp, N) != 0){
						printf("\n[S] para Sim\n[N] para Não\n");
						scanf("%s", &empaResp);
					}
				}
				if(strcmp(empaResp, "S") == 0){
					jogo();
					placar();
				}
			}
		}
	}
}
