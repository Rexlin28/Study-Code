#include <iostream>
using namespace std;

struct ELista{
    int matricula;
    char nombre[50];
    ELista *sig;
};


int main(){
    int opcion,matricula;
    ELista *inicio= NULL, *nombre,*aux,*nodo;
    do{
        opcion=0;
        cout<<"\n*****************\n"
            <<"Seleccione la opcion:\n"
            <<"1) Insertar un nodo al inicio de la lista.\n"
            <<"2) Insertar un nodo al final de la lista.\n"
            <<"3) Borrar el primer nodo.\n"
            <<"4) Borrar el ultimo nodo.\n"
            <<"5)Borrar un nodo intermedio.\n"
            <<"6)Borrar la lista\n"
            <<"7) Listar\n"
            <<"8) Salir.\n";
        cin>>opcion;

        switch(opcion){
            case 1://Insertar un nodo al inicio de la lista
                //Paso 1
                ELista *nodo = (struct ELista *)malloc(sizeof(ELista));
                printf("\nIndica la matricula\n");
                scanf("%d",&matricula);
                nodo->matricula = matricula;
                //Paso 2
                printf("\nIndica el nombre\n");
                scanf("%s",nodo->nombre);
                //Paso 3
                nodo->sig=inicio;
                //Paso 4
                inicio = nodo;
                break;

            case 2://Insertar un nodo al final de la lista.
                //Paso 1
                ELista *nodo = (struct ELista *)malloc(sizeof(ELista));
                printf("\nIndica la matricula\n");
                scanf("%d",&matricula);
                nodo->matricula = matricula;
                //Paso 2
                printf("\nIndica el nombre\n");
                scanf("%s",nodo->nombre);
                //Paso 3
                while(aux->sig!=NULL){
                    aux=aux->sig;
                }
                //Paso 4
                aux->sig=nodo;
                //Paso 5
                nodo->sig=NULL;
                break;
            case 3://Borrar el primer nodo.
                //Paso 1
                inicio=inicio->sig;
                break;
            case 4://Borrar el ultimo nodo.
                aux = inicio;
                while(aux->sig->sig!=NULL){
                    aux= aux->sig;
                }

                aux=aux->sig;
                break;
            case 5://Borrar un nodo intermedio.
                aux=inicio;
                printf("\n Que matricula quieres borrar\n");
                scanf("%d",&matricula);
                //Paso 2
                while(aux->sig->matricula!=matricula){
                    aux=aux->sig;
                }
                if(aux!=NULL){
                    aux->sig=aux->sig->sig;
                }
                break;
            case 6://Borrar la lista
                inicio=NULL;
                break;

            case 7://Listar
                aux = inicio;
                while(aux!=NULL){
                    printf("%d->%s\n",aux->matricula, aux->nombre);
                    aux= aux->sig;
                }
                printf("NULL");
                break;
            default:
                break;
        }
    }while(opcion!=8);
}