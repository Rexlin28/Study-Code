#include <stdio.h>
#include <stdlib.h>
#include <conio>
#include "util.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
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
	
	return 0;
}
