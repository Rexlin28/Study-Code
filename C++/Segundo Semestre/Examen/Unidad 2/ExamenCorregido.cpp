#include<iostream>
using namespace std;
/**
Estructuras de datos
**/
struct Terreno{
	float largo ,ancho;

	Terreno(){
		largo = 0.0;
		ancho = 0.0;

	}
};

struct Casa{
	int largo,ancho;
	short int modelo;
	Casa(){
		largo = 0;
		ancho = 0;
		modelo = 1;
	}
};
/**
Prototipos de procedimientos o funciones
**/
void displayMenu();
int readAmount();
void capturaTerrenos(Terreno *ptr, int n);
void listarTerrenos(Terreno *ptr, int n);
void capturaCasas(Casa *ptr, int n);
void listarCasas(Casa *ptr, int n);

template <class muebles>
int buscarInMueble(muebles *ptr, int n){
    int verificador, contador=0;
    for (int i=0; i<n; i++){
        verificador=(ptr[i].largo)*(ptr[i].ancho);
        if (verificador>300){
            contador++;
        }
    }
    return contador;
}


/**
Main
**/
int main(){
	
	cout<<"Oscar Ariel Quintana Merino"<<endl<<"338942"<<endl;
	
    int op=0, numTerrenos=0,numCasas=0,cant=0;
    Terreno* ApuntadorTerrenos=nullptr;
    Casa* ApuntadorCasas=nullptr;
  /*  void* ApuntadorFuncionesTerrenos[2]()=new(nothrow) int[2];
        if (ApuntadorTerrenos==NULL){
            cout <<"Error: out of memory." <<endl;
            exit(1);
        }*/
    void (*ApuntadorFuncionesTerrenos[2])(Terreno *,int)={capturaTerrenos,listarTerrenos};
    /*void* ApuntadorFuncionesCasas=new(nothrow) int[2];
        if (ApuntadorTerrenos==NULL){
            cout <<"Error: out of memory." <<endl;
            exit(1);
            }*/
    void (*ApuntadorFuncionesCasas[2])(Casa *,int)={capturaCasas,listarCasas};
    do{
        displayMenu();
        cin>>op;
        switch(op){
        case 1:
            numTerrenos = readAmount();
            ApuntadorTerrenos=new(nothrow) Terreno[numTerrenos];
            if (ApuntadorTerrenos==NULL){
                cout <<"Error: out of memory." <<endl;
                exit(1);
            }
            (*ApuntadorFuncionesTerrenos[0])(ApuntadorTerrenos,numTerrenos);
            break;
        case 2:
            if(ApuntadorTerrenos==NULL){
                cout<<"Primero deberá capturar los Terrenos.";
            }else
                (*ApuntadorFuncionesTerrenos[1])(ApuntadorTerrenos,numTerrenos);
            break;
        case 3:
            numCasas = readAmount();
            ApuntadorCasas=new(nothrow) Casa[numTerrenos];
                if (ApuntadorCasas==NULL){
                    cout <<"Error: out of memory." <<endl;
                    exit(1);
                }
            (*ApuntadorFuncionesCasas[0])(ApuntadorCasas,numTerrenos);
            break;
        case 4:
            if(ApuntadorCasas==NULL){
                cout<<"Primero deberá capturar las casas.";
            }else
                (*ApuntadorFuncionesCasas[1])(ApuntadorCasas,numTerrenos); 
            break;
        case 5:
            cant=buscarInMueble(ApuntadorTerrenos,numTerrenos);
            cant+=buscarInMueble(ApuntadorCasas,numCasas);
            cout<<"Numero de inmuebles de mas de 300 mts cuadrados: "<<cant<<endl<<endl;
            break;
        case 6:
            break;
        default:
            cout<<"Opcion invalida, seleccione del 1 al 6"<<endl;
            break;
        }


	}while(op!=6);

    //******DELETE DE APUNTADORES******
    if(ApuntadorFuncionesTerrenos!=NULL){
        delete [] ApuntadorFuncionesTerrenos;
    }
    if(ApuntadorFuncionesCasas!=NULL){
        delete [] ApuntadorFuncionesTerrenos;
    }
    if(ApuntadorTerrenos!=NULL){
        delete [] ApuntadorFuncionesTerrenos;
    }
    if(ApuntadorCasas!=NULL){
        delete [] ApuntadorFuncionesTerrenos;
    }


}

/**
Implementaci�n de funciones
**/
void displayMenu(){
    cout<<"Seleccione una opcion:"<<endl
            <<"1) Capturar terrenos"<<endl
            <<"2) Listar terrenos"<<endl
            <<"3) Capturar casas"<<endl
            <<"4) Listar casas"<<endl
            <<"5) Buscar inmueble mayor a 300 mts cuadrados"<<endl
            <<"6) Salir"<<endl;
}
int readAmount(){
    int amount=0;
    do{
        cout<<"Indique cuantos inmuebles va a capturar:";
        cin>>amount;
    }while(amount<0);
    return amount;
}
void capturaTerrenos(Terreno *ptr, int n){
	 int amount=n,i=0;
    for(int i=0; i<amount; i++){
	cout <<"Terreno "<<(i+1)<<endl;
	cout <<"Largo: ";
	cin >>ptr[i].largo;
	cout <<"Ancho: ";
	cin >>ptr[i].ancho;
	cout <<endl;
    }
}
void listarTerrenos(Terreno *ptr, int n){
    int amount=n, i=0;
    for (int i=0; i<amount; i++){
        	cout <<"Terreno "<<(i+1)<<endl;
            cout <<"Largo: "<<ptr->largo<<endl;
            cout <<"Ancho: "<<ptr->ancho<<endl;
            cout <<endl;
    }
}
void capturaCasas(Casa *ptr, int n){
    int amount=n,i=0;
    for (int i=0; i<amount; i++){
	cout <<"Casa "<<(i+1)<<endl;
	cout <<"Largo: ";
    /*Duda: ¿no era con -> en vez de . ? */ 
	cin >>ptr[i].modelo;
	cout <<endl<<"Ancho: ";
	cin >>ptr[i].ancho;
	cout<<endl<<"Modelo: ";
	cin >>ptr[i].modelo;
	cout <<endl;
    }
}
void listarCasas(Casa *ptr, int n){
    int amount=n, i=0;
    for(int i=0; i<amount; i++){
        	cout <<"Casa "<<(i+1)<<endl;
            cout <<"Largo: "<<ptr[i].largo<<endl;
            cout <<"Ancho: "<<ptr[i].ancho<<endl;
            cout <<"Modelo: "<<ptr[i].modelo<<endl;
            cout <<endl;
    }
}


