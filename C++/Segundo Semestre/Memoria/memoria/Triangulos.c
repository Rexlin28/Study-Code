#include <stdio.h>
#include <conio.h>

void main (){
	float a,b,c;
	char isoseles,escaleno,rectangulo;
	
	printf("Ingrese lado a: ");
	scanf("%f",&a);
	printf("Ingrese lado b: ");
	scanf("%f",&b);
	printf("Ingrese lado c: ");
	scanf("%f",&c);
	
	if (c>(a+b)){
		printf("No es un triangulo valido");
	}
	else if ((c==a) && (c==b) && (c==a)){
		printf("El triangulo es isoceles");
	}
	else{
		printf("El triangulo es escaleno");
	}
	getch();
}
