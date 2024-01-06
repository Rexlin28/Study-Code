#include <iostream>

using namespace std;

int realizaSuma(int sumando1, int sumando2);

int main(){
	int sumando1, sumando2, suma;
	
	suma = realizaSuma(sumando1, sumando2);
	cout<<"Suma es igual a "<<suma<<endl;
	
	suma= realizaSuma(sumando1, sumando2);
	cout<<"Suma es igual a "<<suma<<endl;
	
	
}
int realizaSuma(int sumando1, int sumando2){
	return sumando1 +sumando2;
}

