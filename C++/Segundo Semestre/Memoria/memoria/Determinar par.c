#include <stdio.h>
#include <conio.h>
int residuo(int dividendo,int divisor){
	while (dividendo>=divisor)
		dividendo-=divisor;
		return dividendo;
} 


void main(){

int numero,operacion;
printf("introdusca el numero: ");
scanf("%i",&numero);
operacion= numero%2;

if (residuo(numero, 2)==0){
	printf("El numero %i es par",numero);
	
}
else {
	printf("El numero %i es impar",numero);
	
}
getch ();
}
