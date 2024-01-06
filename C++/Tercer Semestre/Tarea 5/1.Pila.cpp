#include <iostream>
#define TAM 5
using namespace std;

struct EAlumnos{
    int matricula;
    char nombre[50];
};

EAlumnos pila[TAM];
int indice;

void push(EAlumnos);
EAlumnos pop(void);
int pilallena(void);
int pilavacia(void);
void listarpila(void);

int main(){
    int opcion;
    EAlumnos valor;

    do{
        opcion=0;
        cout<<"\n*****************\n"
            <<"Seleccione la opcion:\n"
            <<"1) Ingresar dato de la pila.\n"
            <<"2) Sacar dato de la pila.\n"
            <<"3) Listar pila.\n"
            <<"4) Salir.\n";
        cin>>opcion;

        switch(opcion){
            case 1://ingresar dato a la pila
                if(pilallena()==0){
                    EAlumnos valor;
                    printf("indica la matricula: ");
                    scanf("%d", &valor.matricula);
                    printf("Indica el nombre: ");
                    scanf("%s",valor.nombre);
                    push(valor);
                }else{
                    printf("\n La pila esta llena");
                }
                break;
            case 2: //Sacar dato de la pila
                if(pilavacia()==0){
                    valor= pop();
                }else{
                    printf("\n La pila esta vacia");
                }
                break;
            case 3:
                listarpila();
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;
        }
    }while(opcion!=4);
    
}

void push(EAlumnos dato){
    pila[indice]=dato;
    indice++;
}
EAlumnos pop(void){
    indice--;
    return pila[indice];
}
int pilallena(void){
    if (indice== TAM){
        return 1;
    }else{
        return 0;
    }
}
int pilavacia(void){
    if (indice== 0){
        return 1;
    }else{
        return 0;
    }
}
void listarpila(void){
    for(int i=0; i<indice; i++){
        printf("\n%d - %s",pila[i].matricula,pila[i].nombre);
    }
}

//TAREA LEER NOTACION POSTORDEN
