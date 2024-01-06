#include <stdio.h>

int paroimpar (numero);
int main(){
	 int numero, resultado;
	 printf("Ingrese un numero: ");
	 scanf("%d", &numero);
	
	if(paroimpar(2, numero)==0){
		printf("Es par \n");
	}else{
		printf("Es impar \n");	
	}
}
int paroimpar(int dividendo, int divisor){
	while(dividendo>=divisor)
	dividendo-=divisor;
	return dividendo;
}
