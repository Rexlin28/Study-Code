#include <stdio.h>


void suma_lineas(char *nomb_archi){
	FILE * entra;
	int i,d1,d2,d3;
	//el 3 son las columnas
	int d[3],c; 
	int suma[5];
	entra=fopen(nomb_archi,"r");
	if (entra==NULL)
	printf("nell carnal no se abre");
	else{
		for(i=1; i<=5; i++){
		for(c=0; c<3; c++){
		fscanf(entra,"%i",&d[c] );
		}
		suma[i-1]=0;
		for(c=0; c<3; c++){
			suma[i-1]+=d[c];
		}
	}
	printf("[");
	for(i=0; i<5; i++){
		if(i<4)
			printf("%4i,",suma[i]);
		else
			printf("%4i",suma[i]);
}
printf("]\n");

fclose(entra);
}}

void suma_columna(char *nomb_archi){
	FILE * entra;
	int i,d[3],c,suma[3];
	
	entra=fopen(nomb_archi,"r");
	if(entra==NULL)
	printf("nell carnal no se abre");
	else{
		for(i=0;i<3;i++)
		suma[i]=0;
		for(i=0;i<5;i++){
			for(c=0; c<3; c++)
			fscanf(entra,"%i",&d[c]);
		//	for(i=0;i<3;i++)
		//	suma[i]+=d[i];
			suma[0]+=d[0];
			suma[1]+=d[1];
			suma[2]+=d[2];
		}
		printf("[");
	for(i=0; i<3;i++)
	if(i<2)
	printf("%4i,",suma[i]);
	else 
	printf("%4i", suma[i]);
	printf("]");
fclose(entra);
}
}
