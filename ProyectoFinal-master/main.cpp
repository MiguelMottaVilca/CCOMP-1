#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "main.h"
#include "estudiante.h"
#include "empleado.h" 
#include "profesor.h"

//using namespace std;
using namespace Main;


string llenadoEstudiante(){
    string nombre , apellido , carrera;
    int edad , notas ;
    while(true){
    std::cin.ignore();

    std::cout<<"NOMBRE: ";std::getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";std::getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cin.ignore();
    std::cout<<"CARRERA: ";std::getline(std::cin , carrera);
    std::cout<<"CANTIDAD DE CURSOS: ";std::cin>> notas;
    std::cout<<endl;
    Estudiante estudiante(nombre,apellido,edad,carrera,notas);

    estudiante.mostrar();
    char val;
    std::cout<<endl;
    std::cout<<"¿QUIERE CORREGIR ALGUN ERROR? S/N ";std::cin>>val;
    std::cout<<endl;
    if (val == 'N' or val == 'n'){
        break;
    }

    }
    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<" "<< apellido <<"_"<< edad <<"_"<< carrera <<"_"<< notas <<"----";

    text = aux.str();

    return text ;
}
string llenadoEmpleado(){
    string nombre, apellido,trabajo,curso;
    int edad;
    float sueldo;
    while(true){
    std::cin.ignore();

    std::cout<<"NOMBRE: ";std::getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";std::getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cout<<"SUELDO: ";std::cin>> sueldo;
    std::cout<<"TRABAJO: ";std::cin>> trabajo;
    std::cout<<endl;
    Empleado empleado(nombre,apellido,edad,sueldo,trabajo);

    empleado.mostrar();
    char val;
    std::cout<<endl;
    std::cout<<"¿QUIERE CORREGIR ALGUN ERROR? S/N ";std::cin>>val;
    std::cout<<endl;
    if (val == 'N' or val == 'n'){
        break;
    }
    }

    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<"_"<< apellido <<"_"<< edad <<"_"<< sueldo <<"_"<< trabajo <<"----";

    text = aux.str();

    return text ;
}
string llenadoProfesor(){
    string nombre, apellido,trabajo,curso;
    int edad;
    float sueldo;
    while(true){
    std::cin.ignore();

    std::cout<<"NOMBRE: ";getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cout<<"SUELDO: ";std::cin>> sueldo;
    std::cout<<"CURSO: ";std::cin>>curso;
    std::cout<<endl;

    Profesor profesor(nombre,apellido,edad,sueldo,curso);
    profesor.mostrar();
    char val;
    std::cout<<endl;
    std::cout<<"¿QUIERE CORREGIR ALGUN ERROR? S/N ";std::cin>>val;
    std::cout<<endl;
    if (val == 'N' or val == 'n'){
        break;
    }
    }

    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<"_"<< apellido <<"_"<< edad <<"_"<< sueldo <<"_"<< curso <<"----";

    text = aux.str();

    char val;
    std::cout<<"¿Quieres crear otro Empleado? S/N ";std::cin >> val ;
    std::cout<< endl;
    system("clear");
    if(val == 's' or val == 'S'){
        llenadoEmpleado();
    }
    if(val == 'n' or val == 'N'){
        menu();
    } 
    return text ;
}

void ejecutar(){
    bool iniciar = true;
    int num  ;

    while( iniciar == true){
        std::cout<<"DIGITE NUMERO: ";std::cin>>num;
        std::cout<<endl;

        if (num == 1){
            while(true){
                system("clear"); 
                agregarAlumno(llenadoEstudiante());
                char val;
                std::cin.ignore();
                std::cout<<"¿Quires crear otro Estudiante? S/N ";std::cin >> val ;
                if (val == 's' or val == 'S'){
                    continue;
                }
                if(val == 'n' or val == 'N'){
                    break;
                } 
            }
            num = 0;
            menu();
            ejecutar();
        }
        if (num == 2){
            while(true){
                system("clear");
                agregarProfesor(llenadoProfesor());
                char val;
                std::cin.ignore();
                std::cout<<"¿Quires crear otro Empleado? S/N ";std::cin >> val ;
                std::cout<< endl;
                if (val == 's' or val == 'S'){
                    continue;
                }
                if(val == 'n' or val == 'N'){
                    break;
                } 
            }
            num = 0;
            menu();
            ejecutar();
        }
        if (num == 3){
            while(true){
                system("clear"); 
                agregarEmpleado(llenadoEmpleado());
                char val;
                std::cin.ignore();
                std::cout<<"¿Quires crear otro Empleado? S/N ";std::cin >> val ;
                std::cout<< endl;
                if (val == 's' or val == 'S'){
                    continue;
                }
                if(val == 'n' or val == 'N'){
                    break;
                } 
            }
            num = 0;
            menu();
            ejecutar();     
        } 
        if (num == 4){
            while(true){
                string val;
                string temp , search;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digitar nombre o apellido o carrera : ";std::getline(std::cin , search);
                temp = lecturaAlumnos() ;
                vector <int> aux_1 = buscarPos(temp,search); 
                mostrar(aux_1,temp);
                temp.clear(); 
                std::cout<<"QUIERE BUSCAR A OTRO ALUMNO? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            } 
            system("clear");
            menu();
        }
        if (num == 5){
            while(true){
                string val;
                string temp , search;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digite nombre o apellido o curso : ";std::getline(std::cin , search);
                temp = lecturaProfesores() ;
                vector <int> aux_2 = buscarPos(temp,search);
                mostrar(aux_2,temp);
                temp.clear();
                std::cout<<"QUIERE BUSCAR A OTRO PROFESOR? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            }
            system("clear");
            menu();
        }
        if (num == 6){
            while(true){
                string val , temp , search;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digite nombre o apellido o puesto : ";std::getline(std::cin , search);
                temp = lecturaEmpleados() ;
                vector <int> aux_2 = buscarPos(temp,search); 
                mostrar(aux_2,temp);
                temp.clear();
                std::cout<<"QUIERE BUSCAR A OTRO EMPLEADO? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            }
            system("clear");
            menu();
        }
        if (num == 7){
            while(true){
                string val , temp , search;
                int num;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digite nombre o apellido o puesto : ";std::getline(std::cin , search);
                temp = lecturaAlumnos() ;
                vector <int> aux_2 = buscarPos(temp,search);
                mostrar(aux_2,temp);
                std::cout<<"QUE ESTUDIANTE DESEA BORRAR?"<<endl;
                std::cout<<endl;
                std::cout<<"Digite el numero: ";cin>>num;
                //desde
                num--;
                borrado(temp , num);
                //hasta
                std::cout<<"QUIERE BORRAR OTRO ESTUDIANTE? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            }
            system("clear");
            menu();
        }
        if (num == 8){
            while(true){
                string val , temp , search;
                int num;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digite nombre o apellido o puesto : ";std::getline(std::cin , search);
                temp = lecturaProfesores() ;
                vector <int> aux_2 = buscarPos(temp,search);
                mostrar(aux_2,temp);
                std::cout<<"QUE PROFESOR DESEA BORRAR?"<<endl;
                std::cout<<endl;
                std::cout<<"Digite el numero: ";cin>>num;
                // borrado();

                std::cout<<"QUIERE BORRAR OTRO PROFESOR? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            }
            system("clear");
            menu();
        }
        if (num == 9){
            while(true){
                string val , temp , search;
                int num;
                system("clear");
                std::cin.ignore();
                std::cout<< "Digite nombre o apellido o puesto : ";std::getline(std::cin , search);
                temp = lecturaEmpleados() ;
                vector <int> aux_2 = buscarPos(temp,search);
                mostrar(aux_2,temp);
                std::cout<<"QUE EMPLEADO DESEA BORRAR?"<<endl;
                std::cout<<endl;
                std::cout<<"Digite el numero: ";cin>>num;
                // borrado();

                std::cout<<"QUIERE BORRAR OTRO EMPLEADO? S/N  ";std::cin>>val;
                if (val == "s" or val == "S"){
                    continue;
                }
                if(val == "n" or val == "N"){
                    break;
                }
            }
            system("clear");
            menu();
        }
        if (num == 0){
            break;
        }
    }

}
int main(){ 

    menu();
    ejecutar();

    return 0 ;
}
