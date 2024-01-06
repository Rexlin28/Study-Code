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
	else if (cadena[i]=='é'){
		cadena[i]=='É';
	}
	else if (cadena[i]=='í'){
		cadena[i]=='Í';
	}
	else if (cadena[i]=='ó'){
		cadena[i]=='Ó';
	}
	else if (cadena[i]=='ú'){
		cadena[i]=='Ú';
	}
	else if (cadena[i]=='ü'){
		cadena[i]=='Ü';
	}
	else if (cadena[i]=='ñ'){
		cadena[i]=='Ñ';
	}
	i++;
	}*/
	return cadena;
}
