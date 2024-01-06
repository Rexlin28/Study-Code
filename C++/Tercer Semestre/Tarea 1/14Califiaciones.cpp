#include <iostream>
#include <string>
#include <stdio.h>
#define REN 3
#define COL 7
using namespace std;
	
int main(){
	int arregloMatricula[REN],i,j,opcion, matriculaCali,numeroAlumno=0;
	float arregloCalificacion[REN][COL],promedioAlto;
	char arregloNombre[REN][COL];
	
	for(i=0;i<REN;i++){
		for(j=0;j<COL;j++){
			arregloCalificacion[i][j]=-1;
		}
	}
	
	do{
		opcion=0;
		cout<<"*****************"<<endl
			<<"Elija la opcion:"<<endl
			<<"1) Dar de alta al alumno."<<endl
			<<"2) Capturar calificaciones."<<endl
			<<"3) Lista de calificaciones."<<endl
			<<"4) Promedio mas alto."<<endl
			<<"5) Salir"<<endl
			<<"*****************"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1: //Dar de alta al alumno
				
				for(i=0;i<REN;i++){
					printf("Indica el nombre del alumno %d: ",i+1);
					scanf("%s",arregloNombre[i]);
					
					printf("Indica la matricula de %s: ",arregloNombre[i]);
					scanf("%d",&arregloMatricula[i]);
				}
					break;
				
			case 2://Capturar calificaciones
				
				printf("Indica la matricula del alumno a capturar: ");
				scanf("%d",&matriculaCali);
				for(i=0;i<REN;i++){
					if(matriculaCali==arregloMatricula[i]){
						numeroAlumno=i;
						break;
					}
				}
				for(i=0;i<COL-1;i++){
					printf("Captura la calificacion # %d de %s: ",i+1,arregloNombre[numeroAlumno]);
					scanf("%f",&arregloCalificacion[numeroAlumno][i]);	
				}
				
				arregloCalificacion[numeroAlumno][COL-1]=0;
				for(i=0;i<COL-1;i++){
					arregloCalificacion[numeroAlumno][COL-1]+=arregloCalificacion[numeroAlumno][i];
				}
				arregloCalificacion[numeroAlumno][COL-1]= (arregloCalificacion[numeroAlumno][COL-1])/(COL-1);
				
				break;
			
			case 3://lista de calificaciones
				
				for(i=0;i<REN;i++){
					printf("La calificacion de %s con matricula %d son:\n",arregloNombre[i],arregloMatricula[i]);
					for(j=0;j<COL-1;j++){
						printf("%f\t",arregloCalificacion[i][j]);
					}
					printf("Promedio: %f\n",arregloCalificacion[i][COL-1]);
				}
				
				break;
			
			case 4://promedio mas alto
				promedioAlto=0;
				for(i=0;i<REN;i++){
					if(promedioAlto<arregloCalificacion[i][COL-1]){
						promedioAlto=arregloCalificacion[i][COL-1];
						numeroAlumno=i;
					}
				}
				printf("El promedio mayor es de %s con un promedio de %f\n",arregloNombre[numeroAlumno],arregloCalificacion[numeroAlumno][COL-1]);
				
				break;
			
			case 5:	
				break;
			
			default:
				printf("Seleccione un numero o caracter valido\n");
				break;
			
		}
	}while(opcion!=5);
}
