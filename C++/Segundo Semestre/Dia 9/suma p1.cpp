#include <bits/stdc++.h>

using namespace std;

int* Sumador(int, int);
int main(){
    int *p= nullprt;

    p = Sumador(10,5);
    cout<< "El valor de la suma es: "<< *p;
    return 0;
}

int* Sumador(int a, int b=10){
    int suma=0;
    suma= a+b;

    return &suma;
}
