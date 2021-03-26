#ifndef PROFESOR_H
#define PROFESOR_H

#include "curso.h"
#include "persona.h"
#include "profesor.h"

using namespace std;

class Profesor : public Persona , public Curso{

    private:
        float salario;
    public:
        Profesor(string ,string ,int ,float , string) ;
        ~Profesor();
        void mostrar();
};

#endif  //Profesor_H
