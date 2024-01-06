#include<stdio.h>
#include <conio.h>
int longitud (char cade[]){
	int resu=0;
		while(cade[resu]!='\0')
		resu++;
		return resu;
	}
	
void main(){
	
	char nombre[40];
	int tama;
	
	printf("Nombre: ");
	scanf("%s", nombre);
	
	tama=longitud(nombre);
	printf("la longitud del nombre es: %i", tama);
	getch();
	puts("aiuda");
	
}
