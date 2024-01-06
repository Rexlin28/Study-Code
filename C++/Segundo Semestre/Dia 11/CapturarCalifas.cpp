#include <bits/stdc++.h>

using namespace std;
void CapturaCalif(int (&a)[10]);
int main(){
	int *a[100];
	
	CapturaCalif(&a[0]);
	for (int i=0;i<2; i++)
	{
		cout<<a[i]<<endl;
	}
}
void CapturaCalif(int *(&a)){
	int b,*c;
	c=&a;
	for (int i=0; i<2; i++){
	
	cin >> b;
	c[i]=b; }
}
