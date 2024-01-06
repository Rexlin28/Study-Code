#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

float radio;
float pi;
pi = 3.141592;
float Area;
float Perimetro;
cin >> radio;
Perimetro = pi*(radio*radio);
Area = 2*pi*radio;
cout <<"El area es "<< Perimetro;
cout << "\nEl perimetro es " << Area;
getch();
return 0;

}

