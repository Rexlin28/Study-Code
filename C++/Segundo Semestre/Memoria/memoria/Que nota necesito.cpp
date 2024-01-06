#include <stdio.h>
#include <conio.h>

int main() {
float c1,c2,c3,cp,cf,cl,cs;
printf("¿Cual es el promedio del primer certamen?\n");
scanf("%f",&c1);
printf("¿Cual es el promedio del segundo segundo ?\n");
scanf("%f",&c2);
printf("¿Cual es el promedio del laboratorio?\n");
scanf("%f",&cl);
printf("¿Cual es la calificacion para pasar?\n");
scanf("%f",&cp);

//c3=((((60-(cl*.3))/.7)*3)-(c1-c2)) ;
//c3=((((7-(cl*(.3)))/(.7))*3)-c1-c2);
cs=((cp-(cl*.3))/.7);
c3=((cs*3)-c1-c2);
printf("La calificacion necesaria en el tercer certamen es: \n%d", c3);
getch();
}
