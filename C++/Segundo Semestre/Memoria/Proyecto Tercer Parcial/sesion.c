#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sesion.h"

int iniciarSesion(char user[50], char pass[50]){
	FILE *p;
	char user2[50], pass2[50];
	
	p = fopen("BaseDeDatos.txt","r");
	
	fscanf(p,"Usuario: %s Contrasena: %s",user2,pass2);
	
	if((strcmp(user,user2)==0) && (strcmp(pass,pass2)==0))
		printf("\n Sesion iniciada correctamente");
	else
		printf("\nDatos ingresados incorrectamente");
	fclose(p);
	return 0;
}
