#include <stdio.h>
#include <string.h>

char * quees(char primero);
int main(){
	char letra
	char *mensaje;
	printf("Ingrese un caracter");
	scanf("%c",&letra);
	
	mensaje=quees(letra);
	
	if letra==int{
		if letra==
	}
	else {
		printf("No es una letra ni numero");
	}
}
char * quees(char primero){
	if ('0'<=primero && primero<='9'){
		primero = "Es un numero";
	}
	else if('A'<=primero && primero <= 'Z'){
		primero = ("Es una letra mayuscula");
	}
	else if('á' <= primero && primero <= 'Ñ'){
		primero = ("Es una letra con acento");
	}
	else if('a'<= primero && primero <= 'z'){
		primero = ("Es una letra minuscula");
	}
	else{
		primero = ("No es ni letra ni numero");
	}
}
