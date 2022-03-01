/* 
cálculo do fatorial de um número
inteiro N. Este problema consiste em realizar a multiplicação de N por todos os seus
antecessores até chegar ao número 1.
Para exemplificar, suponha que você queira calcular o fatorial de 5, o qual é representado por 5!. Neste caso, teríamos:
5! = 5 × 4 × 3 × 2 × 1 = 120
Portanto, o fatorial de 5 é 120.

Reproduzindo cálculo fatorial utilizando função recursiva

Author: Valdinei C. @ 2022

*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int valor){
	if(valor != 1){
		printf("%d\n",valor);
		return valor * fatorial(valor -1);
	
	}
	else {
		return valor;
	}
		
}
int main(){
	// Troca a cor console:
		// 0 a F ==> Cor do plano de fundo
		// 0 a F ==> Cor do texto
	system("color 1F");
	int n, resultado = 0;
	printf("Calculo do fatorial - Funcao recursiva \n");
	printf("---------------------- \n");
	printf("Digite um numero inteiro positivo: \n");
	scanf("%d",&n);
	resultado = fatorial(n);
	printf("\n Resultado do fatorial = %d", resultado);
	return 0;
}

