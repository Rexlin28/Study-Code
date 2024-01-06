#include <iostream>
using namespace std;

int main(){
	int numero, i;
	
	printf("Indica el numero: ");
	scanf("%d",&numero);
	
	for(i=1; i<=10; i++){
		printf("%d X %d = %d \n", numero, i, numero*i );
	}
}
