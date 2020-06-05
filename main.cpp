#include <iostream>
using namespace std;
#include "Civilizacion.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"

#include <vector>
using std::vector;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<Civilizacion*> lista_civilizaciones;
	int opcion1 = 0;
	cout<<"-----------BIENVENIDO------------"<<endl<<endl;
	Civilizacion* civilizacion_creada = NULL;
	Civilizacion* civilizacion_propia = NULL;
	
	while(opcion1 != 3){
		cout<<endl<<"MENU DEL JUEGO----->"<<endl
		<<"1.Crear Civilizacion"<<endl<<"2.Jugar"<<endl<<"3.Salir"<<endl<<"Elija una Opcion:";
		cin >> opcion1;
		switch(opcion1){
			case 1:{
				string nombre;
				cout<<endl<<"Ingrese el Nombre de la Civilizacion: ";
				cin>>nombre;
				civilizacion_creada = new Civilizacion(nombre);
				cout<<endl<<"Civilizacion Creada Exitosamente!"<<endl;
				lista_civilizaciones.push_back(civilizacion_creada);
				break;
			}
			case 2:{
				cout<<endl;
				int posCivilizacion;
				for(int i = 0;i < lista_civilizaciones.size();i++){
					cout<<i<<"-"<<lista_civilizaciones[i]->getNombre();
				}
				cout<<endl<<"Escoja el indice de la Civilizacion con la cual Jugara:";
				cin >> posCivilizacion;
				civilizacion_propia = lista_civilizaciones[posCivilizacion];
				break;
			}
		}//switch exterior
	}//fin del while externo
	delete civilizacion_creada;
	delete civilizacion_propia;
	lista_civilizaciones.erase(lista_civilizaciones.begin());
	return 0;
}
