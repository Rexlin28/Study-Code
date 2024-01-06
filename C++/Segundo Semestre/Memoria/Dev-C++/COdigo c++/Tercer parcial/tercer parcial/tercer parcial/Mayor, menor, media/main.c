#include <stdio.h>
#include <stdlib.h>
#include "estadistica.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	int vecto[100];
	
	n=dameIntervalo("Ingrese n: ", 1,100);
	 
	capturarVector(vecto, n);
	 
	printf("El mayor es: %d \n",mayor(vecto, n));
	printf("El menor es: %d \n",menor(vecto, n));
	printf("La media es: %f \n",media(vecto, n));
	
	return 0;
}
