/* 

- Disicplona Estrutura de dados Linguagem C
Identificar numero digitado se é par ou impar 
Dev: Valdinei C. Fonseca  2022 

*/



#include <stdio.h>

int main(){
	int numero, resto;
	printf("**** Descobrindo se o numero digitado é par ou impar****\n");
	printf("Digite um numero: ");
	scanf("%d", &numero);
	resto=numero%2;
	printf("Resto da divisao %d \n",resto);
	if (resto == 0){
		printf("\n Numero digitado e par");
	} 
	else {
		printf("\n Numero digitado e impar");
	}
	
	float n=3.2;
	float i=2.5;
	float resultado=10;
	resultado=resultado+i+n*3-2;
	printf("%.2lf \n",resultado);
	
	return 0;
}
