#include "curso.h"

using namespace std;

Curso::Curso(float notas ,string curso){
    this -> notas = notas;
    this -> curso = curso;
}

Curso::Curso(string _curso){
    this->curso = _curso;
}

Curso::~Curso(){}

float Curso::getNotas(){
    return notas;
}
string Curso::getString(){
    return curso;    
}
