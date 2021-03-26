#include <string>
#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

using namespace std;

class Persona{
    private:
    string apellido, nombre, dni, sexo ;
    public:
    Persona(){
        cin.ignore();
        std::cout<<"APELLIDO: ";
        std::getline(std::cin , apellido);
        std::cout<<"NOMBRE: ";
        std::getline(std::cin , nombre);
        std::cout<<"DNI: ";
        std::getline(std::cin , dni) ;
        std:: cout<< "SEXO: ";
        std::getline(std::cin, sexo) ;
    }

    string getApellido(void)
    {
        return apellido;
    }
    string getNombre(void)
    {
        return nombre;
    }
    string getDni(void)
    {
        return dni;
    }
    string getSexo(void)
    {
        return sexo;
    }
};

#endif // PERSONA_H_INCLUDED