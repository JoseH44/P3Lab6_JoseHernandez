#include "Caballero.h"

Caballero::Caballero():Guerrero()
{
	this->valor_ataque = 10;
}

void Caballero::atacar(Habitante* victima){
	int potencia;
	potencia = 10 + (0.095*this->valor_vida);//determina la potencia del golpe
	int vidaDespues;
	vidaDespues = victima->getVida() - potencia;//le resta a la vida de la victima la potencia adquirida
	victima->setVida(vidaDespues);
}

Caballero::~Caballero()
{
}
