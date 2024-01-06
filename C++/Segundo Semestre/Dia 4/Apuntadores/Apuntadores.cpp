#include <stdio.h>
#include <iostream>



int main(){
int *p;
int x,y;
p= &x;
p=&y;
y=20;//Es el mismo
*p=20;//Es el mismo
/////////////////////////
int *p1,*p2;
int a=5, b=15;
p1=&a;
p2=&b;
*p1= -10; //cambia el valor de a
*p2=*p1; //almacena b lo que tiene a ó a=b
p1=p2; // p1=&y;
///////////////////////////
int myArray[6];
//p=&myArray;
//p=myArray; no da error pero da algo que no
*p=1; //myArray[0] = 1
p++;
*p=2; // myArray[1]=2
p=&myArray[3]; p=myArray + 3;
*(p+4)=50;

}
