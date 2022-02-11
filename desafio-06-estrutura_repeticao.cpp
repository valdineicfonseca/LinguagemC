/* Desafio

Desafio 06 - Estrutura de Repetição - Analise Desenvolvimento de Sistemas

Você foi contratado para desenvolver um sistema a ser usado em uma enquete. 
A empresa que o contratou precisa tabelar os resultados da seguinte enquete, 
feita a uma grande quantidade de organizações:

Qual o melhor sistema operacional para uso em servidores?

O programa deverá ler os valores até ser informado o valor 0, 
que encerra a entrada dos dados. Não deverão ser aceitos valores
 além dos válidos para o programa (0 a 6).

Author: Valdinei C.
2022

*/ 





#include <stdio.h>
//Para windows biblioteca p/limpar  tela
#include<stdlib.h>
//Para windows biblioteca p/ delay
#include <dos.h>
#include <time.h>

int main(){
	int option =9, windows = 0, unix =0, linux =0, netware =0, mac =0, outro =0;
	time_t start_time, end_time;
	double diff_time;
	
	while(option!=0){
	
		printf("Responda a equete conforme as opcoes abaixo\n");
		printf("Qual o melhor sistema operacional para uso em servidores?\n\n");
		
		printf("1 - Windows Server. | votos computados %d\n",windows);
		printf("2 - Unix.           | votos computados %d\n",unix);
		printf("3 - Linux.          | votos computados %d\n",linux);
		printf("4 - Netware.        | votos computados %d\n",netware);
		printf("5 - Mac OS.         | votos computados %d\n",mac);
		printf("6 - Outro.          | votos computados %d\n",outro);
		printf("Digite 0 para encerrar\n");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				windows=windows+1;
				printf("Opcao 1 Windows server registrada.\n");
				break;
			case 2:
				unix=unix+1;
				printf("Opcao 1 Unix registrada.\n");
				break;
			case 3:
				linux=linux+1;
				printf("Opcao 1 Linux registrada.\n");
				break;
			case 4:
				netware=netware+1;
				printf("Opcao 1 Netware registrada.\n");
				break;
			case 5:
				mac=mac+1;
				printf("Opcao 1 Mac O.S registrada.\n");
				break;
			case 6:
				outro=outro+1;
				printf("Opcao 1 outro sistema registrada.\n");
				break;
			default:
				printf("Opcao invalida ou de enecerramento !!!!!\n");
		}
		
		
		printf("\n Dentro de 3 segundos voce podera votar novamente, aguarde... \n");
		// aguarda 5 segundos
		start_time =0;
		end_time =0;
		diff_time =0;
		time(&start_time);
		while(diff_time <=3.000000){
			time(&end_time);
			diff_time = difftime(end_time, start_time);
		}
		
		
		// Limpa tela de acordo com sistema operacional
		#if defined(_WIN32) || defined(_WIN64)
	    	system("cls");
		#else defined(__linux__) || defined(__unix__)
	    	system("clear");
		#endif
		
	}
	
	printf("\n Resultado da equete: \n");
	printf("-------------------------------------------------------\n");
	printf("1 - Windows Server. | votos computados %d\n",windows);
	printf("2 - Unix.           | votos computados %d\n",unix);
	printf("3 - Linux.          | votos computados %d\n",linux);
	printf("4 - Netware.        | votos computados %d\n",netware);
	printf("5 - Mac OS.         | votos computados %d\n",mac);
	printf("6 - Outro.          | votos computados %d\n",outro);
	
	return 0;
}
