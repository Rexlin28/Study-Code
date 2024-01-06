#include "util.h"
void ordenar(int vecto[], int cantidad){
	int i, j,auxi;
	
	for(i=0;i<cantidad;i++)
		for(j=i+1;j<cantidad;j++)
			if(vecto[i] > vecto[j]){
				intercambio(&vecto[i],&vecto[j]);
				
			
			
		
	}
}
void mostrar(char *mensaje,int *lista, int numeros){
int i;
printf(mensaje);
for(i=0; i<numeros; i++){
	printf("%d ",lista[i]);
}
}
void intercambio(int *x, int *y){
	int auxi;
	auxi= *x;
	*x=*y;
	*y=auxi;
}
