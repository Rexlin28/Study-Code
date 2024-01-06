#include <iostream>
#include <time.h>

using namespace std;

template <typename dataType>

int indice(dataType (&intArray)[100], dataType numerito){
	float indicador=200,ayuda;
	int size = sizeof(intArray)/sizeof(intArray[0]);
	for (int i=0; i<size; i++){
		ayuda=intArray[i]/numerito;
		if (ayuda==1){
			indicador = i;
			size=0;
	}
	}
	if (indicador==200){
		indicador=-1;
	}
	return indicador;
}

void printArray(float (&intArray)[100]){
    int arraySize = sizeof(intArray)/sizeof(intArray[0]);
    try{
        for (int i=0;i<arraySize;i++){
            std::cout<<"["<<i<<"]:"<<intArray[i]<<std::endl;
        }
    }catch (std::exception& e){
        std::cout << e.what() << '\n';
    }
}
void createfloatArray(float (&intArray)[100]){
    int arraySize = sizeof(intArray)/sizeof(intArray[0]);
    std::cout<<"SIZE: "<<arraySize<<"\n";
    srand (time(NULL));
    for (int i=0;i<arraySize;i++){
        float caca=(rand()%1000);
         intArray[i]=caca/10; //Cambia numeros a flotantes
        //  intArray[i]=rand()%100; //Numeros enteros
    }
}
void createintArray(float (&intArray)[100]){
    int arraySize = sizeof(intArray)/sizeof(intArray[0]);
    std::cout<<"SIZE: "<<arraySize<<"\n";
    srand (time(NULL));
    for (int i=0;i<arraySize;i++){
       
          intArray[i]=rand()%100; //Numeros enteros
    }
}
int main(){
    float miArreglo[100],miOtroArreglo[100], index=-1,numero=4;
    cout<<"**************\nFlotantes: \n";
	createfloatArray(miArreglo);
    printArray(miArreglo);
    index = indice(miArreglo, numero);
    cout<<"Indice: "<<index<<"\n";
    cout<<"**************\nEnteros:\n";
    createintArray(miOtroArreglo);
    index = indice(miOtroArreglo, numero);
    printArray(miOtroArreglo);
    cout<<"Indice: "<<index;
    return 0;
}
