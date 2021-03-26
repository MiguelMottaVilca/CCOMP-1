#include "empleado.h" 

using namespace std;

Empleado::Empleado(string nombre ,string apellido ,int edad ,float salario  ,string trabajo ) : Persona (nombre ,apellido ,edad){
    this -> salario = salario;
    this -> trabajo = trabajo;
}
Empleado::~Empleado(){
    // cout<<"SE DESTRUYO EMPLEADO"<<endl;
}
void Empleado::mostrar(){
    cout<< nombre <<" "<< apellido <<" "<< edad <<" "<< salario <<" "<< trabajo <<endl;
}
