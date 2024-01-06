#include <stdio.h>
using namespace std;

int main(){
register int i= 10;
int *a =&i;
printf("%d",*a);
getchar();
return 0;
}