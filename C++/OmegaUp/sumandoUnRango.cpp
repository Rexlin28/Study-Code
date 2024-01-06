#include <iostream>
using namespace std;

int main(){
	int numA, numB, res;
	cin >>numA >> numB;
	res = numA;
	while(numA!=numB){
		numA++;
		res+= numA;
	}
	cout << res;
}