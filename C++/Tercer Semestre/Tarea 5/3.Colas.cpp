#include <iostream>
#define TAM 5
using namespace std;

struct EAlumnos{
    int matricula;
    char nombre[50];
};

EAlumnos cola[TAM];
int indice;

void push(EAlumnos);
EAlumnos pop(void);
int colallena(void);
int colavacia(void);
void listarcola(void);

int main(){
    int opcion;
    EAlumnos valor;

    do{
        opcion=0;
        cout<<"\n*****************\n"
            <<"Seleccione la opcion:\n"
            <<"1) Ingresar dato de la cola.\n"
            <<"2) Sacar dato de la cola.\n"
            <<"3) Listar cola.\n"
            <<"4) Salir.\n";
        cin>>opcion;

        switch(opcion){
            case 1://ingresar dato a la cola
                if(colallena()==0){
                    EAlumnos valor;
                    printf("indica la matricula: ");
                    scanf("%d", &valor.matricula);
                    printf("Indica el nombre: ");
                    scanf("%s",valor.nombre);
                    push(valor);
                }else{
                    printf("\n La cola esta llena");
                }
                break;
            case 2: //Sacar dato de la cola
                if(colavacia()==0){
                    valor= pop();
                }else{
                    printf("\n La cola esta vacia");
                }
                break;
            case 3:
                listarcola();
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
    cola[indice]=dato;
    indice++;
}
EAlumnos pop(void){
    EAlumnos temp = cola[0];
    for(int i=0; i<TAM; i++){
        cola[i-1]= cola[i];
    }
    return temp;
}
int colallena(void){
    if (indice== TAM){
        return 1;
    }else{
        return 0;
    }
}
int colavacia(void){
    if (indice== 0){
        return 1;
    }else{
        return 0;
    }
}
void listarcola(void){
    for(int i=0; i<indice; i++){
        printf("\n%d - %s",cola[i].matricula,cola[i].nombre);
    }
}

//TAREA INVESTIGAR COLAS CIRCULARES (TAREA 2);
