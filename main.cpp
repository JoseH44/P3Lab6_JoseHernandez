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
							if(civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()){
								habitante_creado = new Aldeano();//instancia de nuevo aldeano
								civilizacion_propia->agregarHabitante(habitante_creado);//le agrega el nuevo habitante al vector de habitantes en civilizacion
								
								cout<<endl<<"Aldeano Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
								<<civilizacion_propia->getHabitantes().size()<<endl;
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes";
							}
							
							break;
						}
						case 2:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getEstablos() >=1){
								habitante_creado = new Jinete();
								civilizacion_propia->agregarHabitante(habitante_creado);
								cout<<endl<<"Jinete Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
								<<civilizacion_propia->getHabitantes().size()<<endl;
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Establo";
							}
							
							break;
						}
						case 3:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getCuarteles() >=1){
								habitante_creado = new Arquero();
								civilizacion_propia->agregarHabitante(habitante_creado);
								cout<<endl<<"Arquero Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
								<<civilizacion_propia->getHabitantes().size()<<endl;
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Cuartel";
							}
							break;
						}
						case 4:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getCuarteles() >=1){
								habitante_creado = new Caballero();
								civilizacion_propia->agregarHabitante(habitante_creado);
								cout<<endl<<"Caballero Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
								<<civilizacion_propia->getHabitantes().size()<<endl;
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Cuartel";
							}
							break;
						}
						case 5:{
							civilizacion_propia->setCasas();
							cout<<endl<<"Casa Creada Exitosamente!"<<endl<<"El Numero de Casas Ahora es:"<<civilizacion_propia->getCasas()<<endl;
							break;
						}
						case 6:{
							civilizacion_propia->setCuarteles();
							cout<<endl<<"Cuartel Creado Exitosamente!"<<endl<<"El Numero de Cuarteles Ahora es:"<<civilizacion_propia->getCuarteles()<<endl;
							break;
						}
						case 7:{
							civilizacion_propia->setEstablos();
							cout<<endl<<"Establo Creado Exitosamente!"<<endl<<"El Numero de Establos Ahora es:"<<civilizacion_propia->getEstablos()<<endl;
							
							break;
						}
						case 8:{
							break;
						}
						case 9:{
							cout<<endl<<"---INFORMACION DE LA CIVILIZACION---"<<endl<<"Total de Oro:"<<civilizacion_propia->getOro()
								<<endl<<"Total de Alimentos:"<<civilizacion_propia->getAlimento()<<endl<<"Total de Madera:"<<civilizacion_propia->getMadera()<<endl;
							cout<<"Habitantes Actuales:"<<civilizacion_propia->getHabitantes().size()<<endl<<"Capacidad de Habitantes:"<<civilizacion_propia->getNum_Habitantes()
								<<endl;
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
