#include <bits/stdc++.h>

using namespace std;



struct Complejo{
	int real, imag;	
	Complejo(int r, int i){
		real=r; imag=i;
	}
		Complejo operator + (Complejo const &obj){
		Complejo res(0,0);
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}	
		Complejo operator - (Complejo const &obj){
			Complejo res(0,0);
			res.real = real - obj.real;
			res.imag = imag - obj.imag;
			return res;
		}
	void imprimir(){
	if (imag<0)
		cout << real <<imag<<"i";
	
	else
		cout << real <<"+"<<imag<<"i";
}
};



int main(){
Complejo a(2,2);
Complejo b(3,4);
Complejo c = a-b;
c.imprimir();

}
