#include <bits/stdc++.h>

using namespace std;

int main(){
    float y=10.5;
    int x=4, *p= nullptr;
    if (true){
    int x= 5;
    p= &x;
    }
    cout << "El valor de X es: "<< *p;
    //dejar p asi es un dangling pointer ya que esta apuntando algo que no esta//
    return 0;
}
