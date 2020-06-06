#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante
{
	protected:
		int valor_vida;
	public:
		Habitante();
		
		//setter y getter de vida
		void setVida(int);
		int getVida();
		virtual void atacar(Habitante*);
		virtual ~Habitante();
	
};

#endif
