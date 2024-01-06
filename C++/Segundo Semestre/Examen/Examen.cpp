#include <bits/stdc++.h>

using namespace std;

int reservar(int b);
int seleccion(int n, int m);
void imprimir(int n, int m, int o);

int main(){
    int n=0,*ap, j=0, h=0,k=0,m=0;
    cout << "¿Cuantos numeros desea obtener?"<<endl;
    cin >> n;
    int f[n];
    *ap = reservar(n);
   for (int i=0; i<n; i++){
    f[i] =seleccion(n,i);

   }

    for (int i=0; i<n; i++){
    ap[i]=f[i];
    }

    for (int i=0; i<n; i++){
        h= f[i];
        k= (h * h);
        m= (h * h *h);
        imprimir(h,k,m);
    }
}

int reservar(int b){
    int *a, c;
    a= NULL;
    a= new int [b];
    if (a==NULL){
        fprintf(stderr,"ERROR ASIGNANDO MEMORIA");
    }
    else{
    printf("%d",*a);

    return *a;
    }
}
void imprimir(int n,int m, int o){
    printf("%d, %d, %d \n",n,m,o);
}
int seleccion(int n, int m){
    int j=0,f;
        printf("introdusca el numero %d :",(m+1));
        cin >> f;
return f;
}


