#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitante.h"
class Guerrero : public Habitante
{
	protected:
		int valor_ataque;
	public:
		Guerrero();
		
		//setter y getter de valor de ataque
		void setValorAtaque(int);
		int getValorAtaque();
		
		
		~Guerrero();
	
};

#endif
