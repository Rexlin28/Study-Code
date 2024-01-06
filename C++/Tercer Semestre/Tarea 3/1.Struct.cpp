#include <iostream>
#include <string>
using namespace std;

int main(){
    struct EAlumnos{
        int matricula;
        char nombre[50];
        int edad;
    };

    EAlumnos alu;

    printf("Indica la matricula: ");
    scanf("%d",&alu.matricula);
    printf("Indica el nombre: ");
    gets(alu.nombre);
    printf("Indica la edad: ");
    scanf("%d",&alu.edad);

}