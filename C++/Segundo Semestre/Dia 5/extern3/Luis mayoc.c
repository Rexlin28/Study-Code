#include <stdio.h>
#include <stdlib.h>

int main(){
int cuantos, x, y;
printf("Digame cuantas calificaciones va a ingresar: ");
scanf("%i", &cuantos);
float *mayoc = malloc(cuantos*sizeof(float));
if (mayoc == NULL){
        fprintf(stderr, "Error - incapaz de asignar memeria.\n");
    }else{
	
for(x=0; x<cuantos; x++){
	printf("Dime la calificacion %i: ", x+1);
	scanf("%f", &mayoc[x]);
	 if(mayoc[x]>10 || mayoc[x]<0){
	 	printf("Eh bro asi no \n");
			do{
	 		printf("Dime la calificacion %i: ", x+1);
			scanf("%f", &mayoc[x]);
		 } 
		 while(mayoc[x]>10 || mayoc[x]<0);
	}else{

	}
	 }

      for(y=0; y<cuantos; y++){
printf("La califa %i es: %f \n", y+1, mayoc[y]);
}  
}
free(mayoc);
}
