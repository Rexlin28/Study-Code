#include<stdio.h>

void main(){
	
	int numero, resultadito, abr;
	
	printf("Dime el numero \n");
	scanf("%i", &numero);
	
	resultadito=numero%2;
	
	
	if(resultadito==0){
	printf("es par");	
	}
	else{
		printf("es impar");
	}
}
