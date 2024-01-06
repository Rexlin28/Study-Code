#include <iostream>

using namespace std;

int main()
{
    struct ELista{
        int matricula;
        char nombre[30];
        ELista *sig;
    };
    
    ELista *inicio=NULL, *nodo, *aux;
    int opcion, matricula;
    char nombre[30];
    
    do{
        printf("\nMENU");
        printf("\n1) Insertar un nodo el princio");
        printf("\n2) Insertar un nodo al final");
        printf("\n3) Borrar el primer nodo");
        printf("\n4) Borrar el ultimo nodo");
        printf("\n5) Borrar un nodo intermedio");
        printf("\n6) Borrar la lista");
        printf("\n7 Listar");
        printf("\nIndica una opcion... ");
        scanf("%d",&opcion);
        
        switch(opcion){
            case 1:
                //Paso 1
                nodo=(struct ELista *)malloc(sizeof(ELista));
                
                //Paso 2
                printf("Indica la matricula: ");
                scanf("%d",&matricula);
                nodo->matricula = matricula;
                
                printf("Indica el nombre: ");
                scanf("%s",nodo->nombre);

                //Paso 3
                nodo->sig=inicio;
                
                //Paso 4
                inicio = nodo;

                break;
            case 2:
            
                //Paso 1
                nodo=(struct ELista *)malloc(sizeof(ELista));
                
                //Paso 2
                printf("Indica la matricula: ");
                scanf("%d",&nodo->matricula);
                //nodo->matricula = matricula;
                
                printf("Indica el nombre: ");
                scanf("%s",nodo->nombre);
            
                //Paso 3
                if(inicio==NULL){
                	inicio = nodo;
				}else{
					 aux = inicio;
                while(aux->sig!=NULL){
                    aux=aux->sig;
                }
                
                //Paso 4
                aux->sig = nodo;
                
                //Paso 5
                nodo->sig = NULL;
				}
               
                
                break;
                
            case 3:
            
                //Paso 1
                inicio=inicio->sig;
            
                break;
                
            case 4:
            
                //Paso 1
                aux = inicio;
                while(aux->sig->sig!=NULL){
                    aux = aux->sig;
                }
                
                //Paso 2
                aux->sig = NULL;
                
                break;
                
            case 5:
            
                //Paso 1
                printf("Indica la matricula: ");
                scanf("%d",&matricula);
            
                //Paso 2
                aux=inicio;
                while(aux->sig->matricula!=matricula){
                    aux = aux->sig;
                }
                
                //Paso 3
                if(aux!=NULL){
                    aux->sig = aux->sig->sig;
                }else{
                    printf("\nNodo no encontrado");
                }
            
                break;
            case 6:
            
                //Paso 1
                inicio=NULL;
            
                break;
                
            case 7:
                aux = inicio;
                printf("inicio->");
                while(aux!=NULL){
                    printf("%d-%s->",aux->matricula, aux->nombre);
                    aux=aux->sig;
                }
                printf("NULL");
                
                break;
        }
    }while(opcion!=9);
}
