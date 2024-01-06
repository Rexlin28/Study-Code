#include <iostream>
#include <string.h>
#include <windows.h>
#define CLIENTES 10
#define ARTICULOS 5
using namespace std;

struct ECliente{
        int id;
        char nombre[50];
        char direccion[100];
        char tipo;
    };

struct ECompra{
        int id;
        float articulos[ARTICULOS];
        float subTotal;
        float descuento;
        float total;
    };

int secuencialSearch(int var, ECliente clientes[]){
    int posicion= -1;
    for(int i=0; i<CLIENTES; i++){
        if(var == clientes[i].id){
            posicion == i;
            break;
        }
    }
    return posicion;
}
int secuencialSearch(int var, ECompra clientes[]){
    int posicion = -1;
    for(int i=0; i<CLIENTES; i++){
        if(var == clientes[i].id){
            posicion == i;
            break;
        }
    }
    return posicion;
}

int main(){
    ECompra compras[CLIENTES];
    ECliente clientes[CLIENTES];
	int opcion,contadorCliente=0,contadorArticulo=0, numeroCliente;
    bool flag = false;
    do{
        cout<<"**********************************"<<endl
            <<"1)Alta de Cliente."<<endl
            <<"2)Captura de Compra."<<endl
            <<"3)Consulta de Compras por Cliente."<<endl
            <<"4)Consulta Total de Compras."<<endl 
            <<"5)Salir."<<endl;
        scanf("%d", &opcion);

        system("cls");
        switch(opcion){
            case 1:{//1)Alta de Cliente.
                numeroCliente=-1;
                printf("Seleccione el Numero del Cliente.");
                scanf("%d",&numeroCliente);
                if(secuencialSearch(numeroCliente, clientes) != -1){
                    break;
                }
                clientes[contadorCliente].id= numeroCliente;

                printf("Seleccione el Nombre del Cliente.");
                fflush(stdin);
                gets(clientes[contadorCliente].nombre);

                printf("Seleccione la Direccion del Cliente.");
                fflush(stdin);
                gets(clientes[contadorCliente].direccion);
                
                do{
                    printf("Seleccione el Tipo de Cliente.");
                    scanf("%c",&clientes[contadorCliente].tipo);
                    switch(clientes[contadorCliente].tipo){
                        case 'N':
                        case 'F':
                        case 'E':
                            flag = true;
                            break;
                        default:
                            printf("\nERROR! Seleccione un Tipo de Cliente valido\n");
                    }
                }while(!flag);
                
                system("cls");
                contadorCliente++;
                break;
            }
            case 2:{//2)Captura de Compra."
                numeroCliente=-1;
                compras[contadorArticulo].subTotal=0;
                compras[contadorArticulo].total=0;

                printf("Seleccione el Numero del Cliente\n");
                scanf("%d",&numeroCliente);
                if(secuencialSearch(numeroCliente, clientes)== -1){
                    printf("ERROR! Numero De Cliente Invalido\n");
                    break;
                }
                compras[contadorArticulo].id= numeroCliente;

                for(int i=0; i<ARTICULOS; i++){
                    printf("Seleccione el precio del articulo %d",i);
                    scanf("%d",&compras[contadorArticulo].articulos[i]);
                    if(compras[contadorArticulo].articulos[i]==0){
                        break;
                    }
                    compras[contadorArticulo].subTotal+= compras[contadorArticulo].articulos[i];
                }
                    numeroCliente = secuencialSearch(compras[contadorArticulo].id, clientes);
                    switch(clientes[numeroCliente].tipo){
                        case 'N':{
                            break;
                        }
                        case 'F':{
                            compras[contadorArticulo].total= compras[contadorArticulo].subTotal * .95;
                            break;
                        }
                        case 'E':{
                            compras[contadorArticulo].total= compras[contadorArticulo].subTotal * .90;
                            break;
                        }
                        default:{
                            printf("ERROR!");
                            break;
                        }
                    }
                system("cls");
                contadorArticulo++;
                break;
            }
            case 3:{//3)Consulta de Compras por Cliente.
                numeroCliente = -1;
                printf("Seleccione el Numero de Cliente: \n");
                scanf("%d", &numeroCliente);
                if(secuencialSearch(numeroCliente,clientes)== -1){
                    printf("ERROR! Numero de Cliente invalido");
                    break;
                }
                numeroCliente = secuencialSearch(numeroCliente,clientes);
                printf("Nombre: %s \tNumero de Cliente: %d\n",clientes[numeroCliente].nombre,clientes[numeroCliente].id);
                numeroCliente = secuencialSearch(clientes[numeroCliente].id,compras);
                if(numeroCliente == -1){
                    printf("No ha comprado aun\n");
                    break;
                }

                flag = false;
                for(int j=0; j<ARTICULOS; j++){
                        if(compras[numeroCliente].articulos[j]==0){
                            flag = true;
                            break;
                        }
                        if(!flag){
                            printf("\nSubtotal: %2f\n", compras[numeroCliente].subTotal);
                            printf("Total: %2f", compras[numeroCliente].total);  
                        }
                        printf("Articulo %d: %2f\t",j, compras[numeroCliente].articulos[j]);
                    }
                break;
            }
            case 4:{//4)Consulta Total de Compras.
                numeroCliente=-1;

                printf("COMPRAS POR CLIENTE:\n");
                for(int i=0;i< contadorCliente; i++){
                    flag=false;
                    printf("Nombre: %s \tNumero de Cliente: %d\n",clientes[i].nombre,clientes[i].id);
                    numeroCliente= secuencialSearch(clientes[i].id, compras);
                    if(numeroCliente== -1){
                        printf("No ha comprado aun\n");
                        flag = true;
                        break;
                    }
                    for(int j=0; j<ARTICULOS; j++){
                        if(compras[numeroCliente].articulos[j]==0){
                            flag = true;
                            break;
                        }
                        printf("Articulo %d: %2f\t",j, compras[numeroCliente].articulos[j]);
                    }
                    if(!flag){
                        printf("\nSubtotal: %2f\n", compras[numeroCliente].subTotal);
                        printf("Total: %2f", compras[numeroCliente].total);
                    }
                    printf("\n******************\n");
                }
                break;
            }
            case 5:{//5)Salir
                break;
            }
            default:{
                printf("Seleccione una opcion correcta.\n");
                break;
            }
        }
    }while(opcion!=5);
    

}
