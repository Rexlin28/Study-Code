#include <iostream>
#include <string>
#define REN 4
#define COL 3
using namespace std;
int main(){
	int arregloA[COL][REN],sumador, i, j;
	
	for(i=0; i<COL; i++){
		for(j=0; j<REN; j++){
			printf("Ingrese del arreglo el num %d,%d: ",i,j);
			scanf("%d",&arregloA[i][j]);
		}
	}
	

	for(i=0; i<COL; i++){
		for(j=0; j<REN; j++){
			printf("Arreglo[%d][%d]: %d\t",i,j,arregloA[i][j]);
			
		}
		printf("\n");
	}

	for(i=0; i<COL; i++){
		sumador=0;
		for(j=0;j<REN;j++){
			sumador+=arregloA[i][j];
		}
		printf("La suma del renglon %d es: %d\n",i,sumador);
	}
}
