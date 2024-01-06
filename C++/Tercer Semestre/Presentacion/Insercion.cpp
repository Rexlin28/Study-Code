#include <iostream>
#define LONG 10
using namespace std;

void Insercion(int numbers[], int array_size){
	int i, j, auxi;
	//Arreglo "ordenado"
	for (i=1; i<array_size; i++){ //Izquierda a derecha 
		auxi= numbers[i];
		j = i-1;
		//Arreglo "Desordenado"
		while(j >= 0 && numbers[j]>auxi){ //Derecha a izquierda
			numbers[j+1] = numbers[j];
			j--;
		}
		numbers[j+1]= auxi;
	}
}


int main(){
	int arreglo[LONG]= {5,32,4,24,48,94,54,24,1002,151};
	int array[LONG]= {89,24,45,6,35,22,1,-56,47,11};
	
	Insercion(arreglo,LONG);
	Insercion(array, LONG);
	
	for(int i=0; i<LONG; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<LONG; i++){
		cout<<array[i]<<" ";
	}
}
