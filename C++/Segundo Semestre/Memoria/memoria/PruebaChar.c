#include <stdio.h>
#include <conio.h>
int longitud(char cade[]){
	int resultado=0 ;
		while (cade[resultado]!='\0')
			resultado++;
			return resultado;
	
}
void main() {
	char nombre[40];
	int tamanio;
	printf("nombre: ");
	scanf("%s",nombre);
	
	tamanio = longitud(nombre);
	
	printf("la longitud del nombre es %i",tamanio);
	getch();
}
