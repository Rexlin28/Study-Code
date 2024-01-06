#include <stdio.h>
#include <stdlib.h>

int main(){
float *calificaciones;
int n;

printf("¿Cuantos alumnos se ingresaran?");
scanf("%d",&n);
calificaciones= (float*)malloc(n * sizeof(float));

if (calificaciones == NULL){
    fprintf(stderr, "Error - incapaz de asignar memeria.\n");
}
else{
for (int i=0; i<n;){
    printf("\n ingrese la calificacion %d\n",i+1);
    scanf("%f",&calificaciones[i]);

    if (calificaciones[i]<0 || calificaciones[i]>10){
        printf("Error solo numeros del 0 al 10");
    }
    else {
    i++;
    }
}
printf("calificaciones:\n");
for(int j=0; j<n; j++){
    printf("%f\n",calificaciones[j]);
}
}
free(calificaciones);
}
