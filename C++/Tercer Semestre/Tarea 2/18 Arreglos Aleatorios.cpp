#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){
    int arregloA[10];
    float arregloB[10];

    for(int i=0; i<10; i++){
        arregloA[i]=rand()%50 +50;
        arregloB[i]= 0.5*arregloA[i];
    }
    for(int i=0; i<10; i++){
        printf("Arreglo A [%d]: %d \n",i,arregloA[i]);
    }
    for(int i=0; i<10; i++){
        printf("Arreglo B [%d]: %.1f \n",i,arregloB[i]);
    }
}
