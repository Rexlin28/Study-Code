#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Rectangulo.h"

int main(){
	int base,altura,i,o;
	char cosa[100];
	printf("intruzca la base: ");
	scanf("%d",&base);
	printf("intruzca la altura: ");
	scanf("%d",&altura);
	printf("\n");
	Rectangulo(base,altura);
	printf("\n");
	Triangulo(altura);
	printf("\n");
	Hexagono(base);
	getch();
}
