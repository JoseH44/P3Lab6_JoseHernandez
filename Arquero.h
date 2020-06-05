#ifndef ARQUERO_H
#define ARQUERO_H

#include "Guerrero.h"
class Arquero : public Guerrero
{
	public:
		Arquero();
		void atacar(Habitante*);
		~Arquero();
	protected:
};

#endif
