#include <iostream>
using namespace std;

int main(){
	int arr[30];
	for (int i=0; i<30; i++){
		arr[i] = rand();
	}
	cout << sizeof(arr)<<" "<<arr[29]<<" "<<arr[30]<<endl;
	cout <<(sizeof(arr)/sizeof(arr[0]));
}
