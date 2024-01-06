/*
ARREGLOS:
Es un tipo de dato estatico y estructurado que almacena datos de un solo tipo.

Sintaxis:
tipo_de_dato Nombre[Longitud];

Ejemplo:
int numero[10]

Acceso:
numero[5]=5;
numero[i]=dato;
numero[i]=numero[i+1] + numero[j];
printf("%d",numero[n]);
*/
#include <iostream>
#define LONG 5
using namespace std;

int main(){
	int numero[LONG],i;
	
	printf("\n\nLECTURA DE DATOS\n");
	for(i=0; i<LONG; i++){
		printf("Indica el numero %d del arreglo: ", i+1);
		scanf("%d",&numero[i]);
	}
	printf("\n\nLECTURA DE DATOS\n");
	for(i=0; i<LONG; i++){
		printf("El numero %d del arreglo fue: %d\n",i+1, numero[i]);
	}
}
