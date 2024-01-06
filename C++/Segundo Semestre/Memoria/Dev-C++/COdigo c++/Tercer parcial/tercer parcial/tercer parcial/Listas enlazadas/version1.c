#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	struct Nodo* sig;
	};
  
  int main(){
	
	//Creación de tres nodos de la lista enlazada
	struct Nodo* frente = NULL;
	struct Nodo* segundo = NULL;
	struct Nodo* tercero = NULL;
	
	//Reservamos un bloque de memoria para cada nodo
	frente = (struct Nodo*)malloc(sizeof(struct Nodo));
	segundo = (struct Nodo*)malloc(sizeof(struct Nodo));
	tercero = (struct Nodo*)malloc(sizeof(struct Nodo));
	
	//Asignamos valores enteros a cada nodo
	frente->dato = 2;
	segundo->dato = 4;
	tercero->dato = 6;
	
	//Enlazamos los nodos
	frente->sig = segundo;
	segundo->sig = tercero;
	tercero->sig = NULL;
	
	//Imprimimos sus valores en pantalla
	struct Nodo* n = frente;
	while (n != NULL){
		printf("%i\t", n->dato);
		n = n->sig;
		}
  
  //Fin de la función main()
	return 0;
	}
