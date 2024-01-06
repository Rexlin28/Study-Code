#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int arreglo[33],acumulador=0;
    for(int i=1;i<=101;i++){
        if(i%3==0){
            arreglo[acumulador]=i;
            acumulador++;
        }
    }
    for(int i=0;i<acumulador;i++){
        printf("El numero %d es: %d\n",i+1,arreglo[i]);
    }
}
