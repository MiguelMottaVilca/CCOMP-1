#include <string>
#include "persona.h"
#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

using namespace std;

class Usuario : public Persona {
    string usuario, contra ;
    public:
    Usuario() : Persona (){
        
        std::cout<<"Usuario: ";
        std::getline(std::cin , usuario);
        std::cout<<"Contraseña: ";
        std::getline(std::cin , contra);
    }
    string getUsuario(void)
    {
        return usuario;
    }
    string getContra(void)
    {
        return contra;
    }

};

#endif // USUARIO_H_INCLUDED