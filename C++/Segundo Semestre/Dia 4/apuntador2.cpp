#include <iostream>

using namespace std;

int main(){
int x[3]={30,15,2};
int *p,*q;
p=x;
int y=0;
//cout<<(*p)++<<endl;
//cout<<*p<<endl;
cout<<*p++<<endl;
cout<<*p<<endl;
*p++ = *q++; *p=*q; ++p; ++q;

}
