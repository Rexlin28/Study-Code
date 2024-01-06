/**
 *Programa que maneje un arreglo de 10 estudiantes (definir con constantes), de cada estudiante tendremos matricula,
 * nombre, 5 calificaciones (constantes) y promedio.
 * 
 **/

#include <iostream>
#include <string.h>
#define TAM 10
#define CALIF 5
using namespace std;

int main(){
    struct EAlumno{
        int matricula;
        char nombre[50];
        float calificaciones[CALIF];
        float promedio;
    };
    
    EAlumno alumno[TAM];
    int opcion,contador=0, matricula, posicion;
    float suma, promedioMayor;

    do{
        opcion=0;
        cout<<"\n*****************\n"
            <<"Seleccione la opcion:\n"
            <<"1) Alta de un alumno.\n"
            <<"2) Alta de calificiones.\n"
            <<"3) Promedio mas alto.\n"
            <<"4) Salir.\n";
        cin>>opcion;
        switch(opcion){
            case 1:{ //1) Alta de un alumno.
                printf("\nIngrese la matricula del alumno: ");
                scanf("%d",&alumno[contador].matricula);
                printf("\nIngrese el nombre del alumno: ");
                gets(alumno[contador].nombre);
                contador++;
                break;
            }
            case 2:{ //2) Alta de calificiones.
                posicion= -1;
                printf("\nIngrese la matricula del alumno a calificar: ");
                scanf("%d",&matricula);
                for(int i=0;i<contador;i++){
                    if(matricula==alumno[i].matricula){
                        posicion = i;
                        break;
                    }
                }
                if (posicion !=-1){
                    suma=0;
                    for(int j=0; j<CALIF;j++){
                        printf("\nSeleccione la Calificacion %d: ",j+1);
                        scanf("%f",&alumno[posicion].calificaciones[j]);
                        suma+= alumno[posicion].calificaciones[j];
                    }
                    suma = suma/CALIF;
                    alumno[posicion].promedio = suma;
                }else{
                    printf("\n No existe esta matricula.");
                }
                break;
            }
            case 3:{//3) Promedio mas alto.
                if(contador>0);{
                    posicion=0;
                    promedioMayor= alumno[0].promedio;
                    for(int i=0; i<contador; i++){
                        if(promedioMayor<alumno[i].promedio){
                            promedioMayor= alumno[i].promedio;
                            posicion = i;
                        }
                    }
                    printf("\nEl alumno es %s con promedio de %1f ",alumno[posicion].nombre, alumno[posicion].promedio);
                }
                break;
            }
            case 4:{//4) Salir.
                break;
            }
            default:{
                cout<<"ERROR! Ingrese un caracter valido.\n";
            }
        }
    }while(opcion!=4);
}