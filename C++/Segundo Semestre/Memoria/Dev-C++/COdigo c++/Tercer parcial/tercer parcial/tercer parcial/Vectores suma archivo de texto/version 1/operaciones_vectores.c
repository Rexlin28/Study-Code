#include <stdio.h>

void suma_lineas(char *nomb_archi){
FILE * entra;
int i;
//el 3 son las columnas de los datos
int d[3],c ;
int suma[5];
entra = fopen(nomb_archi, "r");

for(i=1; i<=5;i++){
	for(c=0;c<3;c++)
	fscanf(entra,"%i",&d[c] );
	suma[i-1]=0;
	for(c=0; c<3;c++)
	suma[i-1]+=d[c];
}
for(i=0;i<5;i++){
printf("%6i", suma[c]);
printf("\n");
}
fclose(entra);

}
