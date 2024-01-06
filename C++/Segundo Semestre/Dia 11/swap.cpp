//	SWAP	//
#include <bits/stdc++.h>
/*template <typename T>
inline T const& Cambiar(T const& a, T const& b){
auto c=a;
a=b;b=c;
}*/
void Cambiar(auto &a, auto &b);

using namespace std;

int main(){
	int a=10, b=25;
	int *c, *d;
	c=new (nothrow)int (a);
	d=new(nothrow) int (b);
	float x=0.5,y=10.7;
	float *m,*n;
		
	Cambiar(c,d);
//	Cambiar(x,y);
	
	cout<<c<<" "<<d<<endl;
	cout<<x<<" "<<y<<endl;
}
void Cambiar(auto &a, auto &b){
int *c=a;
a=b;b=c;
}

