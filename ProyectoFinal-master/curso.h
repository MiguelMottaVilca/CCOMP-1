#ifndef CURSO_H
#define CURSO_H

#include <iostream>
#include <string>

using namespace std;

class Curso{ 
    protected:
        float notas;
        string curso;
    public:
        Curso(float , string);
        Curso(string);
        ~Curso();
        float getNotas();
        string getString();
};

#endif 
