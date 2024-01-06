#include <string.h>
#include <cambiador>
char cambiador(char numero[50]){
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
	return Cambiado[];
}
	

