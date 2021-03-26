#include "persona.h"

using namespace std;

Persona::Persona(string nombre , string apellido , int edad){
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> edad = edad;
}
Persona::~Persona(){
    // cout<<"SE DESTRUYO PERSONA"<<endl;
}

