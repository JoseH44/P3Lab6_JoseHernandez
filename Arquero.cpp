#include "Arquero.h"

Arquero::Arquero():Guerrero()
{
	this->valor_ataque = 20;
}

void Arquero::atacar(Habitante* victima){
	int potencia;
	potencia = 20 + (0.085*this->valor_vida);//determina la potencia del golpe
	int vidaDespues;
	vidaDespues = victima->getVida() - potencia;//le resta a la vida de la victima la potencia adquirida
	victima->setVida(vidaDespues);
}

Arquero::~Arquero()
{
}
