#include <bits/stdc++.h>
using namespace std;

struct Frac{
	int nume, deno;
	Frac (int n, int d){
		nume = n; deno = d;
	}
	Frac operator + (Frac const &obj){
		Frac res(0,0);
		if (deno == obj.deno){
			res.nume= nume + obj.nume;
			res.deno= deno;
			}
		else{
		
			res.nume= (nume * obj.deno)+(deno * obj.nume);
			res.deno = deno * obj.deno;
			}
		return res;
	}
	
	Frac operator - (Frac const &obj){
		Frac res(0,0);
		if (deno == obj.deno){
			res.nume = nume - obj.nume;
			res.deno = deno - obj.deno;
		}
		else{
			res.nume = (nume * obj.deno)-(deno * obj.nume);
			res.deno = deno * obj.deno;
			}
		return res;
	}
	
	Frac operator / (Frac const &obj){
		Frac res(0,0);
		res.nume = nume * obj.deno;
		res.deno = deno * obj.nume;
		return res;
	}
	
	Frac operator * (Frac const &obj){
		Frac res(0,0);
		res.nume = nume + obj.nume;
		res.deno = deno + obj.deno;
		return res;
	}
	
	void imprimir(){
		cout << nume <<"/"<<deno<<endl;
		
}
	friend std::istream& operator >> (std::istream &is,Frac &obj){
	
	 is>>obj.nume>>obj.deno;
        return is;
    }
    	friend std::ostream& operator << (std::ostream &is, Frac &obj){
    		if(obj.deno == 0){
    		is<<"Syntaxis Error"<<endl;
			}
			else{			
				is<<obj.nume<<"/"<<obj.deno<<endl;
			}	
		return is;
			
	}
};

int main(){
	Frac a(2,3), b(4,5);
	Frac c= a+b;
	Frac d= a-b;
	Frac e= a/b;
	Frac f= a*b;
	
	cout << c << d << e <<f;
}
