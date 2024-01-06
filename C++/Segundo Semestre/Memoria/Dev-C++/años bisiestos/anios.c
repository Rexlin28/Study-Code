#include<stdio.h>
#include<conio.h>
int main(){
	
int anio;
printf("ingrese el anio");
scanf("%i", &anio);
  if(anio%4==0 && anio%100!=0 || anio%400==0){
   printf("el anio %i es bisiesto", anio);
   
   }
   
  else {
  	printf("el anio %i no es bisiesto", anio);
  }
  getch();
}
