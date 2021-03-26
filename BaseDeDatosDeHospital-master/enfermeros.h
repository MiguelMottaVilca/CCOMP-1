#ifndef ENFERMERO_H
#define ENFERMERO_H


class Enfermero : public Persona, public Usuario{
    string especialidad;
    int cant;
public:
    Enfermero() : Persona(), Usuario() {
    cout << "Cantidad de horas disponibles: ";cin >> cant;
    cout << "Especialidad: ";getline(cin, especialidad);

}
//get
    string getEspecialidad() { return especialidad; }
    int getCant() { return cant; }
//set
	void setCant( int cant ){
		this -> cant = cant;
	}
	void setEspecialidad( string especialidad ){
		this -> especialidad = especialidad;
	}
//mostrar
void mostrarEnfermero(){
		mostrarPersona() ;
		mostrarUsuario() ;
		std::cout<< "ESPECIALIDA: " << especialidad <<endl;
		std::cout<< "CANTIDAD DE HORAS: " << cant <<endl;
		//completar
}
};

#endif //ENFERMERO_H