/* 
Jogo pedra papel tesoura

As regras do jogo Pedra-Papel-Tesoura são:

Pedra ganha da tesoura (amassando-a ou quebrando-a).

Tesoura ganha do papel (cortando-o).

Papel ganha da pedra (embrulhando-a).

Author: Valdinei C.
2022

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int computador, jogador;
	computador =0;
	jogador=0;
	srand(time(NULL));
	
	printf("Jogo pedra papel tesoura\n");
	printf("Regras:\n");
	printf("1 - Pedra ganha da tesoura (amassando-a ou quebrando-a). \n");
	printf("2 - Tesoura ganha do papel (cortando-o). \n");
	printf("3 - Papel ganha da pedra (embrulhando-a). \n");
	printf("Escolha uma das opções acima de 1 a 3 \n");
	computador= 1 +  rand() % 3;

	scanf("%d",&jogador);
		
	printf("O computdor escolheu computador %d\n\n",computador);
	switch(jogador){
		case 1:
			
			
			if (computador ==1){
				
				printf("Empate os dois escolheram pedra\n");
			}
			
			if (computador ==2){
				
				printf("Voce escolheu pedra, computador tesoura, |Voce ganhou !!!|\n");
			}
			
			if (computador ==3){
				
				printf("Voce escolheu pedra, computador papel, |Voce perdeu !!!|\n");
			}
			break;

		case 2:
			
			if (computador ==1){
				
				printf("Voce escolheu tesoura e o computador escolheu pedra. |Voce perdeu !!! |\n");
			}
			
			if (computador ==2){
				
				printf("Empate os dois escolheram tesoura\n");
			}
			
			if (computador ==3){
				
				printf("Voce escolheu tesoura, e o computador papel, |Voce ganhou !!!|\n");
			}
			break;


		case 3:
			
			if (computador ==1){
				
				printf("Voce escolheu papel e o computador escolheu pedra. |Voce ganhou !!!|\n");
			}
			
			if (computador ==2){
				
				printf("Voce escolheu papel e o computador escolheu tesoura. |Voce perdeu !!!|\n");
			}
			
			if (computador ==3){
				
				printf("Empate os dois escolheram papel\n");
			}
			break;


		default:
			printf("Tipo de escolha invalida!!!!!\n");
	}
		
	return 0;
}
