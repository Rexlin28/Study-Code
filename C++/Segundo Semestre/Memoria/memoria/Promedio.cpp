#include <conio.h>
#include <stdio.h>

int main(){
	
	float P1, P2, P3, Promedio;
	int C1, C2, C3;
	printf("Ingrese la calificacion 1: \n");
	scanf ("%d",&C1);
	printf("\nIngrese la calificacion 2: \n");
	scanf ("%d",&C2);
	printf("\nIngrese la calificacion 3: \n");
	scanf ("%d",&C3);
	P1= 0.3;
	P2= 0.3;
	P3= 0.4;
	
	Promedio = (P1*C1)+(P2*C2)+(P3*C3);
	printf ("El promedio es: %4.2f", Promedio);
	getch ();
	
	
	
}
