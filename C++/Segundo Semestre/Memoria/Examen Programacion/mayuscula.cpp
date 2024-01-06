#include <string.h>
#include "mayuscula.h"

char mayusculas(char *cadena[]){
	strupr(*cadena);
	
	return *cadena;
}
