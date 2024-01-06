#include <iostream>

using namespace std;

int inCrementaVariable();

int main(){
	cout<<"Incrementa var local: "<<inCrementaVariable()<<endl;
	cout<<"Incrementa var local: "<<inCrementaVariable()<<endl;
}
int inCrementaVariable(){
	static int ac= 0;
	for (int i=0;i<10;i++){
		ac++;
	}
	return ac;
}
