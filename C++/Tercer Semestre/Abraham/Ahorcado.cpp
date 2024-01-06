#include <stdio.h>
#include <string.h>
#include <stdlib.h>//System()
using namespace std;

void ahorcado(char *palabra);
int verificadorPalabra(char *palabra, char letra);
void palabraNueva(char **palabra);

const int max = 15, min = 4;
char frase[50], incorrecto[50];


int main(){
    char *palabra;
    
    palabraNueva(&palabra);

    ahorcado(palabra);
    
}

void palabraNueva(char **palabra){
    char palabraVerificador[50];
    bool flag= false;
    while(flag==false){
        printf("Seleccione la palabra: \n");
        scanf("%s",frase);
        fflush(stdin); //Evita el Enter
        if(strlen(frase)<4 || strlen(frase)>15){
            printf("\nERROR! Seleccione una palabra de 4 a 15 letras\n");
        }else{
        	system("cls"); //Limpiar pantalla
            char *palabraFinal = frase;
            *palabra = palabraFinal;
            flag= true;
        }
    }
}

int verificadorPalabra(char *palabra, char letra){
	char temporal[15];
	int resultado = 0;
    for(int i=0; i<(strlen(palabra));i++){
        temporal[i] = palabra[i];
    }
    for(int i=0; i<(strlen(palabra));i++){     //minusculas
        if(temporal[i]  <= 'Z' && temporal[i]>= 'A'){
            temporal[i]= temporal[i] - ('Z' - 'z'); 
        }
    }
	for(int i=0; i<(strlen(palabra)); i++){     //comparar
        if(temporal[i]==letra){
            incorrecto[i]=palabra[i];
            resultado++;
		}
	}
	
    return resultado;
}

void ahorcado(char *palabra){
	char letra;
    int errores=0, correcta=0;
    for(int i=0; i<strlen(palabra); i++){
        incorrecto[i]='_';
    }

	bool verificador = false;
	while(verificador==false){
		printf("Hola jugador, que letra quieres? ");
        scanf("%c",&letra);
        fflush(stdin);//Evita el Enter
        if(verificadorPalabra(palabra, letra)==0){
            errores++;
            for(int i=0; i<errores; i++){
                printf("X");
            }
            printf("\n");
        }else{
        	printf("%s \n",incorrecto);
            correcta+= verificadorPalabra(palabra,letra);
        }
		
        if(errores>= (strlen(palabra)/2)){
            printf("Fin del juego!\nla palabra es:\n%s",palabra);
            verificador = true;
        }

        if(correcta>= (strlen(palabra))){
            printf("FELICIDADES!\n la palabra es:\n%s",palabra);
            verificador = true;
        }
	}
}
