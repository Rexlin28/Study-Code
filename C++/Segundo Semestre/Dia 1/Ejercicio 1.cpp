#include <stdio.h>
#include <string.h>
#include <cambiador>

int main(){
	
	char Numeros[50];
	printf("Introduce los numeros\n");
	scanf("%s",&Numeros);
	printf("%s\n12345",Numeros);
	
	printf("%d",strlen(Numeros));
///	cambiador(Numeros);
}
int cambiador(numero[500]){
	int n,m,lengt;
	char Cambiado[50];
	lengt = (strlen(numero));
	n=0;
	m=0;
	while (n<lengt){
		lengt= lengt-1;
		Cambiado[m]=numero[lengt];
		n++;
		m++;
		
	}
	

