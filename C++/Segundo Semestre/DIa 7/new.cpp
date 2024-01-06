#include <iostream>

using namespace std;

int main(){
    double* pvalue= NULL;
    pvalue= new (nothrow) double (10);
    if (!pvalue){
        cout <<"Error: out of memory." <<endl;
        exit(1);
    }
    delete pvalue;
    pvalue = new double (20.5);
    if(!pvalue)
    {
        cout<< "Error: out of memory."<<endl;
        exit(1);
    }
    //Hay un error porque no delete al 20.5
}
