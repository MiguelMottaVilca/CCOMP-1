#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "date.h"
#include "usuario.h"
#include "persona.h"
#include "medico.h"
#include "enfermeros.h"
#include "paciente.h"
#include "medicamentos.h"
#include "main.h"
#include "cita.h"

using namespace std;

/*
void crearFicha()
{
	ostringstream aux;
	string text;
	Paciente x;
    Cita x2;

	aux << "*****" << x.getRegistro() << "___" << x.getApellido() << "___" <<
		x.getNombre() << "___"  << x2.getCita() << "___";
	
	text = aux.str();

	ofstream archivo;

	archivo.open("fichaMedica.txt", ios::app);
	if (archivo.fail())
		std::cout << "No se puedo abrir el archivo" << endl;

	archivo << text;

	archivo.close();
}
*/


// void lecturaUsuario( string usuario , string contra ){

//     ifstream archivo;
//     string texto;

//     archivo.open("usuarios.txt",ios::in);

//     if (archivo.fail())
//         std::cout<<"No se puedo abrir el archivo"<<endl;

//     string tem;
//     while (getline(archivo,tem))
//         texto +=tem;

//     cout << texto << '\n';

// }

vector <string> separar(string fichero ){
    ifstream archivo;
    string texto;

    if ( fichero == "paciente" ){
        archivo.open("pacientes.txt",ios::in);
    }

    else if ( fichero == "medico" ){
        archivo.open("medicos.txt",ios::in);
    }

    else if ( fichero == "usuario" ){
        archivo.open("usuarios.txt",ios::in);
    }
    else if ( fichero == "medicamento" ){
        archivo.open("medicamentos.txt",ios::in);
    }


    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem))
        texto +=tem;

    vector <string> myVector = {};
    string temp , operador = "_* " ;
    temp.clear();

    int i = 0;
    while ( i < texto.size() ){ 
        if( (texto[i] != operador[0] ) and (texto[i] != operador[1] ) and (texto[i] != operador[2] )){
            temp +=texto[i];
            i++;
        }
        if ( texto[i] == operador[2]  ){
            myVector.push_back(temp);
            temp.clear();
            i += 1 ;
        }
        if ( texto[i] == operador[0]  ){
            myVector.push_back(temp);
            temp.clear();
            i += 3 ;
        }
        if ( texto[i] == operador[1] ) {
            i += 5; 
            myVector.push_back(temp);
            myVector.push_back("*****");
            temp.clear();
        }
    }
    return myVector;
}

vector <int> buscar( vector <string> myVector  , string palabra){
    vector <int> pos = {};

    string pause = "*****";
    int i = 0;
    while( i < myVector.size() ){
        if (myVector[i] == palabra){
            while ( myVector[i] != pause ){
                i--;
            }
            i++; 
            pos.push_back(i);
            while ( myVector[i] != pause ){
                i++;
            }
        }
        i++;
    }
    return pos;
}

void mostrar(vector <string> lista , vector <int> pos ){
    string pause = "*****";

    cout<< endl;

    for (int i = 0 ; i < pos.size() ; i++ ){
        int  aux = pos[i];
        int j = aux;

        while ( lista[j] != pause ){  
            cout << lista[j] << "       ";
            j++;
        }
        cout<<endl;
    }
}

bool confirmar_usuario( vector <string> vec){
    string aux_usuario , aux_contra , pause = "*****";;
    cout<<"Nombre de usuario: ";getline(cin,aux_usuario);
    cout<<"Contrasenia: ";getline(cin,aux_contra);
    
    bool val = false;

    for (int i = 2 ; i < vec.size() ; i++ ){
        string  aux = vec[i];

        if ( aux == pause ){  
            
            i -= 2;
            if ( (vec[i] == aux_usuario and vec[i + 1] == aux_contra)) {
               val = true;
                break;
            }
            else {
                i += 3;
            }
        }
    }
    return val;
}

void inicio(void){

   std::cout << '\n' << '\t' << "BIENVENIDO A NUESTRA BASE DE DATOS" << endl;
   std::cout << '\n' << "SELECCIONE LA OPERACION QUE DESEA REALIZAR" << endl;
   int num;
   std::cout << '\n' << "      1    INGRESAR        ";
   std::cout << '\n' << "      2    REGISTRARSE        ";
   std::cout << '\n' << "      0    SALIR                  " << '\n';
   std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> num;

   switch(num){
       case 0 : {
           system("clear");
           break;
        }
       case 1 :{
           system("clear");
           std::cin.ignore();
           int n;
           std::cout << '\n' << " ...  ";
           std::cout << '\n' << "      3    PACIENTE         ";
           std::cout << '\n' << "      2    ENFERMERO        ";
           std::cout << '\n' << "      1    MEDICO           ";
           std::cout << '\n' << "      0    SALIR            ";
           std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> n;
           if (n == 0){
               system("clear");
               break;
           }
           if (n == 1){
               system("clear");
               std::cin.ignore();
		        vector <string> texto = separar("medicos");
               if (confirmar_usuario(texto))
		
               {
                   int num;
                   std::cout << '\n' << " BUSCAR: ";
                   std::cout << '\n' << "      3    FICHAS MEDICAS   ";
                   std::cout << '\n' << "      2    PACIENTE         ";
                   std::cout << '\n' << "      1    ENFERMERO        ";
                   std::cout << '\n' << "      0    SALIR            ";
                   std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> num;
                   if (num==0)
                   {
                       system("clear");
                       std::cin.ignore();
                       break;
                   }
                   if (num==1)
                   {
                       vector <string> texto = separar("enfermeros");
                       string palabra;
		               cout << "BUSQUE COMENZANDO CON MAYÚSCULA LOS NOMBRES Y APELLIDOS: "; cin >> palabra;
                       vector <int> pos = buscar(texto, palabra);
                   }
                   if (num==2)
                   {
                       vector <string> texto = separar("pacientes");
                       string palabra;
                       cout << "BUSQUE COMENZANDO CON MAYÚSCULA LOS NOMBRES Y APELLIDOS: "; cin >> palabra;
                       vector <int> pos = buscar(texto, palabra);
                   }
                   if (num==3)
                   {
                       //funcion que ingrese al txt de ficha tecnica
                       string n;
                       //funcion buscar
                   }
                   else{
                       std::cout << "DIGITE EN EL RANGO DE NUMEROS";
                       break;
                   }
               }
            }
           if (n == 2){
               system("clear");
               std::cin.ignore();
               vector <string> texto = separar("enfermeros");
               if (confirmar_usuario(texto))
               {
                   int num;
                   std::cout << '\n' << " BUSCAR: ";
                   std::cout << '\n' << "      3    FICHAS MEDICAS   ";
                   std::cout << '\n' << "      2    PACIENTE         ";
                   std::cout << '\n' << "      1    MEDICOS        ";
                   std::cout << '\n' << "      0    SALIR            ";
                   std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> num;
                   if (num==0)
                   {
                       system("clear");
                       std::cin.ignore();
                       break;
                   }
                   if (num==1)
                   {
                       vector <string> texto = separar("medicos");
                       string palabra;
                       cout << "BUSQUE COMENZANDO CON MAYÚSCULA LOS NOMBRES Y APELLIDOS: "; cin >> palabra;
                       vector <int> pos = buscar(texto, palabra);
                   }
                   if (num==2)
                   {
                       vector <string> texto = separar("pacientes");
                       string palabra;
                       cout << "BUSQUE COMENZANDO CON MAYÚSCULA LOS NOMBRES Y APELLIDOS: "; cin >> palabra;
                       vector <int> pos = buscar(texto, palabra);
                   }
                   if (num==3)
                   {
                       //funcion que ingrese al txt de ficha tecnica
                       string n;
                       //funcion buscar
                   }
		       }
		   }
		   if (n == 3){
		       system("clear");
		       std::cin.ignore();
		       vector <string> texto = separar("pacientes");
		       if (confirmar_usuario(texto))
		        {
                    std::cout << "Hola paciente" << endl;
                }
                break;       
           
            }
       }

       case 2 :{
           system("clear");
           std::cin.ignore();
           int n = 10 ;
           std::cout << '\n' << " REGISTRAR COMO:  "<<endl;
           std::cout << '\n' << "      1    PACIENTE         ";
           std::cout << '\n' << "      2    ENFERMERO        ";
           std::cout << '\n' << "      3    MEDICO           ";
           std::cout << '\n' << "      0    SALIR            "<< endl;;
           std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> n;
           if (n == 0){
               system("clear");
               break;
           }
           if (n == 1){
               
               system("clear");
               std::cin.ignore();
               agregarPaciente();
               std::cout <<"\n FUE REGISTRADO CON EXITO " <<endl;
           }
           if (n == 2){
               system("clear");
               std::cin.ignore();
               agregarEnfermeros();
               std::cout <<"\n FUE REGISTRADO CON EXITO " <<endl;
           }
           if (n == 3){
               system("clear");
               std::cin.ignore();
               agregarMedico();
               std::cout <<"\n FUE REGISTRADO CON EXITO " <<endl;
           }
       }

       default: {
           system("clear");
           std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
           inicio();
        } 
        
    }
}

int main(){
    inicio();
    return 0;
}