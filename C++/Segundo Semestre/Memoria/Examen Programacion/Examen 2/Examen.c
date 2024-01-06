#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "string.h"



void main(){
	char nombre[50];
	
	printf("Escriba la frase");
	scanf("%s",&nombre);
	
	mayusculas(nombre);
	getch();
}


