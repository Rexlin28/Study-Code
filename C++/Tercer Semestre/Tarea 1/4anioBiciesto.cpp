#include <iostream>
using namespace std;

int main(){
	int anio;
	
	printf("Ingrese el numero: ");
	scanf("%d",&anio);
	
	if((anio%4==0 && anio%100!=0) || anio%400==0){
		printf("Si es biciesto");
	}else{
		printf("No es biciesto");
	}
}
