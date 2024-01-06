#include <stdio.h>
#define LONG 10


void Insercion(int numbers[], int array_size){
	int i, a, index;
	for (i=1; i<array_size; i++){ //Derecha a izquierda
		index= numbers[i];
		a = i-1;
		while(a >= 0 && numbers[a]>index){ //Izquierda a derecha
			numbers[a+1] = numbers[a];
			a--;
		}
		numbers[a+1]= index;
	}
}


int main(){
	int arreglo[LONG]= {5,32,4,24,48,94,54,24,1002,151};
	
	Insercion(arreglo,LONG);
	
	for(int i=0; i<LONG; i++){
		cout<<arreglo[i]<<" ";
	}
}
