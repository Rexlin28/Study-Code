#include <iostream>
using namespace std;

int main(){
    int arregloNumeros[16], arregloFinal[4][4], i=0, j=0, k=0; //[i][0] - [1][1] - [2][2] - [i][3]
    printf("Seleccione numeros entre 1 al 10\n");
    while(i<16){
        printf("Ingrese el numero %d:\n",i+1);
        scanf("%d",&arregloNumeros[i]);
        if(arregloNumeros[i]<1 || arregloNumeros[i]>10){
            printf("ERROR! Seleccione un numero entre 1 al 10");
        }else{
            i++;
        }
    }
    for(int i=0; i<16; i++){
        if(arregloNumeros[i]%2==0){
            switch(j){ //Arreglo N
                case 0:
                case 1:
                case 2:
                case 3: //[i][0]
                    arregloFinal[j][0] = arregloNumeros[i];
                    j++;
                    break;
                
                case 4: //[1][1]
                    arregloFinal[1][1] = arregloNumeros[i];
                    j++;
                    break;

                case 5: //[2][2]
                    arregloFinal[2][2] = arregloNumeros[i];
                    j++;
                    break;

                case 6:
                case 7:
                case 8:
                case 9: // [i][3]
                    arregloFinal[j-6][3] = arregloNumeros[i];
                    j++;
                    break;
            }
        }else{ //Arreglo "2"
            switch(k){
                case 0: //[0][1]
                    arregloFinal[0][1] = arregloNumeros[i];
                    k++;
                    break;
                case 1: //[2][1]
                    arregloFinal[2][1] = arregloNumeros[i];
                    k++;
                    break;
                case 2: //[3][1]
                    arregloFinal[3][1] = arregloNumeros[i];
                    k++;
                    break;
                case 3: //[0][2]
                    arregloFinal[0][2] = arregloNumeros[i];
                    k++;
                    break;
                case 4: //[1][2]
                    arregloFinal[1][2] = arregloNumeros[i];
                    k++;
                    break;
                case 5: //[3][2]
                    arregloFinal[3][2] = arregloNumeros[i];
                    k++;
                    break;
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            printf("[%d] ",arregloFinal[i][j]);
        }
        printf("\n");
    }
}