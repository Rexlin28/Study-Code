#include <stdio.h>

int main(){
	char nombre[7]="Miguel";
	FILE *datos;
	datos = fopen("datos.txt","w");
	fprintf(datos,nombre);
	if (datos != NULL){
		printf("El archivo %s", "datos.txt"" se ha creado exitosamente \n");
	}
	fclose(datos);
	return 0;
}
