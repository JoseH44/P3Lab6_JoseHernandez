#include "Guerrero.h"

Guerrero::Guerrero():Habitante()
{
}



void Guerrero::setValorAtaque(int newValor){
	this->valor_ataque = newValor;
}

Guerrero::getValorAtaque(){
	return valor_ataque;
}

Guerrero::~Guerrero()
{
}
