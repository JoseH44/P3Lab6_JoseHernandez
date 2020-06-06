#include "Civilizacion.h"
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"

Civilizacion::Civilizacion()
{
}

Civilizacion::Civilizacion(string pNombre){
	this->nombre = pNombre;
	this->cant_oro = 50;
	this->cant_madera = 50;
	this->cant_alimento = 50;
	this->num_casas = 2;
	this->num_habitantes = 10;
	for(int i = 0; i < 5;i++){
		Habitante* aldeano1 = new Aldeano();
		lista_habitantes.push_back(aldeano1);
	}
	/*Habitante* aldeano1 = new Aldeano();
	Habitante* aldeano2 = new Aldeano();
	Habitante* aldeano3 = new Aldeano();
	Habitante* aldeano4 = new Aldeano();
	
	lista_habitantes.push_back(aldeano1);
	lista_habitantes.push_back(aldeano2);
	lista_habitantes.push_back(aldeano3);
	lista_habitantes.push_back(aldeano4);
	*/
	Habitante* jinete1 = new Jinete();
	lista_habitantes.push_back(jinete1);
	
}

//setter y getter de civilizacion
void Civilizacion::setNombre(string pNombre){
	nombre = pNombre;
}

string Civilizacion::getNombre(){
	return nombre;
}

//setter y getter de oro
void Civilizacion::setSumarOro(int Oro_conseguido){
	cant_oro += Oro_conseguido;
}

void Civilizacion::setRestarOro(int Oro_gastado){
	cant_oro -= Oro_gastado;
}
		
int Civilizacion::getOro(){
	return cant_oro;
}

//setter y getter de madera
void Civilizacion::setSumarMadera(int Madera_conseguida){
	cant_madera += Madera_conseguida;
}

void Civilizacion::setRestarMadera(int Madera_gastada) {
	cant_madera -= Madera_gastada;
}

int Civilizacion::getMadera(){
	return cant_madera;
}

//setter y getter de alimento
void Civilizacion::setSumarAlimento(int alimento_conseguido){
	cant_alimento += alimento_conseguido;
}

void Civilizacion::setRestarAlimento(int alimento_gastado){
	cant_alimento -= alimento_gastado;
}

int Civilizacion::getAlimento(){
	return cant_alimento;
}

vector<Habitante*> Civilizacion::getHabitantes(){
	return lista_habitantes;
}

//setter y getter de numero de habitantes
void Civilizacion::setNum_Habitantes(){
	num_habitantes = num_casas * 5;
}
int Civilizacion::getNum_Habitantes(){
	return num_habitantes;
}

//setter y getter de numero de casas
void Civilizacion::setCasas(){
	num_casas++;
}
int Civilizacion::getCasas(){
	return num_casas;
}

//setter y getter de numero de cuarteles
void Civilizacion::setCuarteles(){
	num_cuarteles++;
}

int Civilizacion::getCuarteles(){
	return num_cuarteles;
}

//setter y getter de numero de establos
void Civilizacion::setEstablos(){
	num_establos++;
}

int Civilizacion::getEstablos(){
	return num_establos;
}

void Civilizacion::agregarHabitante(Habitante* pHabitante){
	lista_habitantes.push_back(pHabitante);
}

void Civilizacion::eliminarHabitante(int index){
	lista_habitantes.erase(lista_habitantes.begin()+index);
}

Civilizacion::~Civilizacion()
{
}
