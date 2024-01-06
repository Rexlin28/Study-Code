#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "figuras.h"

int main(){
	int h,a;
	printf("Altura: ");
	scanf("%d", &h);
	
	printf("Ancho: ");
	scanf("%d", &a);
	printf("\n");
	
	rectangulo(h, a);
	printf("\n");
	
	triangulo(h);
	printf("\n");
	
	hexagono(a);
	
	return 0;
}
