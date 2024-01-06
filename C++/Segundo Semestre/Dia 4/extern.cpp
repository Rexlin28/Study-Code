#include <iostream>
using namespace std;
int realizaSuma(int,int);
int main(){
    cout<<realizaSuma(10,50)<<endl;
    cout<<realizaSuma(20,60)<<endl;
    extern int sumaTotal;
    sumaTotal = realizaSuma(10,20);
    cout<<sumaTotal<<endl;

}
int realizaSuma(int sumando1, int sumando2){
    static int suma= 0;
    return suma + sumando1 + sumando2;
}
