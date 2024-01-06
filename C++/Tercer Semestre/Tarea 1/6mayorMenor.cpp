#include <iostream>
#define LONG 10
using namespace std;

int main(){
	int i, arreglo[LONG], verificador=0;
	
	printf("LECTURA DE DATOS\n");
	for(i=0; i<LONG; i++){
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&arreglo[i]);
	}
	//NUMERO MAYOR
	verificador= arreglo[0];
	for(i=1; i<LONG; i++){
		if(verificador < arreglo[i]){
			verificador = arreglo[i];
		}
	}
	printf("\nEl numero mayor es: %d",verificador);
	
	//NUEMRO MENOR
	for(i=0; i<LONG; i++){
		if(verificador > arreglo[i]){
			verificador = arreglo[i];
		}
	}
	printf("\nEl numero menor es: %d ",verificador);
}
