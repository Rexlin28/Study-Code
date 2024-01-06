#include <stdio.h>
#include <conio.h>


int longitud(char cade[]);
int longitud2(char cade[]);

int main () {
	char nombre1[40];
	char nombre2[40];
	int tamanio1;
	int tamanio2;
	int diferencia1;
	int diferencia2;
	printf("Primera palabra: ");
	scanf("%s",&nombre1);
	printf("Segunda palabra: ");
	scanf("%s",&nombre2);
	
	tamanio1=longitud(nombre1);
	tamanio2=longitud2(nombre2);
	diferencia1=tamanio1-tamanio2;
	diferencia2=tamanio2-tamanio1;

	if (tamanio1>tamanio2){
		printf("La palabra %s tiene %i letras mas que %s.",nombre1,diferencia1,nombre2);
		getch();
		
	}
	else {
		printf("La palabra %s tiene %i letras mas que %s.",nombre2,diferencia2,nombre1);
		getch();
	}
	
	}
int longitud(char cade[]){
	int resu=0;
	while(cade[resu]!='0')
		resu++;
		return resu;
	
}
int longitud2(char cade[]){
	int resultado2=0;
	while(cade[resultado2]!='0')
		resultado2++;
		return resultado2;
	
}
