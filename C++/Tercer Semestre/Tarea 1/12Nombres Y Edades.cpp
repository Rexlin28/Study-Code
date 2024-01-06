#include <iostream>
#define REN 10
#define COL 20
using namespace std;

int main(){
	char arregloNombres[REN][COL];
	int i,j, arregloEdades[REN], pos, edades;
	
	for(i=0;i<REN;i++){
		printf("Indica la palabra %d: ",i+1);
		gets(arregloNombres[i]);
		//fflush(stdin);
		printf("Indica la edad de %s: ",arregloNombres[i]);
		scanf("%d",&arregloEdades[i]);
	}
	
	for(i=0;i<REN;i++){
		printf("%s tiene %d anios",arregloNombres[i],arregloNombres[i]);
	}
	
	pos=0;
	edades= arregloEdades[0];
	
	for(i=0;i<REN;i++){
		if(arregloEdades[i]>edades){
			edades=arregloEdades[i];
			pos=i;
		}
	}
	printf("La persona mayor es: %s y tiene %d anios",arregloNombres[pos],arregloEdades[pos]);
}
