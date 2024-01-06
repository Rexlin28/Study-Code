#include <bits/stdc++.h>

using namespace std;

struct Alumno{
	int matricula;
	string nombre;
	Alumno(){
		matricula = 0;
		nombre = "unknown";
		cout<< "La matricula es "<<matricula
			<< " y el nombre es "<<nombre<<endl; 
	}
	Alumno(int matricula, string nombre){
			cout<< "La matricula es "<<matricula
			<< " y el nombre es "<<nombre<<endl;
	}
	~Alumno(){ //Este es el destructor, libera la memoria//
		cout<<"Liberando memoria";
	}
};

int main(){
	Alumno *ptrAlumno = new (nothrow) Alumno;
	if (!ptrAlumno){
		cout <<"Error al reservar memoria";
		exit(-1);
	}
	delete ptrAlumno;
	ptrAlumno= new (nothrow) Alumno(123,"Ariel");
		if (!ptrAlumno){
		cout <<"Error al reservar memoria";
		exit(-1);
	}
	delete ptrAlumno;
	ptrAlumno= new (nothrow) Alumno; // Se imprime unknow por la inicializacion
//	ptrAlumno.nombre = "Ariel"; q	//Error ya que no esta en el stack
//	ptrAlumno.edad= 18;
	ptrAlumno->nombre="Ariel";
	ptrAlumno->matricula= 18;
	cout<<ptrAlumno->nombre;
	cout<<(*ptrAlumno).matricula;
	
	if (!ptrAlumno){
		cout <<"Error al reservar memoria";
		exit(-1);
	}
		delete ptrAlumno;
	Alumno yoquese; //se elimina solo por el ~Alumno//
	return 0;
}
