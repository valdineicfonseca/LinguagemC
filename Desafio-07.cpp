 /* 
 
 A especifica��o � a seguinte:
- O sistema a ser desenvolvido � uma calculadora com as opera��es: soma, subtra��o, multiplica��o e divis�o.
- Os operadores ser�o representados por n�meros inteiros de 1 a 4.
- Se o usu�rio digitar um operador inv�lido, n�o deve ser pedido os operandos, ou seja, os n�meros para a opera��o; - Se o usu�rio digitar 5, o programa deve ser encerrado e tamb�m n�o dever� ser pedido os operandos.
- A entrada do sistema s�o 3 n�meros: um operador e dois operandos.
- A sa�da e o resultado da opera��o.
- Depois de realizar a opera��o e mostrar o resultado o programa deve mostrar o menu de escolha de opera��es.
	 
Voc� deve entregar um relat�rio contendo a linha do erro e como corrig�-la.?

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
