#include<stdio.h>

int residuo(int dividendo, int divisor)
{
	while(dividendo>=divisor)
	dividendo-=divisor;
	return dividendo;
}

void main(){
	int nume, resultado;
	printf("Ingrese un numero: ");
	scanf("%i", &nume);
	if(residuo(nume, 2)==0){
		printf("es par");
	}
	else{
		printf("es impar");
	}	
}



