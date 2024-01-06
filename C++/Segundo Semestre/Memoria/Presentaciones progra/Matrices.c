#include <stdio.h>

void main(){
float a[100][100], b[100][100], c[100][100];
int i,j,m,n;
printf("Ingrese el numero de filas: ");
scanf("%i", &m);
printf("Ingrese el numero de columnas: ");
scanf("%i", &n);

printf("\n Introduzca los datos de la matris A: \n");
for(i=1; i<=m; i++){
for(j=1;j<=n;j++){
printf("Introduzca la coordenada (%i , %i): ", i,j);
scanf("%f", &a[i][j]);
}
}
printf("\n Introduzca los datos de la matris B: \n");
for(i=1; i<=m; i++){
for(j=1;j<=n;j++){
printf("Introduzca la coordenada (%i , %i): ", i,j);
scanf("%f",  &b[i][j]);
}
}
for(i=1; i<=m; i++){
for(j=1;j<=n;j++)
c[i][j] = a[i][j] + b[i][j];
}
printf("\n El resultado de la matriz C es: \n");
for(i=1; i<=m; i++){
for(j=1;j<=n;j++){
printf("(%i , %i): %10f\t", i, j, c[i][j]);
}
printf("\n");
}
}

