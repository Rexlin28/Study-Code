#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0,k=0,aux=0,var=0;
	cin>> n;
	int arr[n];
	cin >> k;
	k=k-1;
	int a=k;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	for( int i=0; i<=k; i++){
		aux+=arr[i];
	}

	for(int i=0; i<(n-k); i++){

		if(var<aux){
			var=aux;
		}
		aux-=arr[i];
		aux+=arr[(i+k+1)];
		}
	cout << var;
	}
