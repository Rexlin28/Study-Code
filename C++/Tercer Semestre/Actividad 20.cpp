#include <iostream>
#define LARGOA 4
#define ALTOA 3
#define LARGOB 2
#define ALTOB 4
using namespace std;

int main(){
    int arregloA[LARGOA][ALTOA], arregloB[LARGOB][ALTOB],arregloC[LARGOB][ALTOA],auxiliar,i,j,k;
    
    //Ingresar el Arreglo A
    for(i=0;i<LARGOA;i++){
        for(j=0;j<ALTOA;j++){
            printf("Ingrese el arreglo A[%d][%d]\n",i+1,j+1);
            scanf("%d",&arregloA[i][j]);
        }
    }
    //Ingresar el Arreglo B
    for(i=0;i<LARGOB; i++){
        for(j=0;j<ALTOB; j++){
            printf("Ingrese el arreglo B[%d][%d]\n",i+1,j+1);
            scanf("%d",&arregloB[i][j]);
        }
    }
    //Multiplicar arreglos AxB
    for(i=0;i<LARGOB;i++){
        for(j=0;j<ALTOA;j++){
            auxiliar=0;
            for(k=0;k<ALTOB;k++){
               auxiliar+= (arregloB[i][k] * arregloA[k][j]);
            }
             arregloC[i][j]=auxiliar;
        }
    }
    printf("\n");
    printf("Arreglo A:");
    printf("\n");
    //Imprimir arreglo A
    for(i=0;i<LARGOA; i++){
        for(j=0;j<ALTOA; j++){
            printf("%d\t",arregloA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Arreglo B:");
    printf("\n");
    //Imprimir arreglo B
    for(i=0;i<LARGOB; i++){
        for(j=0;j<ALTOB; j++){
            printf("%d\t",arregloB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Arreglo C:");
    printf("\n");
    //Imprimir AxB
    for(i=0;i<LARGOB; i++){
        for(j=0;j<ALTOA; j++){
            printf("%d\t",arregloC[i][j]);
        }
        printf("\n");
    }

}
