#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include <iostream>
#include <sstream>
#include <istream>

using namespace std;

class Paciente : public Persona, public Usuario
{
   int codRegistro = 0;

public:

   	Paciente() : Persona() , Usuario() {
	   this -> codRegistro = codRegistro + 1 ;
    }

    string getRegistro(){
	   int codRegistro;
	   stringstream c;
	   c << codRegistro;
	   string cod;
	   c >> cod;
	   return cod;
    }

	void mostrarPaciente() {
		mostrarPersona() ;
		mostrarUsuario() ;
		cout<< "CODIGO REGISTRO : "<< codRegistro <<endl;
	}

};

#endif // PACIENTE_H