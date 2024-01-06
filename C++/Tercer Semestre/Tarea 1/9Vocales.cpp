#include <iostream>
#include <string.h>
#define LONG 20
using namespace std;

int main(){
	int i, caracterA=0, caracterE=0, caracterI=0, caracterO=0, caracterU=0;
	string arreglo[LONG];
	
	printf("\nIndica la cadena: ");
    scanf("%s",arreglo);
    printf("nLa cadena fue: ");
    printf("%s",arreglo);
    
    for(i=0;i<5;i++){
    	switch(arreglo){
    		case (arreglo[i]=='A'||arreglo[i]=='a'){
    			caracterA++;
				break;
			} 
			case (arreglo[i]=="E"||arreglo[i]=="e"){
				caracterE++;
				break;
			}
			case (arreglo[i]=="I"||arreglo[i]=="i"){
				caracterI++;
				break;
			}
			case (arreglo[i]=="O"||arreglo[i]=="o"){
				caracterO++;
				break;
			}
			case (arreglo[i]=="U"||arreglo[i]=="u"){
				caracterU++;
				break;
			}
		}
	}
	
	printf("A= %d \nE=%d \nI=%d \nO=%d \nU=%d",caracterA,caracterE,caracterI,caracterO,caracterU);
}
