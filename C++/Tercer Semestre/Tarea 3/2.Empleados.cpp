#include <iostream>
#include <string.h>
#define TAM 5
using namespace std; 

int main(){
    struct EEmpleado{
        int numEmpleado;
        char nombre[50];
        double sueldo;
    };

    EEmpleado mecanico[TAM];
    for(int i=0; i<TAM; i++){
        printf("Indica el numero del empleado\n");
        scanf("%d",&mecanico[i].numEmpleado);
        printf("Indica el nombre del empleado\n");
        gets(mecanico[i].nombre);
        printf("Indica el sueldo del empleado\n");
        scanf("lf",&mecanico[i].sueldo);
    }

    for(int i=0;i<TAM;i++){
        printf("Numero de Empleado: %d\nNombre: %s\nSueldo: %2f",mecanico->numEmpleado,mecanico->nombre,mecanico->sueldo);
    }
    
}
