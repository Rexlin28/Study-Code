#include <iostream>
#include <string>
using namespace std;

void swap(char **a, char **b){
	char *c = *a;
	//cout<<a<<b<<endl;
	*a=*b;
	*b=c;
	//cout<<a<<b<<endl;
}

int main(){
	//char a[]= {"123"};
	char b[]= {"23asd4"};
	char *pointer= NULL;
	char *pointer2 = b;
	printf("%s %s\n",pointer,pointer2);
	//cout << pointer<< "+"<< pointer2<<endl;
	
	swap(&pointer, &pointer2);
	printf("%s %s",pointer,pointer2);
	//cout << pointer<< "+"<< pointer2;
}
