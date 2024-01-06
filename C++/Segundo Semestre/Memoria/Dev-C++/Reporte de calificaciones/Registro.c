#include <stdio.h>
#include <string.h>

struct registro{
	char nombre[20];
	float califas[6];
};

char* substr(char* cadena)
{
	int longitud=0;
	while(longitud<strlen(cadena)&&cadena[longitud]!=':')
	longitud++;
	
   
    char *nuevo = (char*)malloc(sizeof(char) * (longitud+1));
    nuevo[longitud] = '\0';
    strncpy(nuevo, cadena, longitud);
    
    return nuevo;
}
 

void creacion_texto(char * archivo){
	FILE * entrada;
	FILE * salida;
	char * info[100];
	struct registro alumno;
	
	entrada=fopen(archivo,"r");
	salida=fopen("reporte.txt","w");

	if (entrada==NULL){
		printf("No existe el archivo");
	}
	else {
		fgets(info,100,entrada);
		while(!feof(entrada)){
			strchr(info,':',)
			alumno.nombre=substr(info);
		}
	}
}
