#include <stdio.h>
#include <conio.h>
// 	int*vecto
void ordenar(int vecto[], int canti);

int main(){
	 //Entradas
	int cantidad; //cantidad de numeros
	int numero[100];
	int i;
	printf("increse el numero de valores a evaluar: ");
	scanf("%d", &cantidad);
	
	for(i=0; i<cantidad; i++){
		printf("Dame el numero %d: ", (i+1));
		scanf("%d", &numero[i]);	
	}
	printf("Los numeros introducidos son : \n");
		for(i=0; i<cantidad; i++){
		printf("%d ",numero[i]);	
		}
		ordenar(numero, i);
		printf("\n");
		printf("Los numeros en orden : \n");
		for(i=0; i<cantidad; i++){
		printf("%d ",numero[i]);	
		}
}

void ordenar(int vecto[], int canti){
	int i, j, auxi;
	for(i=0; i<canti;i++)
	
		for(j=i+1; j<canti; j++)
		
			if (vecto[i]  > vecto[j]){
			auxi=vecto[i];
			vecto [i] = vecto [j];
			vecto [j] = auxi;
			}
	
}
