#include <iostream>
#include <thread>

using namespace std;

struct MyStruct{
void operator()(){
    cout<<"Estructura creada\n";
}
};

int main(){
    MyStruct _myStruct;
    thread t(_myStruct);
    cout << "main thread\n";
    t.join();

}
