#include <iostream>
#include <fstream>

using namespace std;

void escribir(void){
    string text;
    text = "hola";
    ofstream archivo;

    archivo.open("prueba.txt",ios::out);

    if (archivo.fail()){
        cout<<"No se  abrir el archivo"<<endl;
    }
    archivo<< text;

    archivo.close();
}

string lectura(void){

    ifstream archivo;
    string texto;

    archivo.open("prueba.txt",ios::in);

    if (archivo.fail())
        cout<<"No se  abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem)) 
        texto +=tem;
    
    return texto  ;
}

int main(){

    // escribir();

    string texto = lectura();
    cout<< texto <<endl;
     

    int x = texto.size();
    int i = 0;
    int cont = 0;
    while (i < x){
        string aux;
        aux = texto[i];
        if (aux == " "){
            i++;
            continue;
        }
        i++;
        cont++; 
    }
    
    cout<< "numero de palabras : " << cont << endl;

    return 0;
}