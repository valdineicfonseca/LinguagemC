#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	if(numero%2==0){
		printf("%d eh par",numero);
	}
	else  {
		printf("%d eh impar");
	}
return 0;
}

