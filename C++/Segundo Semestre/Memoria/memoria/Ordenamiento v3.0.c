#include <conio.h>
#include <stdio.h>
#include "util.h"
void ordenar(int vecto[], int cantidad);
void mostrar(char *mensaje,int *lista, int numeros);
void intercambio(int *x,int *y);

void main(){
int numeros;
int i,t;
int yoquese[100];

printf ("Ingrese el numero de valores a tomar: ");
scanf("%d",&numeros);
for (i=0; i<numeros; i++){
	printf("Ingrese el numero %d: ",(i+1));
	scanf("%d",&yoquese[i]);

}
ordenar(yoquese,numeros);
mostrar("los numeros ordenados son: \n",yoquese,numeros);
//for(t=0; t<numeros; t++){
	///printf("%d \n",yoquese[t]);
//}
getch();
}


