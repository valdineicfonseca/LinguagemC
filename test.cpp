#include <stdio.h>

int f(int n){

   if (n < 4){
   
      return 2 * n;
	}
   else{

      return 3 * f (n - 4);
	}

}

int main(){
int resultado =0;

resultado = f(1);
printf("%d\n", resultado);


return 0;

}


