#include <iostream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define LONG 10
using namespace std;

int main()
{
    int i;
    char arreglo[LONG];
    
    for(i=0;i<LONG;i++){
        printf("Indica el caracter %d del arreglo: ",i+1);
        scanf("%c",&arreglo[i]);
        
    }
    
    for(i=0;i<LONG;i++){
        printf("\nEl caracter %d del arreglo es: %c ",i+1, arreglo[i]);
    }
    
    
    printf("\nIdnica la cadena: ");
    scanf("%s",arreglo);
    printf("La cadena  fue: %s", arreglo);

    printf("\nIndica la cadena: ");
    gets(arreglo);
    printf("nLa cadena fue: ");
    puts(arreglo);
    
    for(i=0;i<strlen(arreglo);i++){
    	printf("\nEl caracter %d de la cadena es: %c",i+1,arreglo[i]);
    }
    
    
}
