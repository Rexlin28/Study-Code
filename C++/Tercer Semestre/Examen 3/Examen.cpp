#include <iostream>
#include <stdlib.h>//random()
#include <string.h>
#define TAM 50
using namespace std;

struct ECajas{
    char nombre[50];
    int operation;
    ECajas *sig;
};

struct EEjecutivo{
    char nombre[50];
    int operation;
    EEjecutivo *sig;
};
ECajas *inicioCajas=NULL, *nodoCajas, *auxCajas;
EEjecutivo *inicioEje= NULL, *nodoEje, *auxEje;


int main(){
    int opcion, seleccionador, seleccionadorTramite1, seleccionadorTramite2;
    char nombres[50], nombreTramite[50];
    
    do{
    cout<<"\n******************\n"
        <<"Ingrese una opcion: \n"
        <<"1.- Registro de un Cliente. \n"
        <<"2.- Atencion del Cliente. \n"
        <<"3.- Mostrar personas en una fila. \n"
        <<"4.- Salir\n";
        scanf("%d",&opcion);

        switch(opcion){
            case 1://Registro de un Cliente
                seleccionador = 0;
                printf("\nSeleccione en donde realizara el tramite:\n");
                printf("1) Cajas\n");
                printf("2) Ejecutivo\n");
                
                scanf("%d",&seleccionador);

                if(seleccionador==1){//Cajas
                    seleccionador = 0;
                    nodoCajas = (struct ECajas *)malloc(sizeof(ECajas));
                    printf("\nSeleccione el tramite a Realizar:\n");
                    printf("1) Deposito\n");
                    printf("2) Retiro\n");
                    printf("3) Transferencia\n");
                    printf("4) Cambio de cheque\n");
                    scanf("%d",&seleccionador);

                    if(seleccionador>0 && seleccionador<5){
                        printf("\nIngrese su Nombre: \n");
                        scanf("%s",nodoCajas->nombre);
                        fflush(stdin);
                        nodoCajas->operation =seleccionador;
                        if(inicioCajas==NULL){
                            inicioCajas = nodoCajas;
                        }else{
                            auxCajas = inicioCajas->sig;
                            while(auxCajas->sig!=NULL){
                                auxCajas = auxCajas->sig;
                            }
                            auxCajas->sig = nodoCajas;
                            nodoCajas->sig = NULL;
                        }
                    }else{
                        printf("ERROR! Seleccione una opcion valida\n");
                    }

                }else if(seleccionador==2){//Ejecutivo
                    seleccionador = 0;
                    nodoEje = (struct EEjecutivo *)malloc(sizeof(EEjecutivo));
                    printf("\nSeleccione el tramite a Realizar:\n");
                    printf("1) Impresion del estado de cuenta\n");
                    printf("2) Tramite de Tarjeta de Credito\n");
                    printf("3) Tramite de credito hipotecario o de automovil\n");
                    scanf("%d",&seleccionador);
                    if(seleccionador>0 && seleccionador<5){
                        printf("\nIngrese su Nombre: \n");
                        gets(nodoEje->nombre);
                        nodoEje->operation =seleccionador; 
                        auxEje = inicioEje;
                        while(auxEje->sig!=NULL){
                            auxEje = auxEje->sig;
                        }
                        auxEje->sig = nodoEje;
                        nodoEje->sig = NULL;
                    }else{
                        printf("ERROR! Seleccione una opcion valida\n");
                    }
                }else{
                    printf("Error! Seleccione una opcion valida\n");
                }
                break;

            case 2://Atencion de un Cliente
                seleccionador=0;
                printf("Seleccione en donde realizaras su tramite: ");
                printf("1) Cajas\n");
                printf("2) Ejecutivo\n");
                scanf("%d",&seleccionador);
                
                if(seleccionador== 1){ //Cajas
                    printf("\nHola %s\n",inicioCajas->nombre);
                    switch(inicioCajas->operation){
                        case 1://Deposito
                            printf("\nSeleccione la cuenta a depositar: \n");
                            scanf("%d",&seleccionadorTramite1);
                            printf("\nSeleccione la cantidad a depositar: \n");
                            scanf("%d",&seleccionadorTramite2);
                            printf("\nSe ha depositado %d a la cuenta %d Correctamente %s",seleccionadorTramite1,seleccionadorTramite2,inicioCajas->nombre);
                            break;
                        case 2://Retiro
                            printf("\nSeleccione la cuenta a retirar: \n");
                            scanf("%d",&seleccionadorTramite1);
                            printf("\nSeleccione la cantidad a retirar: \n");
                            scanf("%d",&seleccionadorTramite2);
                            printf("\nSe ha retirado %d a la cuenta %d Correctamente %s",seleccionadorTramite1,seleccionadorTramite2,inicioCajas->nombre);
                            break;
                        case 3://Transferencia
                            printf("\nSeleccione la cuenta a transferir: \n");
                            scanf("%d",&seleccionadorTramite1);
                            printf("\nSeleccione la cantidad a depositar: \n");
                            scanf("%d",&seleccionadorTramite2);
                            printf("\nSe ha depositado %d a la cuenta %d Correctamente %s",seleccionadorTramite1,seleccionadorTramite2,inicioCajas->nombre);
                            break;
                        case 4://Cambio de cheque
                            printf("\nSeleccione la cuenta a depositar: \n");
                            scanf("%d",&seleccionadorTramite1);
                            printf("\nSeleccione la cantidad a depositar: \n");
                            scanf("%d",&seleccionadorTramite2);
                            printf("\nSe ha depositado %d a la cuenta %d Correctamente %s",seleccionadorTramite1,seleccionadorTramite2,inicioCajas->nombre);
                            break;
                    }
                    seleccionador=0;
                    printf("\n¿Su operacion fue Satisfactoria?\n");
                    printf("1) Si\n");
                    printf("2) No\n");
                    scanf("%d",seleccionador);
                    if (seleccionador==2){
                        printf("\nSe le cambiara de fila\n");
                        nodoEje = (struct EEjecutivo *)malloc(sizeof(EEjecutivo));
                        seleccionador=0;

                        printf("\nSeleccione el tramite a Realizar:\n");
                        printf("1) Impresion del estado de cuenta\n");
                        printf("2) Tramite de Tarjeta de Credito\n");
                        printf("3) Tramite de credito hipotecario o de automovil\n");
                        scanf("%d",&seleccionador);
                        if(seleccionador>0 && seleccionador<5){
                            nodoEje->operation =seleccionador;
                            swap(nodoEje->nombre, inicioCajas->nombre);
                            auxEje = inicioEje;
                            while(auxEje->sig!=NULL){
                                auxEje = auxEje->sig;
                            }
                            auxEje->sig = nodoEje;
                            nodoEje->sig = NULL;
                            inicioCajas = inicioCajas->sig;
                        }else{
                            printf("ERROR! Seleccione una opcion valida\n");
                        }
                    }
                }else if(seleccionador == 2){ //Ejecutivo
                    printf("\nHola %s\n",inicioEje->nombre);
                    switch(inicioEje->operation){
                        case 1://Impresion estado de cuenta
                            printf("\nSeleccione la cuenta para su impresion: \n");
                            scanf("%d",&seleccionadorTramite1);
                            printf("\nNumero de Cuenta: %d\tSaldo %d\tPropietario de la cuenta: %s \n",seleccionadorTramite1,rand(),inicioEje->nombre);
                            break;
                        case 2://Tramite de tarjeta de credito
                            printf("\nSe ha creado una tarjeta de credito a nombre de: %s \n",inicioEje->nombre);
                            break;
                        case 3://Tramite de cradito hipotecario o de automovil 
                        printf("\nSeleccione el automovil a hipotecar: \n");
                            scanf("%s",&nombreTramite);
                            printf("\nEl automovil %s se ha hipotecado por %d a nombre de %s \n",nombreTramite,rand(),inicioEje->nombre);
                            break;
                        default:
                            printf("\nNo se Especifico ninguna operacion a realizar\n");
                    }
                    nodoCajas = (struct ECajas *)malloc(sizeof(ECajas));
                    seleccionador = 0;
                    printf("\nSeleccione el tramite a Realizar:\n");
                    printf("1) Deposito\n");
                    printf("2) Retiro\n");
                    printf("3) Transferencia\n");
                    printf("4) Cambio de cheque\n");
                    scanf("%d",&seleccionador);

                    if(seleccionador>0 && seleccionador<5){
                        nodoCajas->operation =seleccionador;
                        swap(nodoCajas->nombre, inicioEje->nombre);
                        auxCajas = inicioCajas;
                        while(auxCajas->sig!=NULL){
                            auxCajas = auxCajas->sig;
                        }
                        auxCajas->sig = nodoCajas;
                        nodoCajas->sig = NULL;
                        inicioEje = inicioEje->sig;
                    }else{
                        printf("ERROR! Seleccione una opcion valida\n");
                    }
                }else{
                    printf("\nERROR! seleccione una opcion valida!\n");
                }
                break;

            case 3://Mostrar las personas de una fila
                seleccionador=0;
                printf("\nSeleccione la fila a mostrar: \n");
                printf("1) Cajas\n");
                printf("2) Ejecutivo\n");
                scanf("%d",&seleccionador);
                if(seleccionador == 1){ //Cajas
                    auxCajas = inicioCajas;
                    while(auxCajas->sig!=NULL){
                        printf("%s -> ",auxCajas->nombre);
                        auxCajas = auxCajas->sig;
                    }
                    printf("***Final de la fila***\n");
                }else if(seleccionador == 2){ //Ejecutivos
                    auxEje = inicioEje;
                    while(auxEje->sig!=NULL){
                        printf("%s -> ",auxEje->nombre);
                        auxEje = auxEje->sig;
                    }
                    printf("***Final de la fila***\n");
                }else{
                    printf("ERROR! Seleccione una opcion valida");
                }
                break;
            case 4://Salir
                break;
            default:
                printf("Seleccione una opcione valida\n");
        }
    }while(opcion!=4);
        
}
