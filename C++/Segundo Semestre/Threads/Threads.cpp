#include <thread>
#include <iostream>
using namespace std;

void func(int x){
	cout << " Inside Thread "<<x<<endl;
}

int main(){
	thread th(&func, 100);
	th.join();
	cout << "Outside Thread"<<endl;
	return 0;
}
