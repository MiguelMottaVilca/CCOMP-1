#include <iostream>

using namespace std;

namespace Main{

void menu(){
    std::cout<<endl;
    std::cout<<endl;
    std::cout<<"             - LISTAS -  "<<endl;
    std::cout<<endl;
    std::cout<<endl;
    std::cout<<"        1 Crear ESTUDIANTE "<<endl;
    std::cout<<"        2 Crear PROFESOR "<<endl;
    std::cout<<"        3 Crear EMPLEADO "<<endl;
    std::cout<<"        4 Buscar ESTUDIANTE "<<endl;
    std::cout<<"        5 Buscar PROFESOR "<<endl;
    std::cout<<"        6 Buscar EMPLEADO"<<endl;
    std::cout<<"        7 Borrado ESTUDIANTE"<<endl;
    std::cout<<"        8 Borrado PROFESOR"<<endl;
    std::cout<<"        9 Borrado EMPLEADO"<<endl;
    std::cout<<"        0 SALIR "<<endl;
    std::cout<<endl;
    std::cout<<endl;
    std::cout<<"       - SELECCIONE OPCION -  "<<endl;
    std::cout<<endl;
    std::cout<<endl;
}

void agregarAlumno(string text){
    ofstream archivo;

    archivo.open("listaAlumnos.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    archivo<< text;
    // archivo<< endl;
    
    archivo.close();
}
void agregarEmpleado(string text){
    ofstream archivo;

    archivo.open("listaEmpleados.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    archivo<< text;
    archivo.close();
}
void agregarProfesor(string text){
    ofstream archivo;

    archivo.open("listaProfesores.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    archivo<< text;
    // archivo<<endl;
    
    archivo.close();
}
string lecturaAlumnos(void){
    ifstream archivo;
    string texto;

    archivo.open("listaAlumnos.txt",ios::in);

    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem)) 
        texto +=tem;
    
    return texto  ;
}
string lecturaEmpleados(void){
    ifstream archivo;
    string texto;

    archivo.open("listaEmpleados.txt",ios::in);

    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem)) 
        texto +=tem;
    
    return texto  ;
}
string lecturaProfesores(void){
    ifstream archivo;
    string texto;

    archivo.open("listaProfesores.txt",ios::in);

    if (archivo.fail())
        std::cout<<"No se  abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem)) 
        texto +=tem;
    
    return texto  ;
}
vector <int> buscarPos(string text ,string search){
    
    int x = text.size();
    int y = search.size();
    string tem ;
    
    int i = 0;
    vector <int>  myVector;
    while( i < x ){
        string aux;
        int pos;
        if (text[i] == search[0]){
            int k = 0 ;
            int j = i ;
            pos = i;
            while(k < y ){
                aux+= text[j];
                k++ , j++;
            }
            if (aux == search){
                string aux = "-";
                
                while(text[pos] != aux[0]){
                    pos--;
                }
                tem = aux;
                pos++;
                myVector.push_back(pos);
                aux.clear();
            }
        }
        i++;
    }
    return myVector;
}
void mostrar(vector <int> vec , string text){
    std::cout<<endl;
    int cont = 1;
    for(int i = 0 ; i < vec.size() ; i++){
        int pos = vec[i];
        std::cout<< cont <<"· ";
        cont++;
        string aux = "_ -";
        while(true){
            if (text[pos] != aux[0]){
                std::cout<< text[pos];
                pos++;
                continue;
            }
            if (text[pos] != aux[1]){
                std::cout<<" ";
                pos++;
                break;
            }
        }
        while(true){
            if (text[pos] != aux[0]){
                std::cout<< text[pos];
                pos++;
                continue;
            }
            if (text[pos] != aux[1]){
                std::cout<<" ";
                pos++;
                break;
            }
        }
        std::cout << endl;
    }
    std::cout<<endl;
}
//aqui
void borrado(string temp , int pos){
    std::cout<<"ok"<<endl;
    string a;
    int cont = pos;
    for(int i =0;i<pos;i++){
        cont++;
    }
    for(;cont != '\0';cont++){
        a+=temp;
    }
    std::cout<<a<<endl;

}
}
