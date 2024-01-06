#include <bits/stdc++.h>

using namespace std;

struct MyIntArray{
	int *data;
	int size;
	MyIntArray(int size){
		data = new (nothrow) int [size];
		if (data)
			this->size = size;
	}
	~MyIntArray(){
		if (data)
			delete [] data;
	}
};

int main(){
	MyIntArray arr(3);
//	arr.size=3;
//	arr.data = new (nothrow) int [arr.size];
	if (arr.data){
		for(int i=0; i<arr.size; i++){
		arr.data[i]= i + 10;}
		delete [] arr.data;
		
	}
	return 0;
}
