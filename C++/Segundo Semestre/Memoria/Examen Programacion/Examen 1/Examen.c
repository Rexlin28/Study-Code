#include <stdio.h>
#include <string.h>
#include <conio.h>
//#include "mayusculaas.h"

char mayusculaas(char cadena[]);

void main(){
	
char nombre[50];
scanf("%s",&nombre);
mayusculaas(nombre);
printf("%s",nombre);
getch();
}

char mayusculaas(char cadena[]){
	strupr(cadena);
	return cadena;
}
