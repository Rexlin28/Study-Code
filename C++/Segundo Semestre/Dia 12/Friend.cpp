#include<iostream> 
using namespace std; 
  
struct Complex { 
    int real, imag; 
    Complex(int r = 0, int i =0)  {
        real = r;   imag = i;
    } 
    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    }   
    Complex sumale (Complex const &obj){
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    
friend std::istream& operator >> (std::istream &is,Complex &obj){
        is>>obj.real>>obj.imag;
        return is;
    }
