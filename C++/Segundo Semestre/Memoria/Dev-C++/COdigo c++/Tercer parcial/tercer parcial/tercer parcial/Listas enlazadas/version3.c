#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	struct Nodo* sig;
		struct Nodo* ant;
	};
  
  struct Nodo* adicionarNodo(struct Nodo** frente, int info){
  	struct Nodo* resu;
  	if(*frente==NULL){
  		*frente = (struct Nodo*)malloc(sizeof(struct Nodo));
  		(*frente)->dato=info;
  		(*frente)->sig=NULL;
  		(*frente)->ant=NULL;
  		resu=*frente;
  	}
  	else{
  		struct Nodo* ulti;
  		ulti=*frente;
  		while(ulti->sig!=NULL)
  		ulti=ulti->sig;
  		resu = (struct Nodo*)malloc(sizeof(struct Nodo));
  		resu->dato=info;
  		resu->sig=NULL;
  		ulti->sig=resu;
  		resu->ant=ulti;
  	}
  	return resu;
  }
  
  void imprimir(struct Nodo* frente){
  	struct Nodo* n = frente;
	while (n != NULL){
		printf("%i\t", n->dato);
		n = n->sig;
		}
	printf("\n");
	}
	
	void imprimirAlReves(struct Nodo* frente){
  	struct Nodo* p = frente;
  	while(p->sig!=NULL)
  		p=p->sig;
  	while (p != NULL){
		printf("%i\t", p->dato);
		p = p->ant;
		}

	}
		
  int main(){
	
	//Creación de tres nodos de la lista enlazada
	struct Nodo* frente = NULL;
	
	
	adicionarNodo(&frente, 10);
	imprimir(frente);
	adicionarNodo(&frente, 20);
	imprimir(frente);
	adicionarNodo(&frente, 50);	
	imprimir(frente);	
  imprimirAlReves(frente);
  //Fin de la función main()
	return 0;
	}
