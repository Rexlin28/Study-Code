#include <iostream>

using namespace std;


struct myStruct{
    int x;
    myStruct(){x=5;}
}pS;
int main(){
auto myS = new auto (pS);
cout <<myS->x;

}
