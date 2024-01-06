#include <iostream>
#define LONG 5
using namespace std;

int main(){
	int arregloA[LONG], arregloB[LONG], arregloC[LONG], i;
	
	printf("LECTURA DE DATOS\n"
		"\nARREGLO A\n");
	for(i=0;i<LONG;i++){
		printf("Ingrese el numero %d del Arreglo A: ",i+1);
		scanf("%d",&arregloA[i]);
	}
	
	printf("\nARREGLO B\n");
	for(i=0;i<LONG;i++){
		printf("Ingrese el numero %d del Arreglo B: ",i+1);
		scanf("%d",&arregloB[i]);
	}
	
	printf("\nARREGLO C\n");
	for(i=0; i<LONG; i++){
		arregloC[i]= arregloA[i]+arregloB[i];
	}
	for(i=0;i<LONG; i++){
		printf("El numero %d del arreglo C es: %d\n",i+1,arregloC[i]);
	}
}
