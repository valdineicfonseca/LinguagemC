 /* 
 
 A especificação é a seguinte:
- O sistema a ser desenvolvido é uma calculadora com as operações: soma, subtração, multiplicação e divisão.
- Os operadores serão representados por números inteiros de 1 a 4.
- Se o usuário digitar um operador inválido, não deve ser pedido os operandos, ou seja, os números para a operação; - Se o usuário digitar 5, o programa deve ser encerrado e também não deverá ser pedido os operandos.
- A entrada do sistema são 3 números: um operador e dois operandos.
- A saída e o resultado da operação.
- Depois de realizar a operação e mostrar o resultado o programa deve mostrar o menu de escolha de operações.
	 
Você deve entregar um relatório contendo a linha do erro e como corrigí-la.?

Athor: Valdinei C. @ 2022
	 
*/

#include <stdio.h>

int main(){
	int operador;
	float numero1, numero2,resultado;
	
	do {
		printf("--- Menu ---\n");
		printf("1 - Soma \n");
		printf("2 - Subtracao \n");
		printf("3 - Multiplicacao \n");
		printf("4 - Divisao \n");
		printf("5 - Encerrar \n");
		scanf("%d",&operador);
		
		// condicional adicionada caso usuario digite um numero invalido
		if(operador != 0 && operador <= 4){
			
			printf("Digite o primeiro numero: \n");
			scanf("%f",&numero1);
			
			printf("Digite o segundo numero: \n");
			scanf("%f",&numero2);
			}
				
	
			
		switch(operador){
			case 1:
				resultado=numero1+numero2;
				printf("Resultado da operacao Soma entre %.2f e %.2f = %.2f \n",numero1,numero2,resultado);
				break;
			case 2:
				resultado=numero1-numero2;
				printf("Resultado da operacao Subtracao entre %.2f e %.2f = %.2f \n",numero1,numero2,resultado);
				break;
			case 3:
				resultado=numero1*numero2;
				printf("Resultado da operacao Multiplicacao entre %.2f e %.2f = %.2f \n",numero1,numero2,resultado);
				break;
			case 4:
				resultado=numero1/numero2;
				printf("Resultado da operacao Divisao entre %.2f e %.2f = %.2f \n",numero1,numero2,resultado);
				break;
			case 5:
				resultado=numero1+numero2;
				printf("Encerrando calculadora!!\n");
				break;
			
			// Caso nenhuma opcao acima seja escolhida a default sera executada
			default:
				printf("Opcao Invalida... \n");
				break;
		}
		
	
			
	// O numero foi trocado para diferente de 5, enquanto o operador for diferente de 5 o loop sera executado...		
	}while (operador!=5);
	return 0;
}
