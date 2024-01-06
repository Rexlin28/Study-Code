#include <iostream>
#include <exception>
using namespace std;

int main(){
	try{
		do{
			int* myarray=new int[10];
		}while (true);
	}catch(exception& e){
		cout << "Standard exception: "<<e.what()<<endl;
	}
}
