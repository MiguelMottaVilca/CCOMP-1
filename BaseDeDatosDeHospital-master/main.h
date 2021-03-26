#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "date.h"
#include "usuario.h"
#include "persona.h"
#include "medico.h"
#include "enfermeros.h"
#include "paciente.h"
#include "medicamentos.h"

void agregarPaciente(void){

    std::cout <<"     REGISTRANDO UN PACIENTE"<<'\n'<<'\n';
    ostringstream aux;

    Paciente tem ;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarPaciente();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;
    system("clear");

    tem.mostrarPaciente();
    cout<<'\n'<<'\n';

    while(confirmar == 0){
        int num;
        std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
        std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
        std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
        std::cout << "3  MODIFICAR EDAD        "<<'\n';
        std::cout << "4  MODIFICAR DNI        "<<'\n';
        std::cout << "5  MODIFICAR CUENTA        "<<'\n';
        std::cout << "6  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
        std::cout << "DIGITE NUMERO : ";std::cin >> num;

        switch(num){
            case 1:{
                string aux , vof;
                cin.ignore();
                std::cout<<"DIGITE SUS APELLIDOS: "; getline(cin ,aux);
                tem.setApellido(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }    
            }
            case 2:{
                string aux ,vof;
                std::cout<<"DIGITE SUS NOMBRES: "; getline(cin ,aux);
                tem.setNombre(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 3:{
                string aux , vof;
                std::cout<<"DIGITE SU DNI: "; getline(cin ,aux);
                tem.setDni(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 4:{                    
                int aux ;
                string vof;
                std::cout<<"DIGITE SU EDAD: "; cin >> aux;
                tem.setEdad(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 5:{
                string aux , vof;
                std::cout<<"DIGITE SU USUARIO: "; getline(cin ,aux);
                tem.setUsuario(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 6:{
                string aux , vof;
                std::cout<<"DIGITE SUS CONTRASEÑA: "; getline(cin ,aux);
                tem.setContra(aux);
                system("clear");
                tem.mostrarPaciente();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            default: {
                system("clear");
                std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
            }
        }
    }


    string text;
    if ( confirmar == 1 ){
        aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getRegistro()  
        << "___" << tem.getUsuario() << "___" << tem.getContra() << "*****" ;
        text = aux.str();

        ofstream archivo;

        archivo.open("pacientes.txt",ios::app);
        if (archivo.fail())
                std::cout<<"No se puedo abrir el archivo"<<'\n';

        archivo<< text;
        archivo.close();
    }
}

void agregarMedico(){
    std::cout <<"     REGISTRANDO UN MEDICO"<<'\n'<<'\n';

    ostringstream aux;
    string text;

    Medico tem ;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarMedico();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;

    while(confirmar == 0){
        int num;
        std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
        std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
        std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
        std::cout << "3  MODIFICAR EDAD        "<<'\n';
        std::cout << "4  MODIFICAR DNI        "<<'\n';
        std::cout << "5  MODIFICAR ESPECIALIDAD   "<<'\n';
        std::cout << "6  MODIFICAR CANTIDAD HORAS DISPONIBLES   "<<'\n';
        std::cout << "7  MODIFICAR CUENTA        "<<'\n';
        std::cout << "8  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
        std::cout << "DIGITE NUMERO : ";std::cin >> num;

        switch(num){
            case 1:{
                string aux , vof;
                cin.ignore();
                std::cout<<"DIGITE SUS APELLIDOS: "; getline(cin ,aux);
                tem.setApellido(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }    
            }
            case 2:{
                string aux ,vof;
                std::cout<<"DIGITE SUS NOMBRES: "; getline(cin ,aux);
                tem.setNombre(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 3:{
                string aux , vof;
                std::cout<<"DIGITE SU DNI: "; getline(cin ,aux);
                tem.setDni(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 4:{                    
                int aux ;
                string vof;
                std::cout<<"DIGITE SU EDAD: "; cin >> aux;
                tem.setEdad(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 5:{
                string aux , vof;
                std::cout<<"DIGITE SU ESPECIALIDAD: "; getline(cin ,aux);
                tem.setEspecialidad(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 6:{
                int aux ;
                string vof;
                std::cout<<"DIGITE SU CANTIDAD HORAS DISPONIBLES: "; cin>>aux;
                tem.setCant(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 7:{
                string aux , vof;
                std::cout<<"DIGITE SU USUARIO: "; getline(cin ,aux);
                tem.setUsuario(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 8:{
                string aux , vof;
                std::cout<<"DIGITE SUS CONTRASEÑA: "; getline(cin ,aux);
                tem.setContra(aux);
                system("clear");
                tem.mostrarMedico();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            default: {
                system("clear");
                std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
            }
        }
    }

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getEspecialidad() << "___" << tem.getCant() << "___" << tem.getUsuario() << "___" << tem.getContra()<< "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("medicos.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();

}

void agregarEnfermeros(){

    ostringstream aux;
    string text;

    Enfermero tem;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR SU INFORMACION        "<<'\n'<<'\n';
    tem.mostrarEnfermero();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR SU INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;

    while(confirmar == 0){
        int num;
        std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
        std::cout << "1  MODIFICAR APELLIDO        "<<'\n';
        std::cout << "2  MODIFICAR NOMBRE        "<<'\n';
        std::cout << "3  MODIFICAR EDAD        "<<'\n';
        std::cout << "4  MODIFICAR DNI        "<<'\n';
        std::cout << "5  MODIFICAR ESPECIALIDAD   "<<'\n';
        std::cout << "6  MODIFICAR ANTIDAD HORAS DISPONIBLES   "<<'\n';
        std::cout << "7  MODIFICAR CUENTA        "<<'\n';
        std::cout << "8  MODIFICAR CONTRASEÑA        "<<'\n'<<'\n';
        std::cout << "DIGITE NUMERO : ";std::cin >> num;

        switch(num){
            case 1:{
                string aux , vof;
                cin.ignore();
                std::cout<<"DIGITE SUS APELLIDOS: "; getline(cin ,aux);
                tem.setApellido(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }    
            }
            case 2:{
                string aux ,vof;
                std::cout<<"DIGITE SUS NOMBRES: "; getline(cin ,aux);
                tem.setNombre(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 3:{
                string aux , vof;
                std::cout<<"DIGITE SU DNI: "; getline(cin ,aux);
                tem.setDni(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 4:{                    
                int aux ;
                string vof;
                std::cout<<"DIGITE SU EDAD: "; cin >> aux;
                tem.setEdad(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 5:{
                string aux , vof;
                std::cout<<"DIGITE SU ESPECIALIDAD: "; getline(cin ,aux);
                tem.setEspecialidad(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 6:{
                int aux ;
                string vof;
                std::cout<<"DIGITE SU CANTIDAD HORAS DISPONIBLES: "; cin>>aux;
                tem.setCant(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 7:{
                string aux , vof;
                std::cout<<"DIGITE SU USUARIO: "; getline(cin ,aux);
                tem.setUsuario(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 8:{
                string aux , vof;
                std::cout<<"DIGITE SUS CONTRASEÑA: "; getline(cin ,aux);
                tem.setContra(aux);
                system("clear");
                tem.mostrarEnfermero();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            default: {
                system("clear");
                std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
            }
        }
    }

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getEspecialidad() << "___" << tem.getCant() << "___" << tem.getUsuario() << "___" << tem.getContra()<< "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("enfermeros.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();

}

void agregarMedicamentos(){

    ostringstream aux;
    string text;
    Medicamento tem;

    int confirmar;
    std::cout << '\n'<<'\n';
    system("clear");
    std::cout << "      VERIFICAR LA INFORMACION        "<<'\n'<<'\n';
    tem.mostrarMedicamento();

    std::cout<<'\n'<<'\n';
    std::cout << "0  MODIFICAR INFORMACION        "<<'\n';
    std::cout << "1  GUARDAR INFORMACION        "<<'\n'<<'\n';
    std::cout<<"DIGITE NUMERO : " ; std::cin >>confirmar;
    system("clear");

    tem.mostrarMedicamento();
    cout<<'\n'<<'\n';

    while(confirmar == 0){
        int num;
        std::cout << "      MODIFICAR INFORMACION        "<<'\n'<<'\n';
        std::cout << "1  MODIFICAR NOMBRE        "<<'\n';
        std::cout << "2  MODIFICAR CODIGO        "<<'\n';
        std::cout << "3  MODIFICAR CANTIDAD        "<<'\n';
        std::cout << "4  MODIFICAR FECHA DE VENCIMIENTO        "<<'\n'<<'\n';
        std::cout << "DIGITE NUMERO : ";std::cin >> num;

        switch(num){
            case 1:{
                string aux ,vof;
                std::cout<<"DIGITE EL NOMBRES: "; getline(cin ,aux);
                tem.setNombre(aux);
                system("clear");
                tem.mostrarMedicamento();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 2:{
                string aux , vof;
                std::cout<<"DIGITE SU DNI: "; getline(cin ,aux);
                tem.setCodigo(aux);
                system("clear");
                tem.mostrarMedicamento();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 3:{                    
                int aux ;
                string vof;
                std::cout<<"DIGITE LA CANTIDAD: "; cin >> aux;
                tem.setCantidad(aux);
                system("clear");
                tem.mostrarMedicamento();
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            case 4:{                    
                //fecha
                string vof;
                std::cout<<endl<<"DESEA HACER OTRA MODIFICACION? S/N  ";cin >> vof;
                if ( (vof == "s") or (vof == "S") ){
                    continue;
                }
                if ( (vof == "n") or (vof == "N") ){
                    confirmar = 1 ;
                    continue; 
                }
            }
            default: {
                system("clear");
                std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
            }
        }
    }


    aux << tem.getNombre() << "__" << tem.getCantidad() <<"*****";

    text = aux.str();

    ofstream archivo;

    archivo.open("usuarios.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<'\n';

    archivo<< text;

    archivo.close();
}