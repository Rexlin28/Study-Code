//Buscar Definicio de arboles matematicos, grafo plano,
#include <iostream>
#include <string>
using namespace std;

int main(){
	int num1,num2,opcion, resultado;
	bool salida=false, validador;
	do{
		opcion=0;
		cout<< "\n##################\n"
			<<"Seleccione una opcion:\n"
			<<"1.- multiplicar.\n"
			<<"2.- factorial\n"
			<<"3.- Salir\n"
			<<"##################\n";
		cin >> opcion;
		
			if(opcion==1){
				cout<<"Seleccione dos numeros \n";
				validador=false; num1=0; num2=0;
				while(!validador){
					cin >> num1 >> num2;
					resultado= num1 * num2;
					if (resultado==0)
						cout << "Seleccione un numero diferente de cero\n";
					else{
						cout << resultado;
						validador=true;
					}
				}
			}
			else if(opcion==2){
				cout<<"Seleccione el numero a factorial ";
				cin >> num1;
				
				if (num1==0){
					resultado= 1;
				}
				else{
						resultado=num1;
					for(int i=0; i<num1; i++){
						num1--;
						resultado *= num1;
					}
					cout<<resultado<<"\n";
				}
			}
			else if(opcion==3){
				salida = true;
			}
			else{
				cout<<"Introduce un numero valido\n";
			}
		
	}while(!salida);
}
