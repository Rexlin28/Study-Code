#include <stdio.h>
#include <conio.h>
int mod(int dividendo,int divisor){
	while (mod>=divisor){
		dividendo-=divisor;
		return dividendo;
	}
} 


int main(){

int numero,operacion;
printf("introdusca el numero: ");
scanf("%i",&numero);
operacion= numero%2;

if (mod(operacion==0)){
	printf("El numero %i es par",numero);
	
}
else {
	printf("El numero %i es impar",numero);
	
}
getch ();
}
