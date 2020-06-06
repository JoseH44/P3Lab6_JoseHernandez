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

#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<Civilizacion*> lista_civilizaciones;
	int opcion1 = 0;
	cout<<"-----------BIENVENIDO------------"<<endl<<endl;
	Civilizacion* civilizacion_creada = NULL;
	Civilizacion* civilizacion_propia = NULL;
	Habitante* habitante_creado = NULL;
	Civilizacion* civilizacion_atacada = NULL;
	
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
				while(posCivilizacion < 0 || posCivilizacion > lista_civilizaciones.size()){
					cout<<endl<<"Numero Invalido"<<endl;
					cout<<endl<<"Escoja el indice de la Civilizacion con la cual Jugara:";
					cin >> posCivilizacion;
				}
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
								if(civilizacion_propia->getAlimento() >= 25){
									habitante_creado = new Aldeano();//instancia de nuevo aldeano
									civilizacion_propia->agregarHabitante(habitante_creado);//le agrega el nuevo habitante al vector de habitantes en civilizacion
									
									cout<<endl<<"Aldeano Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
									<<civilizacion_propia->getHabitantes().size()<<endl;
									civilizacion_propia->setRestarAlimento(25);
								}else{
									
								}
								
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes";
							}
							
							break;
						}
						case 2:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getEstablos() >=1){
								if((civilizacion_propia->getAlimento() >= 75 && civilizacion_propia->getMadera() >= 5) && civilizacion_propia->getOro()>=20){
									habitante_creado = new Jinete();
									civilizacion_propia->agregarHabitante(habitante_creado);
									cout<<endl<<"Jinete Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
									<<civilizacion_propia->getHabitantes().size()<<endl;
									civilizacion_propia->setRestarMadera(5);
									civilizacion_propia->setRestarOro(20);
									civilizacion_propia->setRestarAlimento(75);	
								}else{
									cout<<endl<<"No tiene Recursos Suficientes"<<endl;
								}
															
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Establo";
							}
							
							break;
						}
						case 3:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getCuarteles() >=1){
								if((civilizacion_propia->getAlimento() >= 50 && civilizacion_propia->getMadera() >= 10) && civilizacion_propia->getOro()>=10){
									habitante_creado = new Arquero();
									civilizacion_propia->agregarHabitante(habitante_creado);
									cout<<endl<<"Arquero Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
									<<civilizacion_propia->getHabitantes().size()<<endl;
									civilizacion_propia->setRestarMadera(10);
									civilizacion_propia->setRestarOro(10);
									civilizacion_propia->setRestarAlimento(50);	
								}else{
									cout<<endl<<"No tiene Recursos Suficientes"<<endl;
								}
								
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Cuartel";
							}
							break;
						}
						case 4:{
							if((civilizacion_propia->getNum_Habitantes() > civilizacion_creada->getHabitantes().size()) && civilizacion_propia->getCuarteles() >=1){
								if((civilizacion_propia->getAlimento() >= 50 && civilizacion_propia->getMadera() >= 5) && civilizacion_propia->getOro()>=15){
									habitante_creado = new Caballero();
									civilizacion_propia->agregarHabitante(habitante_creado);
									cout<<endl<<"Caballero Creado Exitosamente!"<<endl<<"El Numero de Habitantes Ahora es:"
									<<civilizacion_propia->getHabitantes().size()<<endl;
									civilizacion_propia->setRestarMadera(5);
									civilizacion_propia->setRestarOro(15);
									civilizacion_propia->setRestarAlimento(50);	
								}else{
									cout<<endl<<"No tiene Recursos Suficientes"<<endl;
								}
								
							}else{
								cout<<endl<<"No Tiene Suficiente Espacio para Albergar Mas Habitantes o no Posee un Cuartel";
							}
							break;
						}
						case 5:{
							if(civilizacion_propia->getMadera() >= 5){
								civilizacion_propia->setCasas();
								cout<<endl<<"Casa Creada Exitosamente!"<<endl<<"El Numero de Casas Ahora es:"<<civilizacion_propia->getCasas()<<endl;
								civilizacion_propia->setRestarMadera(50);
							}else{
								cout<<endl<<"No tiene Recursos Suficientes"<<endl;
							}
							
							break;
						}
						case 6:{
							if(civilizacion_propia->getMadera() >= 200 && civilizacion_propia->getOro()>=50){
								civilizacion_propia->setCuarteles();
								cout<<endl<<"Cuartel Creado Exitosamente!"<<endl<<"El Numero de Cuarteles Ahora es:"<<civilizacion_propia->getCuarteles()<<endl;
								civilizacion_propia->setRestarMadera(200);
								civilizacion_propia->setRestarOro(50);
							}else{
								cout<<endl<<"No tiene Recursos Suficientes"<<endl;
							}
							
							break;
						}
						case 7:{
							if(civilizacion_propia->getMadera() >= 150 && civilizacion_propia->getOro()>=50){
								civilizacion_propia->setEstablos();
								cout<<endl<<"Establo Creado Exitosamente!"<<endl<<"El Numero de Establos Ahora es:"<<civilizacion_propia->getEstablos()<<endl;
								civilizacion_propia->setRestarMadera(150);
								civilizacion_propia->setRestarOro(50);
							}else{
								cout<<endl<<"No tiene Recursos Suficientes"<<endl;
							}
							
							break;
						}
						case 8:{
							int num_random;//numero random de la llave
							srand(time(NULL));
							int posAtaque;
							vector<Habitante*> atacantes;
							Aldeano* aldeanoTemp2 = NULL;
							Habitante* temporalHabitante2 = NULL;
							
							
							
							//lista las civilizaciones
							for(int i = 0;i < lista_civilizaciones.size();i++){
								cout<<i<<"-"<<lista_civilizaciones[i]->getNombre()<<endl;
							}
							cout<<endl<<"Escoja el indice de la Civilizacion a la cual Atacara:";
							cin >> posAtaque;
							while(posAtaque < 0 || posAtaque > lista_civilizaciones.size()){
								cout<<endl<<"Numero Invalido"<<endl;
								cout<<endl<<"Escoja el indice de la Civilizacion a la cual Atacara:";
								cin >> posAtaque;
							}
							//asigna la civilizacion a la que atacaran
							civilizacion_atacada = lista_civilizaciones[posAtaque];
							cout<<endl<<"Civilizacion "<<civilizacion_atacada->getNombre()<<" Seleccionada!"<<endl;
							
							
							int opcion3 = 0;
							while(opcion3 != 2){
								cout<<endl<<"1.Emparejar"<<endl<<"2.Abandonar"<<endl<<"Elija una Opcion:";
								cin >> opcion3;
								switch(opcion3){
									case 1:{
										//agrega los atacantes al vector de la civilizacion que atacara
										for(int i = 0;i < civilizacion_propia->getHabitantes().size();i++){
											temporalHabitante2 = civilizacion_propia->getHabitantes()[i];
											aldeanoTemp2 = dynamic_cast<Aldeano*>(temporalHabitante2);
											if(aldeanoTemp2 == 0){
												
												num_random = 0 + rand()% ((civilizacion_atacada->getHabitantes().size()+1)-1);
												
												temporalHabitante2->atacar(civilizacion_atacada->getHabitantes()[num_random]);
												civilizacion_atacada->getHabitantes()[num_random]->atacar(temporalHabitante2);
												
												if(temporalHabitante2->getVida() == 0 || temporalHabitante2->getVida() < 0){
													civilizacion_propia->eliminarHabitante(i);
													civilizacion_propia->setRestarHabitante();
												}//si la vida del atacante llega a 0 lo elimina
												
												//muestra informacion de las civilizaciones
												if(civilizacion_atacada->getHabitantes()[num_random]->getVida() == 0 || 
												civilizacion_atacada->getHabitantes()[num_random]->getVida() < 0){
													civilizacion_atacada->eliminarHabitante(num_random);
													civilizacion_atacada->setRestarHabitante();
												}
												
												cout<<endl<<"Habitantes restantes de la Civilizacion "<<civilizacion_propia->getNombre()<<":"<<
													civilizacion_propia->getNum_Habitantes()<<endl;
												cout<<endl<<"Habitantes restantes de la Civilizacion "<<civilizacion_atacada->getNombre()<<":"<<
													civilizacion_atacada->getNum_Habitantes()<<endl;
													
												if(civilizacion_atacada->getHabitantes().size() == 0){
													delete lista_civilizaciones[posAtaque];
													lista_civilizaciones.erase(lista_civilizaciones.begin()+posAtaque);
													
												}
												if(civilizacion_propia->getHabitantes().size() == 0){
													delete lista_civilizaciones[i];
													lista_civilizaciones.erase(lista_civilizaciones.begin()+i);
												}
													
											}
										}
										
										break;
									}
									case 2:{
										cout<<endl<<"Ha Detenido La Guerra"<<endl;
										break;
									}
								}//switch de la guerra
							}
							
							delete aldeanoTemp2;
							delete temporalHabitante2;
							break;
						}
						case 9:{
							int num_aldeanos = 0;
							Aldeano* aldeanoTemp = NULL;
							Habitante* temporalHabitante = NULL;
							for(int i = 0;i < civilizacion_propia->getHabitantes().size();i++){
								temporalHabitante = civilizacion_propia->getHabitantes()[i];
								aldeanoTemp = dynamic_cast<Aldeano*>(temporalHabitante);
								if(aldeanoTemp != 0){
									num_aldeanos++;
								}
							}
							int newOro,newAlimento,newMadera;
							newOro = num_aldeanos * 3;
							newAlimento = num_aldeanos * 5;
							newMadera = num_aldeanos * 4;
							civilizacion_propia->setSumarOro(newOro);
							civilizacion_propia->setSumarMadera(newMadera);
							civilizacion_propia->setSumarAlimento(newAlimento);
							cout<<endl<<"---INFORMACION DE LA CIVILIZACION---"<<endl<<"Total de Oro:"<<civilizacion_propia->getOro()
								<<endl<<"Total de Alimentos:"<<civilizacion_propia->getAlimento()<<endl<<"Total de Madera:"<<civilizacion_propia->getMadera()<<endl;
							cout<<"Habitantes Actuales:"<<civilizacion_propia->getHabitantes().size()<<endl<<"Capacidad de Habitantes:"<<civilizacion_propia->getNum_Habitantes()
								<<endl<<endl;
							delete aldeanoTemp;
							delete temporalHabitante;
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
	delete civilizacion_atacada;
	lista_civilizaciones.erase(lista_civilizaciones.begin());
	return 0;
}
