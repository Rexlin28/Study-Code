#include <iostream>
using namespace std;

int main(){
    int k=0, arreglo[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arreglo[i][j] = k;
            k++;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            printf("[%d] ",arreglo[i][j]);
        }
        printf("\n");
    }
}