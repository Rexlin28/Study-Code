#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "mayusculas.h"

char mayusculas(char cadena[]);
void main(){
char nombre[50];
scanf("%s",&nombre);
mayusculas(nombre);
printf("%s",nombre);
getch();
}

char mayusculas(char cadena[]){
	strupr(cadena);
	int i;
		/*while (i!=(strlen(cadena)) ){
	
	if (cadena[i]==160){
		cadena[i]==143;
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	else if (cadena[i]=='�'){
		cadena[i]=='�';
	}
	i++;
	}*/
	return cadena;
}
