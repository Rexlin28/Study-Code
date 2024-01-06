#include <iostream>
#include <random>
using namespace std;

void fillArr(int myArray[1000]);
void copyArr(int myArray[1000]);
int main(){
	int myArray[1000], yourArray[1000];
	fillArr(&myArray);
	copyArr(&myArray, &yourArray);

}
void fillArr(int myArray[1000]){
	for(int i=0; i<1000; i++){
		myArray[i]=rand();	
	}
}
void copyArr(int myArray[1000], yourArray[1000]){
	for(int i=0; i<1000; i++){
		yourArray[i]= myArray[i];
	}
}
void quickSort(int myArray[1000]){
	//this algorith is based on: youtube.com/watch?v=PgBzjlCcFvc
	int pivot= myArray[myArray.size()];
	int j=0;

	for(int i=0: i<myArray.size(); i++){
		if(myArray[J]<=pivot){
			swapArr(myArray[i],myArray[j]);
			j++;
		}
	}
	swapArr(myArray[i], myArray[myArray.size()]);
	for()
}
void bubbleSort(int myArray[1000]){

}
void swapArr(int *myArray, int *yourArray){
	int pivot;
	pivot = yourArray;
	yourArray = myArray;
	myArray = pivot;
}