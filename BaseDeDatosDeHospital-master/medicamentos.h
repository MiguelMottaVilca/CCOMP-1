#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <string>
#include "date.h"

using namespace std;

class Medicamento
{
    string nombre , codigo;
    int cantidad;
    Time fechaVencimiento;

public:

    Medicamento() {
        std::cout<<"Digite nombre: ";std::getline(cin,nombre);
        std::cout<<"Digite codigo: ";std::getline(cin,codigo);
        std::cout<<"digite cantidad: ";std::cin>>cantidad;

    }
//get
    string getNombre() { return nombre; }
    string getCodigo() { return codigo; }
    int getCantidad() { return cantidad; }
//set
    void setCantidad(int a){
        cantidad += a;
    }
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    void setCodigo(string codigo){
        this -> codigo = codigo;
    }
//mostrar
    void mostrarMedicamento(){
        std::cout << "NOMBRE: " << nombre <<'\n'; 
        std::cout << "CODIGO: " << codigo <<'\n'; 
        std::cout << "CANTIDAD: " << cantidad <<'\n'; 
        std::cout << "FECHA DE VENCIMIENTO: " << "ARREGLAR" <<'\n'; 
    }

};

#endif //MEDICAMENTO_H