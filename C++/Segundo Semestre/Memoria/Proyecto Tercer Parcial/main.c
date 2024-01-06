#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sesion.h"

/* metodo principal*/

int main() { 
	char contra[50], matricula[50];
	//le indicamos al  usuario que inicie sesion registrando el usuario y contrasena
	printf("Inicie sesion \n");
	printf("Matricula: ");
	scanf("%s", &matricula);
	
	printf("Contrasena: ");
	scanf("%s", &contra);
	printf("\n%s , %s", matricula, contra);
	iniciarSesion(matricula,contra);

}




