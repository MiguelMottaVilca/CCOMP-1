#include "estudiante.h"

using namespace std;
Estudiante::Estudiante(string nombre ,string apellido ,int edad ,string carrera ,float nota) : Persona (nombre ,apellido ,edad){
    this -> carrera = carrera;
    this -> nota = nota;
}
Estudiante::~Estudiante(){
    // cout<<"SE DESTRUYO ESTUDIANTE"<<endl;
}
void Estudiante::mostrar(){
    cout<< nombre <<" "<< apellido <<" "<< edad <<" "<< carrera <<endl;

}
