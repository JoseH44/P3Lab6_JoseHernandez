#include "Habitante.h"

Habitante::Habitante(){
	this->valor_vida = 100;
}

void Habitante::setVida(int newVida){
	this->valor_vida = newVida;
}

int Habitante::getVida(){
	return (valor_vida);
}

Habitante::~Habitante()
{
}
