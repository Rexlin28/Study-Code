#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Rectangulo.h"


char *Repetir(char * cadena, int cantidad){
	char *auxi;
	auxi=(char *)malloc(strlen(cadena)*cantidad);
	strcpy(auxi,"");
	int i;
	for(i=1;i<=cantidad;i++){
		strcat(auxi,cadena);
		
		
	}
	return auxi;
}

void Rectangulo(int base, int altura){
	int i,o,cosa;
	for (i=1;i<=base;i++){
	printf("%s\n",Repetir("*",altura));
	
	}
}

void Triangulo(int altura){
	int i,o;
	for (i=1;i<=altura;i++){
		printf("%s\n",Repetir("*",i));
	}
}

void Hexagono(int lado){
	int i,espa,aste,maxi,n;
	maxi=(3*lado-2);
	n=(2*lado-1);
	for (i=1;i<=(2*lado-1);i++){
		espa=fabs(lado-i);
		aste=maxi-2*espa;
		printf("%s%s\n",Repetir(" ",espa),Repetir("*",aste));
	}
}
