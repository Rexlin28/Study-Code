#include <stdio.h>
#include <conio.h>

int main(){
	double a;
	printf("ingrese un numero:\n");
	scanf("%lf",a);

	while (a>1){
		a-1;
	}
	while (a<0){
		a+1;
	}
	
	printf("El numero es: \n%lf",a);
	getch();
}
