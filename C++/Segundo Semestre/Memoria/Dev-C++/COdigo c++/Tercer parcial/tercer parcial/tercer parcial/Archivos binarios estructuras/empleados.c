#include <stdio.h>
#include <stdlib.h>

#define NOMBRE_ARCHIVO "C:\Users\LC\Desktop\empleados.bin"

typedef struct Persona Persona;
struct Persona
{
char *nombre;
int edad;
double salario;
};

int escribeArchivo(Persona empleados [], int tam, const char *nombreArchivo);
int leeArchivo (Persona empleados [], int tam, const char *nombreArchivo);
void imprimeEmpleados(Persona empleados[], int tam);
void imprimePersona (Persona *persona);
int main (void)
{
Persona empleados[] = { { "Juan", 25, 5000,}, { "Ana", 30, 6000,}, { "Luis", 40, 7000},
{ "Francisco", 50, 8000 } };
const int tam = sizeof(empleados)/sizeof(Persona);
Persona empleadosEntrada[tam];
if (!escribeArchivo(empleados, tam, NOMBRE_ARCHIVO)) {
printf("Error de escritura\n");
return 1;
}
if (!leeArchivo(empleadosEntrada, tam, NOMBRE_ARCHIVO)) {
printf("Error de lectura\n")
return 2;
}
return 0;
}
void escribeArchivo(Persona empleados [], int tam, const char *nombreArchivo)
{
FILE * F;
F = fopen (nombreArchivo, “wb”);
if (F == NULL) {
return 1;
}
int i;
for (i=0; i<tam; ++i)
{
fread (&emlpeados[i], sizeof (Persona), 1, F);
}
fclose (F);
return 0;
}
int leeArchivo (Persona empleados[], int tam, const char *nombreArchivo)
FILE * F;
F = fopen (nombreArchivo, “rb”);
if (F == NULL) {
return 1;
}
int i;
for (i=0; i<tam; ++i)
{
fread (&empleados[i], sizeof (Persona), 1, F);
}
fclose (F);
return 0;
}

void imprimeEmpleados(Persona empleados[], int tam)
{
int i;
for (i=0; i< tam; i++) {
imprimePersona(&empleados[i]);
printf("\n");
}
}

}
void imprimePersona (Persona *persona)
{
printf("Nombre: %s\n", persona->nombre);
printf("Edad: %d\n", persona->edad);
printf("Salario: %lf\n", persona->salario);
}

