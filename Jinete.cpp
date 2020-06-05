#include "Jinete.h"

Jinete::Jinete():Guerrero()
{
	this->valor_ataque = 30;
}

void Jinete::atacar(Habitante* victima){
	int potencia;
	potencia = 30 + (0.065*this->valor_vida);//determina la potencia del golpe
	int vidaDespues;
	vidaDespues = victima->getVida() - potencia;//le resta a la vida de la victima la potencia adquirida
	victima->setVida(vidaDespues);
}

Jinete::~Jinete()
{
}
