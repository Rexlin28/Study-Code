#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for (int i=0; i<n; i++){
		cout << "meteme ";
		cin >> a[i];
	}
	int multi=1;
	for(int i=0; i<n; i++){
		if (a[i]==0){}
		else{
		multi*=a[i];}
		//buscar el caso de que sea 0 y el que tenga varios 0
	}
	for(int i=0; i<n; i++){
		cout << multi/a[i]<<" ";
	}
		
	return 0;
}

