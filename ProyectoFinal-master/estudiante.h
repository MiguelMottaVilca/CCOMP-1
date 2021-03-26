#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "persona.h"

using namespace std;

class Estudiante : public Persona{
    private:
        string carrera;
        float nota;
    public:
        Estudiante(string ,string ,int ,string ,float);
        ~Estudiante();
        void mostrar();
};

#endif  //ESTUDIANTE_H