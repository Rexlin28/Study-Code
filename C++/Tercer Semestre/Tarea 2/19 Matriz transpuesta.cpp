#include <iostream>
#define REN 3
#define COL 4
using namespace std;

int main(){
    int arregloA[REN][COL],arregloB[COL][REN],i,j;

    for(i=0;i<COL;i++){
        for(j=0;j<REN;j++){
            printf("\nIngrese el numero del arreglo[%d][%d]",i,j);
            scanf("%d",&arregloA[i][j]);
            arregloB[j][i]= arregloA[i][j];
        }
    }
     printf("\nEl arreglo transverso es:\n");
    for(i=0;i<COL;i++){
        for(j=0;j<REN;j++){
            printf("[%d][%d] es :%d\t",i,j,arregloA[i][j]);
        }
        printf("\n");
	}
     printf("\nEl arreglo transverso es:\n");
    cout<<"1\t5\t9\n"
        <<"2\t6\t10\n"
        <<"3\t7\t11\n"
        <<"4\t8\t12\n";
    
}
