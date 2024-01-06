#include <iostream>
#include <string.h>
#define REN 5 //100
using namespace std;

int main(){
	char agendaNombres[REN][30], agendaCorreo[REN][50], agendaTelefono[REN][15]; //Correo con verificacion
	int agendaCumple[REN][3], opcion=0,acumulador=0,correcto=0,biciesto,diaActual,mesActual,cumpleMayor=0,i,j; //Cumpleaños valido ademas de saber quien es mayor;
	do{
		cout<<"Selecciona una opcion:"<<endl
			<<"1) Alta de un contacto"<<endl
			<<"2) Cumpleanieros del mes"<<endl
			<<"3) Cumpleanieros del dia de hoy"<<endl
			<<"4) Persona mayor y menor"<<endl
			<<"5) Salir"<<endl
			<<"************************"<<endl;
		cin >> opcion;
		switch(opcion){
			case 1: //Alta de un contacto

				if(acumulador<REN){
					//Nombre
					printf("Indica el nombre: \n");
					scanf("%s",agendaNombres[acumulador]);
					//Correo
					do {
						correcto=0;
						printf("Indica el correo: \n");
						scanf("%s",agendaCorreo[acumulador]);

						if(agendaCorreo[acumulador][0]!=0 && agendaCorreo[acumulador][0]!='@'){
							correcto++;//verificador de letras antes del @
						}
						for(i=1;i< (strlen(agendaCorreo[acumulador]));i++){
							if(agendaCorreo[acumulador][i]=='@'){
								correcto++;//verificador del @
								break;
							}
						}
						for( ;i<(strlen(agendaCorreo[acumulador])); i++){
							if((agendaCorreo[acumulador][i]<91 && agendaCorreo[acumulador][i]>64)||(agendaCorreo[acumulador][i]<123 && agendaCorreo[acumulador][i]>96)){
								correcto++;//verificador de letras despues del arroba
								break;
							}
						}
						for(;i< (strlen(agendaCorreo[acumulador]));i++){
							if(agendaCorreo[acumulador][i]=='.'){
								correcto++;//verificador del punto
								break;
							}
						}
						for( ;i<(strlen(agendaCorreo[acumulador])); i++){
							if((agendaCorreo[acumulador][i]<91 && agendaCorreo[acumulador][i]>64)||(agendaCorreo[acumulador][i]<123 && agendaCorreo[acumulador][i]>96)){
								correcto++;//verificador de letras despues del punto
								break;
							}
						}
						if(correcto!=5){
							printf("Correo Invalido\n");
						}
					}while(correcto!=5);

					//Telefono
					printf("Indica el telefono: \n");
					do{
						correcto=0;
						scanf("%s",agendaTelefono[acumulador]);
						for(i=0;i<strlen(agendaTelefono[acumulador]); i++){
							if(!((agendaTelefono[acumulador][i]<58 && agendaTelefono[acumulador][i]>47) || (agendaTelefono[acumulador][i]==45) )){
								correcto=1;
								break;
							}
						}
						if(correcto!=0){
							printf("Numero invalido, intentelo de nuevo: \n");
						}
					} while (correcto!=0);
					
					//Fecha de nacimiento
					do{
						correcto=0;
						//Dia
						printf("Indica solo el dia de nacimiento: \n");
						scanf("%d",&agendaCumple[acumulador][0]);
						//mes
						printf("Indica solo el mes de nacimiento: \n");
						scanf("%d",&agendaCumple[acumulador][1]);
						//anio
						printf("Indica solo el anio de nacimiento: \n");
						scanf("%d",&agendaCumple[acumulador][2]);

						if(agendaCumple[acumulador][2]>1900){
							if(agendaCumple[acumulador][1]>0 && agendaCumple[acumulador][1]<12){
								if(agendaCumple[acumulador][1]==1 || agendaCumple[acumulador][1]==3 || agendaCumple[acumulador][1]==5 || agendaCumple[acumulador][1]==7 || agendaCumple[acumulador][1]==8 || agendaCumple[acumulador][1]==10 ||agendaCumple[acumulador][1]==12){
									if(agendaCumple[acumulador][1]>=1 && agendaCumple[acumulador][1]<=31){
										correcto++;//meses con 31 dias
									}
								}

								if(agendaCumple[acumulador][1]==4 || agendaCumple[acumulador][1]==6 || agendaCumple[acumulador][1]==9 || agendaCumple[acumulador][1]==11){
									if(agendaCumple[acumulador][1]>=1 && agendaCumple[acumulador][1]<=30){
										correcto++;//meses con 30 dias
									}
								}

								//Febrero
								if(agendaCumple[acumulador][1]==2 ){
									biciesto=0;
									if((agendaCumple[acumulador][2]%4==0 && agendaCumple[acumulador][2]%100 !=100)||(agendaCumple[acumulador][2]%400==0)){
										biciesto++;//Verificar si el año es biciesto
									}
									if((agendaCumple[acumulador][1]>=1 && agendaCumple[acumulador][1]<=28+biciesto)){
										correcto++;//verificar febrero
									}
								}
							}
						}
						if(!correcto){
							printf("Fecha incorrecta, intentelo de nuevo: \n");
						}
					}while(!correcto);
					correcto=0;
					acumulador++;

				}else{
					printf("ERROR! Capacidad de contactos llena!");
				}

			break;


			case 2: //Cumpleanieros del mes
				printf("Seleccione el mes actual: \n");
				scanf("%d",&mesActual);
				for(i=0;i<acumulador;i++){
					if(agendaCumple[i][1]==mesActual){
						printf("Nombre: %s\n",agendaNombres[i]);
						printf("Telefono: %s\n",agendaTelefono[i]);
						printf("Correo: %s\n",agendaCorreo[i]);
						printf("Cumpleanios: %d/%d/%d \n",agendaCumple[i][0],agendaCumple[i][1],agendaCumple[i][2]);
						printf("***********************************");
					}
				}
				

			break;

			case 3: //Cumpleanieros de hoy
				printf("Seleccione el mes actual: \n");
				scanf("%d",&mesActual);
				printf("Sellecione el dia actual");
				scanf("%d",&diaActual);
				for(i=0;i<acumulador;i++){
					if(agendaCumple[i][1]==mesActual && agendaCumple[i][0]==diaActual){
						printf("Nombre: %s\n",agendaNombres[i]);
						printf("Telefono: %s\n",agendaTelefono[i]);
						printf("Correo: %s\n",agendaCorreo[i]);
						printf("Cumpleanios: %d/%d/%d \n",agendaCumple[i][0],agendaCumple[i][1],agendaCumple[i][2]);
						printf("***********************************");
					}
				}
			break;


			case 4: //Persona mayor y menor
				cumpleMayor=0;
				for(i=0; i<acumulador; i++){
					for(j=0; j<acumulador; j++){
						if(agendaCumple[i][2]>agendaCumple[j][2]){
							cumpleMayor=i;
						}else{ 
								if(agendaCumple[i][2]==agendaCumple[i][2]){
									if(agendaCumple[i][1]<agendaCumple[j][1]){
										cumpleMayor=i;
									}else{
										if(agendaCumple[i][0]<agendaCumple[j][0]){
											cumpleMayor=i;
										}
									}
								}
							}
					}
				}
				printf("El mayor de todos es: %s\n",agendaNombres[i]);
			break;

			case 5: //Salir
				break;

			default: //Opcion invalida
				cout<<"Seleccione una opcion valida"<<endl;
				break;
		}

	}while(opcion!=5);
	
	
		
}
