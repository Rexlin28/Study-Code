#include <iostream>
#include <string.h>
using namespace std;

int indice;
int pila[10];
void push(int);
int pop(void);

int main(){
    int num1, num2;
    char cadena[100];
    cout<<"Ingrese la cadena: "<<endl;
    scanf("%s",cadena);
    

    int longitud = strlen(cadena);
    for(int i=0; i<longitud; i++){
        if(cadena[i]=='+'|cadena[i]=='-'|cadena[i]=='*'|cadena[i]=='/'){
            num1 = pop();
            num2 = pop();
            if(cadena[i]=='+'){
                push(num2+num1);
            }
            if(cadena[i]=='-'){
                push(num2-num1);
            }
            if(cadena[i]=='*'){
                push(num2*num1);
            }
            if(cadena[i]=='/'){
                push(num2/num1);
            }
        }else{
            push(int(cadena[i])-48);
        }
    }
   printf("El resultado es: %d", pop());
}

int pop(void){
    indice--;
    return pila[indice];
}

void push(int dato){
    pila[indice]=dato;
    indice++;
}