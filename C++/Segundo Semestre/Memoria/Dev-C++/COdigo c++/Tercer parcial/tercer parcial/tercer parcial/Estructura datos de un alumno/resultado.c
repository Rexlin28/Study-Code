#include <stdio.h>
#include <string.h>

struct registro_alumon{
	char nombre[20];
	float calificacion[7];
};

char* substr(char* cadena){
	
	int longitud=0;
	while(longitud<strlen(cadena) && cadena[longitud]!=':')
	longitud++;
	
    char *nuevo = (char*)malloc(sizeof(char) * (longitud+1));
    nuevo[longitud] = '\0';
    strncpy(nuevo, cadena, longitud);
    
    return nuevo;
}

main(){
	
	FILE * entra;
	FILE * salida;
	char info[100];
	char *posi;
	struct registro_alumno alumno;
	
	entra=fopen("notas.txt", "r");
	salida=fopoen("reporte.txt", "w");
	
	if(entra!=NULL){
		fgets(info, 100,entra);
		
		while(!feof(entra)){
			posi=strchr(info,':');
			alumno.nombre=substr(info);
		
		}
	
	}	
	
		fclose(entra);
		fclose(salida);


}
