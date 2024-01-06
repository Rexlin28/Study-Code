//
//  main.cpp
//  metodo insercion
//
//  Created by Oscar Ariel Quintana Merino  on 21/10/20.
//

#include <iostream>
#define TAM 100
#define TAMCAL 5
int Menu();

struct EAlumnos{
        
        char alumnos[30];
        int matricula;
        float calificaciones[5];
        float promedio = 0;
    };

void Insercion(EAlumnos numbers[], int array_size){
	int i, j, promedioMayor;
	EAlumnos index;
	//Arreglo "ordenado"
	for (i=1; i<array_size; i++){ //Izquierda a derecha 
		promedioMayor= numbers[i].promedio;
		index = numbers[i];
		j = i-1;
		//Arreglo "Desordenado"
		while(j >= 0 && numbers[j].promedio>promedioMayor){ //Derecha a izquierda
			numbers[j+1] = numbers[j];
			j--;
		}
		numbers[j+1]= index;
	}
}

int main(int argc, const char * argv[]) {
   
    EAlumnos alum[TAM];
    
    int j,indicealum = 0,opc,matriculaaux,i,posicion;
    char respuesta;
    do{
        opc=Menu();
        switch(opc){
            case 1:
                printf("ingrese la  matricula\n");
                scanf("%d",&alum[indicealum].matricula);
                printf("Ingrese nombre del alumno\n");
                fflush(stdin);
                gets(alum[indicealum].alumnos);
                indicealum++;
                break;
            case 2:
                printf("Ingrese matricula del alumno a registrar calificaciones\n");
                scanf("%d",&matriculaaux);
                posicion=-1;
                for(i=0;i<indicealum;i++){
                    if(matriculaaux==alum[i].matricula){
                        posicion = i;
                        }
                }
                if(posicion==-1){
                    printf("\nMatricula no encontrada");
                }else{
                    printf("\n\n¿ingresar calificacionesde %s(s/n)?",alum[posicion].alumnos);
                    fflush(stdin);
                    scanf("%c",&respuesta);
                    if(respuesta=='s'||respuesta=='S'){
                        for(i=0;i<TAMCAL;i++){
                                printf("Indica calificacion %d: ",i+1);
                                scanf("%f",&alum[posicion].calificaciones[i]);
                                printf("\nCALIFICACION REGISTRADA\n");
                                alum[posicion].promedio+=alum[posicion].calificaciones[i];
                            
                        }
                        printf("promedio de %s %.2f\n",alum[posicion].alumnos,alum[posicion].promedio/5);
                    }
                }
                
                break;
            case 3:
                for(i=0;i<indicealum;i++){
                    printf("# %d. %s\n",alum[i].matricula,alum[i].alumnos);
                }
                break;
            case 4:
            	Insercion(alum,indicealum);
            	printf("Promedio Mayor:\n%s: %f\n",alum[indicealum-1].alumnos, alum[indicealum-1].promedio);
                break;
        }
    
    }while(opc!=5);
    return 0;
}
int Menu(){
    int opc;
    printf("1.Alta de alumnos\n");
    printf("2.Ingresar calificaciones\n");
    printf("3.Consultar alumnos\n");
    printf("4.Promedio mayor\n");
    printf("5.Salir\n");
    scanf("%d",&opc);
    return opc;
}
