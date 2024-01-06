#include <iostream>

using namespace std;

int main(){
int *p;
int myArray[10],valor=0;
for (int i=0; i<10;i++){
    p = &myArray[i];
    valor+= 10;
    *p= valor;
    cout<<myArray[i]<<endl;

}
}
