#include <stdio.h>

void suma_lineas(char *nomb_archi){
FILE * entra;
int i;
//el 3 son las columnas de los datos
int d[5],c ;
int suma[3];
entra = fopen(nomb_archi, "r");

if(entra==NULL)
printf("Lo siento, no puedo abrir el archivo");
else{
for(i=1; i<=5;i++){
	for(c=0;c<3;c++)
	fscanf(entra,"%i",&d[c] );
	suma[i-1]=0;
	for(c=0; c<3;c++)
	suma[i-1]+=d[c];
}
printf("[");
for(i=0;i<5;i++){
	if(i<4)
printf("%3i,", suma[i]);
else
printf("%4i", suma[i]);

}
printf("]\n");
fclose(entra);
}
}



void suma_columnas(char *nomb_archi){
FILE * entra;
int i;
//el 3 son las columnas de los datos
int d[3],c ;
int suma[3];
entra = fopen(nomb_archi, "r");

if(entra==NULL)
printf("Lo siento, no puedo abrir el archivo");
else{
for(i=1; i<=5;i++){
	for(c=0;c<3;c++){
	fscanf(entra,"%i",&d[c] );
}
	suma[0]+=d[0];
	suma[1]+=d[1];
	suma[2]+=d[2];
}
printf("[");
for(i=0;i<3;i++){
	if(i<2)
printf("%3i,", suma[i]);
else
printf("%4i", suma[i]);

}
printf("]\n");
fclose(entra);
}
}
