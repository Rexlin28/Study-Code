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
	for(int i=0; i<(k+1); i++){
	aux+=arr[i];
	if (var < aux){
		var= aux;
	}
	
	if (i==k){
		i=i-a;
		k++;
		aux=0;
	}
	if(n<k){
		k=0;
	}
		
		
	}

cout << var;
}


