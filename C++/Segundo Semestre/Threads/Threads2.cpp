#include <thread>
#include <iostream>
using namespace std;

static const int num_threads= 10;

void call_from_thread(int x){
	cout << " Inside Thread "<<x<<endl;
}

int main(){
	thread t[num_threads];
	
	for(int i=0; i< num_threads; ++i){
		t[i]=thread(call_from_thread,i);
	}
	cout <<"Launched from the main\n";
	
	for(int i=0; i<num_threads; ++i){
		t[i].join();
	}
	return 0;
}
