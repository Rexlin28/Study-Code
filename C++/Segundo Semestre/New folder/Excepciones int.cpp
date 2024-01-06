#include <iostream>
using namespace std;

int main(){
	int x=0,y=0,z=3;
	
	int division(int a,int b);
	
	try{
		z= division(x,y);
		}
	catch(int a){
		std::cerr << a <<"\n";
	}catch(int b){
		cout <<"Adios Jovenaso";
	}catch(const char * msg){
		std::cerr << msg << "\n";
	}catch(const std::exception& e){
		std::cerr << e.what() << "\n";
	}
}

int division(int a,int b){
	if(b==0)
		throw;
	if(b>a)
		throw "b no puede ser mayor que a";
	return a/b;
}
