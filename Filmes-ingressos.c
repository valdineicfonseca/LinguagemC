/* 

Desafio 3 - Disicplona Estrutura de dados Linguagem C

Seu gerente pediu que desenvolvesse um programa em C para calcular o valor de ingressos do cinema
e fornecer aos usuários. O programa deve apresentar ao usuário as opções de filme e o valor total
dos ingressos, com custo de 12,50 reais cada. Além disso, o valor do ingresso deve ser facilmente modificado no código.  

Dev: Valdinei C. Fonseca 2022

*/


#include <stdio.h>
#include <string.h>
char filme[0]="Sem ...";

int main()
{
	double valor_ingresso, total;
	int quantidade, opcao_filme;
	
	opcao_filme = 0;
	//filme = "";
	quantidade = 0;
	valor_ingresso =12.5;
	total =0;
	int sair =1;
	
	while (1)
	
	{
		
		printf("Valor do ingresso:  %.2f\n\n", valor_ingresso);
		printf(" Opcao 1: Vingadores 4 – da Marvel \n");
		printf(" Opcao 2: Como Treinar o Seu Dragão 3 \n");
		printf(" Opcao 3: Dumbo \n");
		printf(" Opcao 4: Shazam! \n");
		printf(" Opcao 5: Para mudar o valor do ingresso(Valor padrao R$ 12.50)\n");
		printf(" Opcao 6: Para sair\n");
		printf("\n Escolha uma das opcoes conforme lista acima: ");
		
		scanf("%d", &opcao_filme);
		
		printf("%d\n",opcao_filme);
		
		
		if(opcao_filme == 5)
	  	{
	    	printf("Digite o valor do ingresso (padrão de R$ 12.50)\n");
		scanf("%lf",&valor_ingresso);
			
		}
		
		
		
		if (opcao_filme==1)
		{
			strcpy(filme,"Vingadores 4 – da Marvel");
			printf("Digite a quantidade de ingressos:");
			scanf("%d",&quantidade);
			break;
			
		}
	  	if (opcao_filme==2)
		{
			strcpy(filme,"Como Treinar o Seu Dragão 3");
			printf("Digite a quantidade de ingressos:");
			scanf("%d",&quantidade);
			break;
		}
		if (opcao_filme==3)
		{
			strcpy(filme,"Dumbo");
			printf("Digite a quantidade de ingressos:");
			scanf("%d",&quantidade);
			break;
		}
		if (opcao_filme==4)
		{
			strcpy(filme,"Shazam!");
			printf("Digite a quantidade de ingressos:");
			scanf("%d",&quantidade);
			break;
		}
		if (opcao_filme==6)
		{
			break;
		}
   }
	
	if (opcao_filme==6)
		{
			printf("Programa encerrado...");
		} 
		else {
			total = valor_ingresso * quantidade;
			printf("\n\n O filme escolhido foi: %s",filme);
			printf("\n preco unitario do ingresso %.2f",valor_ingresso);
			printf("\n quantidade de ingresso %d",quantidade);
			printf("\n Total a pagar: %.2f",total);	
		}
	
	return 0;
}

/* 
Se o usuário escolher a opção 1: Vingadores 4 – da Marvel 
Se o usuário escolher a opção 2: Como Treinar o Seu Dragão 3 
Se o usuário escolher a opção 3: Dumbo 
Se o usuário escolher a opção 4: Shazam! 

*/
