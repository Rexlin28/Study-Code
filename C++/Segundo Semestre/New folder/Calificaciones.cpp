#include <bits/stdc++.h>
using namespace std;

bool isValidInt(string numeroEnCadena);

int main(){
	int a,b,c;
	bool prueba=false;
	

	cout << "Cuantas Calificasiones Capturara?";
	cin  >> a;
	
		try{
		prueba= isValidInt(to_string(a));
		if (prueba=false){
			throw "Error! Favor de usar un numero mayor a 0";
		}
		if (a>100){
			throw 100;
		}
	}catch(int f){
		cerr << "Error! El numero es mayor de 100\n";
	}catch(const char * msg){
		cerr << msg << "\n";
	}
	
	
	int califas[a];
	int *ptr=new int[a];
	
}

bool isValidInt(string numeroEnCadena){
int inicio = 0;
int i=0;
bool valido = true;
bool signo = false;

int tamanioDeCadena = numeroEnCadena.size();

if(tamanioDeCadena == 0)
valido = 0;
if(numeroEnCadena.at(0)=='-' || numeroEnCadena.at(0)=='+'){
inicio=1;
signo = true;
}
if(signo && tamanioDeCadena ==1)
valido = false;

for(i=inicio; valido && i<tamanioDeCadena; i++){
if(!isdigit(numeroEnCadena.at(i)))
valido = false;
}

return valido;
}
