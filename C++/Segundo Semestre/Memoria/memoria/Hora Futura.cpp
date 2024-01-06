#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c;
	printf("Indica la hora actual\n");
	scanf("%d",&a);
	printf("Indica la cantidad de horas deseadas\n");
	scanf("%d",&b);
	c= a+b;
	while (c>12){
	c=c-12;
	}
	printf("La hora futura sera:\n%d",c);
	getch();
}
