#include <iostream>
#include <string.h>
#define REN 20
#define COL 6
using namespace std;

int main(){
    int i,j,arregloAsientos[REN][COL],opcion, asientoRenglon,asientoColumnaNumero,acumulador=0,colchon=0,opcionCancelar=0;
    char arregloNombres[120][30],asientoColumna;
    bool flag=false;

    for(i=0;i<REN;i++){
        for(j=0;j<COL;j++){
            arregloAsientos[i][j]= -1;
        }
    }
    for(i=0;i<REN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]: %d",i,j,arregloAsientos[i][j]);
        }
        cout<<"\n";
    }
    do{
        opcion=0;
        cout<<"*******************************\n"
            <<"Seleccione la opcion:\n"
            <<"1) Reservar un asiento.\n"
            <<"2) Cancelar una reservacion.\n"
            <<"3) Consultar reservaciones.\n"
            <<"4) Mostrar asientos disponibles\n"
            <<"5) Salir.\n";
            cin>>opcion;

            switch (opcion){
                case 1:{//Reservar un asiento
                    do{
                        flag=false;
                        printf("Seleccione la columna del asiento (A,B,C,D,E,F)");
                        scanf("%c",asientoColumna);
                        switch(asientoColumna){
                            case('A'):{
                                asientoColumnaNumero=0;
                                flag=true;
                                break;
                            }
                            case('B'):{
                                asientoColumnaNumero=1;
                                flag=true;
                                break;
                            }
                            case ('C'||'c'):{
                                asientoColumnaNumero=2;
                                flag=true;
                                break;
                            }
                            case ('D'):{
                                asientoColumnaNumero=3;
                                flag=true;
                                break;
                            }
                            case ('E'):{
                                asientoColumnaNumero=4;
                                flag=true;
                                break;
                            }
                            case ('F'):{
                                asientoColumnaNumero=5;
                                flag=true;
                                break;
                            }
                            default:{
                                printf("ERROR! Seleccione una opcion valida\n");
                                break;
                            }
                        }
                    }while (!flag);

                    do{
                        flag=false;
                        printf("\nSeleccione la fila del asiento (del 1 al 20)");
                        scanf("%d",&asientoRenglon);
                        if(asientoRenglon>=1 && asientoRenglon<=20){
                            arregloAsientos[asientoRenglon-1][asientoColumnaNumero]=acumulador;
                            printf("\nIntrodusca su nombre: ");
                            scanf("%s",arregloNombres[acumulador]);
                            acumulador++;
                            flag=true;
                        }else{
                            printf("\nERROR! Seleccione una fila valida ");
                        }
                    }while(!flag);
                   
                    break;
                }
                case 2:{//Cancelar una reservacion.
                    do{
                        flag=false;
                        printf("Seleccione la columna del asiento (A,B,C,D,E,F)");
                        scanf("%c",&asientoColumna);
                        switch(asientoColumna){
                            case ('A'):{
                                asientoColumnaNumero=0;
                                flag=true;
                                break;
                            }
                            case ('B'):{
                                asientoColumnaNumero=1;
                                flag=true;
                                break;
                            }
                            case ('C'):{
                                asientoColumnaNumero=2;
                                flag=true;
                                break;
                            }
                            case ('D'):{
                                asientoColumnaNumero=3;
                                flag=true;
                                break;
                            }
                            case ('E'):{
                                asientoColumnaNumero=4;
                                flag=true;
                                break;
                            }
                            case ('F'):{
                                asientoColumnaNumero=5;
                                flag=true;
                                break;
                            }
                            default:{
                                printf("\nERROR! Seleccione una fila valida");
                                break;
                            }
                        }
                    }while (!flag);

                    do{
                        flag=false;
                        printf("\nSeleccione la fila del asiento (del 1 al 20)");
                        scanf("%d",&asientoRenglon);
                        if(asientoRenglon>=1 && asientoRenglon<=20){
                            for(i=0;i<20;i++){
                                for(j=0;j<6;j++){
                                    if(arregloAsientos[asientoRenglon][asientoColumnaNumero]!=-1){
                                        opcionCancelar=0;
                                        colchon=arregloAsientos[asientoRenglon][asientoColumnaNumero];
                                        printf("Estas seguro de cancelar %s? (Y/N)",arregloNombres[colchon]);
                                        scanf("%c",&opcionCancelar);
                                        if(opcionCancelar=='Y'||opcionCancelar=='y'){
                                            *arregloNombres[colchon]= ' ';
                                            arregloAsientos[asientoRenglon][asientoColumnaNumero]= -1;
                                            flag=true;
                                            break;
                                        }else{
                                            flag=true;
                                            break;
                                        }
                                    }
                                }
                            }
                        }else{
                            printf("\nERROR! Seleccione una fila valida");
                        }
                    }while(!flag);

                    break;
                }
                case 3:{//Consultar reservaciones.
                    for(i=0;i<20;i++){
                        for(j=0;j<6;j++){
                            if(arregloAsientos[i][j]!=-1){
                                colchon = arregloAsientos[i][j];
                                printf("%s\n",arregloNombres[colchon]);
                            }
                        }
                    }
                    break;
                }
                case 4:{//Mostrar asientos disponibles
                    printf("A\tB\tC\tD\tE\tF\n");
                    for(i=0;i<20;i++){
                        printf("%d\t",i);
                        for(j=0;j<6;j++){
                            if(arregloAsientos[i][j]!=-1){
                                printf("-\t");
                            }else{
                                printf("O\t");
                            }
                        }
                        printf("\n");
                    }
                    break;
                }
                case 5:{//Salir
                    break;
                }
                default:{
                    printf("ERROR! Seleccione un caracter valido");
                }
            }
    } while (opcion!=5);
}