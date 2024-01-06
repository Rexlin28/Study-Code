#include <thread>
#include <iostream>
#include <vector>
#include <mutex>
using namespace std;

mutex mymutex;
int ac = 0;
void increment(){
	mymutex.lock();   //lock_guard<mutex> guard(mymutex);
    ac=ac+1;
    std::cout << ac << std::endl;
    mymutex.unlock();
}
int main(){
    std::vector<std::thread> threads;
    for(int i = 0; i < 107; ++i){
        threads.push_back(std::thread(increment));
    }

    for(auto& thread : threads){
        thread.join();
    }
    return 0;
}
