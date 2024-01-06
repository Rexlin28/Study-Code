#include <iostream>

using namespace std;

struct myStruct{
    int x;
    myStruct()(x=5;)
    };
int main(){
    myStruct *pS =new myStruct;
    cout<<pS->x;
    return 0;
    }
