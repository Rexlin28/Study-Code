#include <iostream>

int main(){
int *p;
int myArray[10];

for (int i=0; i<10){
    static int valor;
    p = &myArray[i];
    valor+= 10;
    *p= valor;
    cout<<myArray[i]<<enl;
    i++
}
}

