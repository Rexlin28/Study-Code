#include <iostream>
#include <random>
#include <array>
using namespace std;

int sizeArr(int myArray[10]){
	int ans = sizeof(myArray)/sizeof(myArray[0]);
	return ans;
}
void swapArr(int *myArray, int *yourArray){
	int *pivot;
	pivot = yourArray;
	yourArray = myArray;
	myArray = pivot;
}

void quickSort(int myArray[10]){
	//this algorith is based on: youtube.com/watch?v=PgBzjlCcFvc
	int pivot= myArray[sizeArr(myArray)];
	for(int i=0; i<sizeArr(myArray);i++){
		cout<<myArray[i]<<" ";
	}cout<<"\n"<<endl;
	int j=0, i=0;
	

	while(i<sizeArr(myArray)){
		if(myArray[j]<=pivot){
			swapArr(&myArray[i],&myArray[j]);
			j++;
		}
			i++;
	}
	swapArr(&myArray[i], &myArray[sizeArr(myArray)]);
	for(int i=0; i<sizeArr(myArray);i++){
		cout<<myArray[i]<<" ";
	}
}
void bubbleSort(int myArray[1000]){

}


int main(){
	int myArray[10];
	for (int i=0; i<10; i++){
		myArray[i] = rand();
	}
	for (int i=0; i<10; i++){
		cout<<myArray[i]<<" ";
	}
	quickSort(myArray);
}
