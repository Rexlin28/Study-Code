#include <iostream>
#include <string>
#define REN 5
#define COL 15
using namespace std;

int main(){
	char arreglo[REN][COL];
	int i,j;
	/*
	for(i=0;i<REN;i++){
		for(j=0;j<COL;j++){
			printf("Indica el valor [%d][%d]: ",i,j);
			scanf("%d",&arreglo[i][j]);
		}
	}*/
	
	for(i=0;i<REN;i++){
		printf("Indica la palabra %d: ",i)
		gets(arreglo[i]);
	}
	for(i=0;i<REN;i++){
		printf("La palabra %d es: %s",i,arreglo[i]);
	}
}
