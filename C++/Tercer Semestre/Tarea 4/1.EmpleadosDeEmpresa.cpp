#include <iostream>
#define TAM 100;
using namespace std;

int main(){
    struct EEmpleados{
        int idEmpleados;
        char nombre[30];
        char puesto[30];
        float sueldo;
        int dias;
        int antiguedad;
        float sueldoIntegrado;
    };
    EEmpleados empleados[TAM];
      
}