#include <stdbool.h>
#include "misfunciones.h"

bool esValido(float a, float b, float c){
		return a+b>c && a+c>b && b+c>a;
	}
	
bool esEquilatero(float a, float b, float c){
		return a==b && b==c;
	}
	
bool esIsoseles(float a, float b, float c){
		return (a==b && a!=c) || 
				(a==c && a!=b) ||
				(c==b && c!=a);
	}

