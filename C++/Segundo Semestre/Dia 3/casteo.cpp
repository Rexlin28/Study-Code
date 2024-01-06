#include <iostream>

using namespace std;
int realizasuma(int suma1, int suma2);

int main(){
	int suma = 0;
	suma = suma + realizasuma(10,50);
	cout<<suma<<endl;
	suma = suma + realizasuma(20,60);
	cout<<suma<<endl;
	cout<< realizasuma(0,0)<<endl;
}

int realizasuma(int suma1, int suma2){
static int eso=0;

if	(suma1==0 && suma2==0){
	return eso;
}
else{
	eso++; return suma1 + suma2;}
	
}

