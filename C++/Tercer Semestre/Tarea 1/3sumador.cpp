#include <iostream>
using namespace std;

int main(){
	int numero = -1, suma;
	
	while(numero!=0){
		printf("Indica un numero: ");
		scanf("%d", &numero);
		suma+=numero;
	}
	printf("La suma es: %d",suma);
}
