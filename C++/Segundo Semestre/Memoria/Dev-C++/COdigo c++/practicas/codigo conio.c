#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void clrscr();
void main(){
	//Uso del kbhit
	while (!kbhit())
		printf("presiona una tecla para continuar. \n");
	printf("ya pare");
	char tecla;
	getch();
	clrscr();
	printf("Escribe una tecla del abecedario: ");
	tecla = getche();
	ungetch(tecla+1);
	printf("\n %c",getch());
	getch();
		
}
void clrscr(){
	system("cls");
}
