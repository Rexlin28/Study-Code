#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "figuras.h"

char *repetir(char * cade, int canti){
	char *auxi;
	int i;
	auxi=(char *)malloc(strlen(cade)*canti);
strcpy(auxi, "");
	for(i=1; i<=canti;i++)
		strcat(auxi, cade);
		return auxi;
}
void rectangulo(int altura, int ancho){
	int i,j;
	for(i=1;i<=altura; i++)
	{		
		printf("%s\n", repetir("*", ancho));	
		}
}
void triangulo(int altura){
	int i,j;
	for(i=1;i<=altura; i++)
	{		
		printf("%s\n", repetir("*", i));	
		}
}

void hexagono(int lado){
	int i,espa, aste, maxi, n;
	maxi=(3*lado-2);
	n=(2*lado-1);
	for(i=1;i<=n; i++)
	{		
	espa=fabs(lado-i);
	aste= maxi-2*espa;
		printf("%s%s\n",repetir(" ", espa),repetir("*",aste));	
		}
}



