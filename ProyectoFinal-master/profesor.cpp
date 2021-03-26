#include "profesor.h" 

using namespace std;

Profesor::Profesor(string nombre , string apellido , int edad , float salario, string curso ) : Persona(nombre, apellido , edad) , Curso(curso){
    this -> salario = salario;
}

Profesor::~Profesor(){
    // cout<<"SE DESTRUYO Profesor"<<endl;
}
void Profesor::mostrar(){
    cout<< nombre <<" "<< apellido <<" "<< edad <<" "<< salario<<" "<< curso <<endl;
}
