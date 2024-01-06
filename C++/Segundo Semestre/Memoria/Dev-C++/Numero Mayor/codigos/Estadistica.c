//#include "Estadistica.h"
#include <stdio.h>
int Mayor(int vector[], int n){
	int mayo,i;
	mayo=vector[0];
	for(i=1;i<n;i++){
		if (vector[i]>mayo)
		mayo=vector[i];
	}
	return mayo;
}

int DameIntervalo(char * mensaje,int inferior, int superior){
	int i, intervalo,resultado;
	printf("El intervalo valido es: [%d,%d]\n",inferior,superior);
	do{
	printf("%s",mensaje);
	scanf("%d",&resultado);
	}while(resultado<inferior||resultado>superior);
	
	
	return resultado;
}

void CapturarVector(int vector[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Ingrese n%cmero %d: ",163,(i+1));
		scanf("%d",&vector[i]);
	}	
}

int Menor(int vector[], int n){
	int menor,i;
	menor=vector[0];
	for(i=1;i<n;i++){
		if(vector[i]<menor){
			menor=vector[i];
		}
	}
	return menor;
}

float Media(int vector[], int n){
	int i;
	float media;
	media=0;
	for(i=0;i<n;i++){
		media+=vector[i];
	}	
	media = (media/n);
	return media;
}
