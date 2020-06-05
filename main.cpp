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
	Habitante* habitante_creado = NULL;
	
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
				int opcion2 = 0;
				cout<<endl;
				int posCivilizacion;
				for(int i = 0;i < lista_civilizaciones.size();i++){
					cout<<i<<"-"<<lista_civilizaciones[i]->getNombre()<<endl;
				}
				cout<<endl<<"Escoja el indice de la Civilizacion con la cual Jugara:";
				cin >> posCivilizacion;
				civilizacion_propia = lista_civilizaciones[posCivilizacion];
				cout<<endl<<"Civilizacion "<<civilizacion_propia->getNombre()<<" Seleccionada!"<<endl;
				while(opcion2 != 10){
					cout<<"1.Crear Aldeano"<<endl<<"2.Crear Jinete"<<endl<<"3.Crear Arquero"<<endl
					<<"4.Crear Caballero"<<endl<<"5.Construir Casa"<<endl<<"6.Costruir Cuartel"<<
					endl<<"7.Construir Establo"<<endl<<"8.Ir a Guerra"<<endl<<"9.Siguiente Hora"<<
					endl<<"10.Salir"<<endl<<"Escoja una Opcion:";
					
					cin>>opcion2;
					
					switch(opcion2){
						case 1:{
							break;
						}
						case 2:{
							break;
						}
						case 3:{
							break;
						}
						case 4:{
							break;
						}
						case 5:{
							break;
						}
						case 6:{
							break;
						}
						case 7:{
							break;
						}
						case 8:{
							break;
						}
						case 9:{
							break;
						}
						case 10:{
							cout<<endl<<"Ha salido del Menu de Jugar"<<endl;
							break;
						}
						
						
					}//switch interno del submenu
				}//while interno del submenu
				
				break;
			}
		}//switch exterior
	}//fin del while externo
	delete civilizacion_creada;
	delete civilizacion_propia;
	delete habitante_creado;
	lista_civilizaciones.erase(lista_civilizaciones.begin());
	return 0;
}
