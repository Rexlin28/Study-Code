#include <iostream>
#define LONG 10
using namespace std;

void Seleccion(int numbers[], int array_size){
	int min,swap;
	for(int i=0; i<array_size; i++){
		min = i;
		for(int j=i+1; j<array_size; j++){
			if(numbers[j]<numbers[min]){
				min=j;
			}
		}
		if(min!=i){
			swap = numbers[min];
			numbers[min] = numbers[i];	
			numbers[i]= swap;
		}
	}
}

int main(){
	int arreglo[LONG]= {5,32,4,24,48,94,54,24,1002,151};
	int array[LONG]= {89,24,45,6,35,22,1,-56,47,11};
	
	Seleccion(arreglo,LONG);
	Seleccion(array, LONG);
	
	for(int i=0; i<LONG; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<LONG; i++){
		cout<<array[i]<<" ";
	}
}
