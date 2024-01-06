#include <iostream>
#include <windows.h>  
#include <string.h>
#define TAMA 1000
#define TAMV 1000
using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

int main(){
    struct EArticulos{
        int clave;
        char descripcion[50];
        float costo;
        float precio;
        int inventario;
        int cantidadminima;
    };

    struct EVentas{
        int numeroventa;
        char fecha[10];
        int clave;
        int cantidad;
        float precio;
    };
    EArticulos articulos[TAMA];
    EVentas ventas[TAMA];
    int opcion, indicearticulos, indiceventas=0,i,j, clavebus, cantidadbus, posicion, cantidadsutrir;
    float subtotal, iva, total;
    char respuesta;
    int renglon=0, numeroventa=1;

    do{
        system("cls");
        printf("\nMENU DE OPCIONES");
        printf("\n1. Alta de Articulos");
        printf("\n2. Surtir Producto");
        printf("\n3. Consulta de Inventario");
        printf("\n4. Venta");
        printf("\n5. Consulta de una Ventas");
        printf("\n6. Consulta de todas Ventas");
        printf("\n7. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion){
            case 1:{ //Akta de Articulos
                system("cls");
                printf("\nALTA DE ARTICULOS");
                printf("\nIndique la clave del producto: ");
                scanf("%d",&articulos[indicearticulos].clave);
                printf("\nIndique la descripcion del producto: ");
                fflush(stdin);
                gets(articulos[indicearticulos].descripcion);
                printf("\nIndique el costo del producto: ");
                scanf("%f",&articulos[indicearticulos].costo);
                printf("\nIndique el precio del producto: ");
                scanf("%f",&articulos[indicearticulos].precio);
                printf("\nIndique la cantidad en exsitencia del producto: ");
                scanf("%d",&articulos[indicearticulos].inventario);
                printf("\nIndique la cantidad minima deseada del producto: ");
                scanf("%d",&articulos[indicearticulos].cantidadminima);
                indicearticulos++;
                break;
            }
           
            case 2:{ //Surtir Producto
                system("cls");
                printf("\n\nSURTIR INVENTARIO");
                printf("\n\nIndique la clave del producto que desea surtir: ");
                scanf("%d",&clavebus);
                posicion=-1;
                for(i=0;i<indicearticulos;i++){
                    if(clavebus==articulos[i].clave){
                    posicion = i;
                    }
                }
                if(posicion==-1){
                    printf("\n\nClave no encontrada");
                    printf("\n\n\n");
                    Sleep(3000);
                }else{
                    printf("\n\n¿Seguro que desea surtir la cantidad de %s(s/n)?",articulos[posicion].descripcion);
                    fflush(stdin);
                    scanf("%c",&respuesta);
                    if(respuesta=='s'||respuesta=='S'){
                    printf("Indica la cantidad a surtir: ");
                    scanf("%d",&cantidadsutrir);
                    articulos[posicion].inventario += cantidadsutrir;
                    printf("\n\nCANTIDAD SURTIDA EXITOSAMENTE");
                    Sleep(3000);
                    }
                }
                break;
            }
            case 3:{
           
                //Formo el encabezado de la tabla
                system("cls");
                gotoxy(50,5);printf("CONSULTA DE INVENTARIO");
                gotoxy(5,7);printf("CLAVE");
                gotoxy(15,7);printf("DESCRIPCION");
                gotoxy(60,7);printf("COSTO");
                gotoxy(75,7);printf("PRECIO");
                gotoxy(90,7);printf("INVENTARIO");
                gotoxy(105,7);printf("CANT. MINIMA");
                gotoxy(120,7);printf("SURTIR");
                gotoxy(4,8);printf("__________________________________________________________________________________________________________________________");
                        
                //Recorro el arreglo y voy imprimendo cada uno de los registros (articulos)
                for(i=0;i<indicearticulos;i++){
                    gotoxy(5,9+i);printf("%d",articulos[i].clave);
                    gotoxy(15,9+i);printf("%s",articulos[i].descripcion);
                    gotoxy(60,9+i);printf("$%.2f",articulos[i].costo);
                    gotoxy(75,9+i);printf("$%.2f",articulos[i].precio);
                    gotoxy(90,9+i);printf("%d",articulos[i].inventario);
                    gotoxy(105,9+i);printf("%d",articulos[i].cantidadminima);
                    if(articulos[i].inventario<=articulos[i].cantidadminima){
                        gotoxy(120,9+i);printf("***");
                    }
                }
                printf("\n\n\n");
                system("pause");
                break;
            }
            case 4:{
                //Formo el encabezado de la tabla
                system("cls");
                gotoxy(50,5);printf("VENTA NO. %d", numeroventa);
                gotoxy(5,7);printf("CLAVE");
                gotoxy(15,7);printf("DESCRIPCION");
                gotoxy(60,7);printf("CANT.");
                gotoxy(75,7);printf("PRECIO");
                gotoxy(90,7);printf("IMPORTE");

                gotoxy(4,8);printf("_________________________________________________________________________________________________________");

                subtotal = 0;

                do{
                gotoxy(5,9+renglon);
                printf("______");
                gotoxy(5,9+renglon);
                scanf("%d",&clavebus);
                gotoxy(5,9+renglon);
                printf("      ");
                gotoxy(5,9+renglon);
                printf("%d", clavebus);
                posicion=-1;
                if(clavebus!=0){
                    for(i=0;i<indicearticulos;i++){
                            if(clavebus==articulos[i].clave){
                            posicion = i;
                        }
                    }
                    if(posicion==-1){
                    gotoxy(15,9+renglon);
                    printf("ARTICULO NO ENCONTRADO");
                            Sleep(1500);
                            gotoxy(15,9+renglon);
                    printf("                      ");
                    }else{
                        gotoxy(15,9+renglon);
                        printf("%s",articulos[posicion].descripcion);
                        gotoxy(75,9+renglon);
                        printf("%.2f",articulos[posicion].precio);

                        //Pregunto la cantidad
                        do{
                            gotoxy(60,9+renglon);
                            printf("______");
                            gotoxy(60,9+renglon);
                            scanf("%d",&cantidadbus);
                            gotoxy(60,9+renglon);
                            printf("      ");
                            gotoxy(60,9+renglon);
                            printf("%d", cantidadbus);

                            if(cantidadbus>articulos[posicion].inventario){
                                gotoxy(90,9+renglon);
                                printf("CANTIDAD INEXISTENTE");
                                Sleep(1500);
                                gotoxy(90,9+renglon);
                                printf("                      ");
                            }
                        }while(cantidadbus>articulos[posicion].inventario);


                        articulos[posicion].inventario-=cantidadbus;


                        ventas[indiceventas].numeroventa = numeroventa;

                        ventas[indiceventas].clave = clavebus;
                        ventas[indiceventas].cantidad= cantidadbus;

                        ventas[indiceventas].precio = articulos[posicion].precio;



                        indiceventas++;


                        gotoxy(90,9+renglon);
                        printf("%.2f",articulos[posicion].precio*cantidadbus);
                        renglon++;

                        subtotal+=articulos[posicion].precio*cantidadbus;


                    }
                }

                }while(clavebus!=0);



                    gotoxy(75,9+renglon+1);
                    printf("SubTotal: ");

                    gotoxy(90,9+renglon+1);
                    printf("$%.2f", subtotal);

                    gotoxy(75,9+renglon+2);
                    printf("IVA: ");

                    gotoxy(90,9+renglon+2);
                    printf("$%.2f", subtotal*0.16);

                    gotoxy(75,9+renglon+3);
                    printf("Total: ");

                    gotoxy(90,9+renglon+3);
                    printf("$%.2f", subtotal*1.16);

                    numeroventa++;


                    printf("\n\n\n");
                    system("pause");
                break;
            }
            case 5:{ //Consulta de una Ventas
                //Formo el encabezado de la tabla
                system("cls");
                gotoxy(50,5);printf("CONSULTA DE INVENTARIO");
                gotoxy(5,7);printf("CLAVE");
                gotoxy(15,7);printf("DESCRIPCION");
                gotoxy(60,7);printf("COSTO");
                gotoxy(75,7);printf("PRECIO");
                gotoxy(90,7);printf("INVENTARIO");
                gotoxy(105,7);printf("CANT. MINIMA");
                gotoxy(120,7);printf("SURTIR");
                gotoxy(4,8);printf("__________________________________________________________________________________________________________________________");
                renglon=0;
                for(i<0;i<indiceventas; i++){
                    if(ventas[i].numeroventa){

                    }
                }


                break;
            }
            case 6:{ //Consulta de todas Ventas
                //Formo el encabezado de la tabla
                system("cls");
                gotoxy(50,5);printf("CONSULTA DE INVENTARIO");
                gotoxy(5,7);printf("CLAVE");
                gotoxy(15,7);printf("DESCRIPCION");
                gotoxy(60,7);printf("COSTO");
                gotoxy(75,7);printf("PRECIO");
                gotoxy(90,7);printf("INVENTARIO");
                gotoxy(105,7);printf("CANT. MINIMA");
                gotoxy(120,7);printf("SURTIR");
                gotoxy(4,8);printf("__________________________________________________________________________________________________________________________");
                renglon=0;
                /*
                for(i<0;i<indiceventas; i++){
                    if(ventas[i].numeroventa == ventas){

                    }
                }*/
            }
        }
    }while(opcion!=7);
}
