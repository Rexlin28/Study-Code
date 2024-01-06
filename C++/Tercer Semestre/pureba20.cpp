#include <iostream>
using namespace std;

int main(){
	int arregloA[5][3];
	
	for (int i=0;i<5;i++){
		for(int j=0;j<3;j++){
		cin>>arregloA[i][j];	
		}
	}
	for (int i=0;i<5;i++){
		for(int j=0;j<3;j++){
		cout<<arregloA[i][j]<<"\t";	
		}
		cout<<"\n";
	}
}
