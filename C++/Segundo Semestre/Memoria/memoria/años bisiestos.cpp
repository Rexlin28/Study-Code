#include <stdio.h>
#include <conio.h>

int main(){
	
	int a;
	printf("Ingrese el año: \n");
	scanf("%d",&a);
	
	if ((a%4==0) && ((a%100 != 0) || (a%400==0))){
		printf("%d si es bisiesto",a);
	}
	else{
		printf("%d no es bisiesto",a);
	}
	getch();
	}
