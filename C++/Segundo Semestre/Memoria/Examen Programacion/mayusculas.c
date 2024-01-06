#include <string.h>
#include "mayusculas.h"

char mayusculas(char cadena[50]){

	int i=0;
	strupr(cadena);
	while (i!=(strlen(cadena)) ){
	
	if (cadena[i]=='á'){
		cadena[i]=='Á';
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
	}

return cadena;
}
