#include "Habitante.h"

Habitante::Habitante()
{
}
Habitante::Habitante(int pVida){
	this->valor_vida = pVida;
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
