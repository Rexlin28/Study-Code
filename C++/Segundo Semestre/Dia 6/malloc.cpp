#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    char *description;

    strcpy(name, "Ray Cornejo");

    /*alocate memory dynamically*/
    description= (char*)malloc(200 * sizeof(char));

    if (description == NULL){
        fprintf(stderr, "Error - incapaz de asignar memeria.\n");
    }
    else{
        strcpy(description, "progresor investigador de la uach");
    }
    printf("Name = %s\n", name);
    printf("Descripcion: %s\n",description);
    free(description);
}
