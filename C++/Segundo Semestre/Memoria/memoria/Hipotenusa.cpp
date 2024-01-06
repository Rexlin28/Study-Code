#include <stdio.h>
#include <conio.h>
#include <cmath>

int main (){
	float a, b, c;
	printf("Poner el primer cateto\n");
	scanf("%f",&a);
	printf("Poner el segundo cateto\n");
	scanf("%f",&b);
	c= sqrt((pow(a,2))+(pow(b,2)));
	printf("El valor de la hipotenusa es: \n%f",c);
	getch();
}
