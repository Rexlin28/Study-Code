#include <conio.h>
#include <stdio.h>

int main (){

float Valor, Total;

printf ("Ingrese el valor en cm: \n");
scanf ("%f",&Valor);
Total= (Valor / 2.54);
printf("El valor en pulgadas es: %f", Total);
getch();
}
