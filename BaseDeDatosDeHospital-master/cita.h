#include <iostream>
#include <string>
#include <sstream>
#include <istream>
#include <vector>
#include "date.h"
#include "medico.h"
#include "medicamentos.h"

using namespace std;

class Cita : public Time, public Medico, public Medicamento
{
	string cita;

public:
	Cita() : Time(), Medico(), Medicamento()
	{
		
		std::string text;
		Time t;
		Medico m;
		Medicamento med;
		string nombre;
		ostringstream cita;
		/*
		cout << "DIGITE NOMBRE : "; cin >> nombre;
		cita << t.mostrar()
			(vector <int> buscar(vector <string> texto = separar("medicos"), nombre[1])) << "___" <<
			(vector <int> buscar(vector <string> texto = separar("medicos"), nombre[0])) << "___" <<
			(vector <int> buscar(vector <string> texto = separar("medicos"), nombre[3]))  << "___" <<
			med.getNombre() << "___" << med.getCantidad();

		text = cita.str();*/
	}
	string getCita() 
	{
		return cita;
		
	}
};
