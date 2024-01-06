#include <bits/stdc++.h>

using namespace std;
void Cachar(int a, int b, int c);
int Sumar(int a, int b);
int Resta(int a, int b);
int Multiplicar(int a, int b);
int Dividir(int a, int b);
int main(){
	cout<<"**********************"<<endl;
	cout<<"*** 1.- Sumar  *******"<<endl;
	cout<<"*** 2.- Restar *******"<<endl;
	cout<<"*** 3.- Dividir ******"<<endl;
	cout<<"*** 4.- Multiplicar **"<<endl;
	cout<<"**********************"<<endl;
	int n,b,c,*m,*g;
	cin>>n;
	cin>>b;
	cin>>c;
//	Cachar(n,b,Sumar);
//	m=&Sumar;
//	g=&Restar;
	cout<<m<<" "<<g<<endl;
}
void Cachar(int a, int b, int &yoquese){
	cout<<&Sumar<<endl;
	cout<< yoquese;
}
int Sumar(int a, int b){
	int c;
	c= a+b;
	return c;
		
}
int Resta(int a, int b){
	int c;
	c= a-b;
	return c;
		
}
int Multiplicar(int a, int b){
	int c;
	c= a-b;
	return c;
}
int Dividir(int a, int b){
	int c;
	c= a-b;
	return c;
}
