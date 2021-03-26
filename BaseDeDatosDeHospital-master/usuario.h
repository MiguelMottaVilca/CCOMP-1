#include <string>
#include "persona.h"
#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

using namespace std;

class Usuario {
    protected:
        string usuario, contra ;
    public:
    Usuario(){
        std::cout<<"Usuario: ";
        std::getline(std::cin , usuario);
        std::cout<<"Contraseña: ";
        std::getline(std::cin , contra);
    }
    string getUsuario(void){
        return usuario;
    }
    string getContra(void){
        return contra;
    }

    void setUsuario( string usuario){
        this -> usuario = usuario;
    }
    void setContra( string contra ){
        this -> contra = contra;
    }

    void mostrarUsuario(){
        std::cout<<"Usuario: " << usuario <<endl; 
        std::cout<<"Contraseña: "<< contra <<endl ;
    }
    // bool confirmar_usuario(){
    //     ifstream archivo;
        
    // }
};

#endif // USUARIO_H_INCLUDED
