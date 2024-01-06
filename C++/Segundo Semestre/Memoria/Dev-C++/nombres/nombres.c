#include<stdio.h>
#include<conio.h>

int longitud (char cade[]);

void main(){
	
	char nombre[40];
	int tama;
	char otronombre[40];
	int tamales;
	printf("Nombre: ");
	scanf("%s", nombre);
	printf("Segundo Nombre: ");
	scanf("%s", otronombre);
	
	tama=longitud(nombre);
	tamales=longitud2(otronombre);
	printf("la longitud del nombre es: %i \n", tama);
	printf("la longitu del otro nombre es: %i \n", tamales);
	
	if(tama>tamales){
		printf("La mas larga es: %s", nombre);
	} 
	else if(tamales>tama){
		printf("La mas larga es: %s", otronombre);	
	}
	else{
		printf("Ambas son de la misma longitud");
	}
	getch();
}


int longitud (char cade[]){
	int resu=0;
		while(cade[resu]!='\0')
		resu++;
		return resu;
	}
int longitud2 (char cade[]){
	int resul=0;
		while(cade[resul]!='\0')
		resul++;
		return resul;
	}
	

