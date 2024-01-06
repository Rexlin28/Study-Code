#include <stdio.h>
#include <stdbool.h>
#include "misfunciones.h"


	void main(){
		
	float a,b,c;
	
	printf("Dime el valor de a: ");
	scanf("%f", &a);
	printf("Dime el valor de b: ");
	scanf("%f", &b);
	printf("Dime el valor de c: ");
	scanf("%f", &c);
	
	printf("a=%f b=%f c=%f \n", a,b,c);
	if(esValido(a,b,c)){
	
	printf("\n El triangulo es valido \n");
			if(esEquilatero(a,b,c)){
			printf("El triangulo es equilatero \n");
			}
			
			if(esIsoseles(a,b,c)){
			printf("El triangulo es Iscoseles \n");
			}
			else 
			printf("Es escaleno \n");
			}
	
			
	else{
	printf("\n No es valido \n");
}
	

}

