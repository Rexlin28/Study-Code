#include <bits/stdc++.h>

using namespace std;

int* Sumador(int, int);
int main(){
    int *p= nullptr;

    p = Sumador(10,5);
    cout<< "El valor de la suma es: "<< *p;
    delete p;
    return 0;
}

int* Sumador(int a, int b=10){
    int *suma=nullptr;

    suma = new (nothrow) int(0);

    if (!suma){
        cout << "Error al reservar memoria.. abortando programa";
        exit(-1);
    }
    *suma = a +b;
    return suma;
}
