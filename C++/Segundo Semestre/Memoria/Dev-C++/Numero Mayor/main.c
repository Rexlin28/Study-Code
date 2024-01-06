#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Estadistica.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i, vector[100];
	
	n=DameIntervalo("ingrese cuantos numeros son: ",1,100);
	
//	printf("Ingrese cuantos numeros son: ",n);
//	scanf("%d",&n);
	
	CapturarVector(vector,n);
	
	printf("El mayor es: %d\n",Mayor(vector,n));
	printf("El menor es: %d\n",Menor(vector,n));
	printf("La media es: %f\n",Media(vector,n));
	getch();
	
	return 0;
}
