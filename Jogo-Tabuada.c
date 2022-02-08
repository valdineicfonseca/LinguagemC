/* 

Desafio 4 - Jogo educativo tabuada Linguagem C

O jogo funciona da seguinte forma: o usuário digita um número,
e o computador irá mostrar o antecessor e o sucessor,
a tabuada de multiplicação desse número e, em seguida, os três próximos números com
contagem de dois em dois.

- Pedir ao usuário um número.
- Calcular o antecessor e sucessor desse número.
- Mostrar a tabuada de multiplicação desse número.
- Apresentar os próximos três números com contagem de dois em dois.

Esse jogo será modificado futuramente, pois se deseja adicionar algumas funcionalidades,
como escolha do tipo de tabuada e tamanho do "passo" da contagem. Portanto, organize seu 
código de forma que outro programador possa entendê-lo.

Dev: Valdinei C. Fonseca 2022

*/


#include <stdio.h>
#include <string.h>


int main()
{
	int numero, stop, contador, n_dois_em_dois;
	
	
	contador=0;
	numero = 0;
	stop=0;
	n_dois_em_dois= 0;
	
	while (1)
	
	{
		
		//printf("Valor do ingresso:  %.2f\n\n", valor_ingresso);
		printf(" Digite um número entre 1 e 10: \n");
    	scanf("%d", &numero);
		
		printf("numero digitado: %d\n",numero);
		printf("numero antecessor: %d\n",numero -1);
		printf("numero sucessor: %d\n",numero + 1);
		
		
	
		
		
		if(numero < 1 ||  numero > 10)
	  	{
	    	printf("Número digitado deve ser entre 1 a 10, digite um número novamente: \n");
		scanf("%d", &numero);
			
		}
		
		if( numero > 0 && numero < 11)
		{
			for(contador = 1; contador <=10; contador++){
			
			printf("%d x %d = %d\n",numero, contador, contador * numero);
			}
			
			printf("3 proximos numeros contando de 2 em 2: \n");
			n_dois_em_dois=numero;
			
			for(contador = 1; contador <=3; contador++){
			n_dois_em_dois=n_dois_em_dois + 2;
			printf("%d \n", n_dois_em_dois);
			}
			stop = 1;
		}		
	
	  	if(stop == 1){
	  		break;
		  }
   }
	

	return 0;
}


