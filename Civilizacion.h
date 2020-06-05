#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <vector>
using std::vector;
#include <iostream>
using std::string;

#include "Habitante.h"

class Civilizacion
{
	protected:
		string nombre;
		int cant_oro;
		int cant_madera;
		int cant_alimento;
		vector <Habitante*> lista_habitantes;
		int num_habitantes;//contador
		int num_casas;//contador
		int num_cuarteles;//contador
		int num_establos;//contador
		
	public:
		Civilizacion();
		Civilizacion(string);
		//setter y getter de nombre
		void setNombre(string);
		string getNombre();
		//setter y getter de oro
		void setSumarOro(int);
		void setRestarOro(int);
		int getOro();
		//setter y getter de madera
		void setSumarMadera(int);
		void setRestarMadera(int);
		int getMadera();
		//setter y getter de alimento
		void setSumarAlimento(int);
		void setRestarAlimento(int);
		int getAlimento();
		//getter de habitantes
		vector<Habitante*> getHabitantes();
		void agregarHabitante(Habitante*);
		//setter y getter de numero de habitantes
		void setNum_Habitantes();
		int getNum_Habitantes();
		//setter y getter de numero de casas
		void setCasas();
		int getCasas();
		//setter y getter de numero de cuarteles
		void setCuarteles();
		int getCuarteles();
		//setter y getter de numero de establos
		void setEstablos();
		int getEstablos();
		
		~Civilizacion();
	
};

#endif
