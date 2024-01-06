#include <stdio.h>

struct estructura_alumno{
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	
};
struct estructura_alumno alumno;
	
	void main(){
		printf("Escribe la edad del alumno: ");
		scanf("%d", &(alumno.edad));
		
		printf("Escribe el nombre del alumno: ");
		scanf("%s", alumno.nombre);
		
		printf("Escribe el apellido del alumno: ");
		scanf("%s", alumno.apellido);
		
		printf("Escribe el numero de telefono del alumno: ");
		scanf("%s", alumno.telefono);
		
		printf("El alumno %s %s tiene %d anios y su telefono es: %s", alumno.nombre, alumno.apellido, alumno.edad, alumno.telefono);
		
	}
