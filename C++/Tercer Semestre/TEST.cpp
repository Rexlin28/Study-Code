#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char asientosColumna[5][30],arregloAsientos[20][6];
    int i, j;
    //asientoColumna[3]=" ";

     for(i=0;i<20;i++){
        for(j=0;j<6;j++){
            arregloAsientos[i][j]= -1;
        }
    }

    for(i=0;i<6;i++){
        for(j=0;j<20;j++){
            printf("[%d][%d]: %d\t",i,j,arregloAsientos[i][j]);
        }
        cout<<"\n";
    }
    
    for(i=0;i<20;i++){
    	printf("%d\t",i);
        for(j=0;j<6;j++){
            if(arregloAsientos[i][j]!=-1){
                printf("-\t");
            }else{
                printf("O\t");
            }
        }
        printf("\n");
    }
}
