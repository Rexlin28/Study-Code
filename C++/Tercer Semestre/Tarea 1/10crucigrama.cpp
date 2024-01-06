#include <iostream>
#include <string.h>
#define LONG 20
using namespace std;

int main(){
	int i,j;
	bool flag;
	char arregloLetras[LONG],arregloFrase[LONG];
	
	printf("Indica las letras validas: ");
	gets(arregloLetras);
	
	printf("\nIndica la palabra a validar: ");
	gets(arregloFrase);


	for(i=0;i<strlen(arregloFrase);i++){
		flag=false;
		
		for(j=0;j<strlen(arregloLetras);j++){
			if(arregloLetras[j]==arregloFrase[i]){
				flag= true;
				arregloLetras[j]= ' '; 
				break;
			}
		}
		
		if(!flag){
			break;
		}
	}
	
	if(flag){
		printf("La frase es valida");
	}else{
		printf("La frase es invalida");
	}
}
