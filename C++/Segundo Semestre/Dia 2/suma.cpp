#include <stdio.h>

int main(){
	
	int i = 0;
	int x = 2;
	int sum = 0;
	while (i++ < 100){
		sum += x;
	}
	printf("The sum is %d\n", sum);
	return 0;
}