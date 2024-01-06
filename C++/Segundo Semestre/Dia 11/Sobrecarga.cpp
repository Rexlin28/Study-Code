#include <bits/stdc++.h>

using namespace std;
int maximo(int a, int b);
double maximo(auto a, auto b);
int main(){
	cout<< maximo(3,4)<<" ";
	cout<< maximo(4.5, 3.5);
}

int maximo(int a, int b){
	return (a>b)?a:b;
}
double maximo(auto a, auto b){
	return (a>b)?123:4321;
}
