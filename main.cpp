#include <iostream>
using namespace std;
#include "Civilizacion.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"

#include <vector>
using std::vector;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<Civilizacion*> lista_civilizaciones;
	int opcion1 = 0;
	cout<<"-----------BIENVENIDO------------"<<endl<<endl;
	while(opcion1 != 3){
		cout<<endl<<"MENU DEL JUEGO----->"<<endl
		<<"1.Crear Civilizacion"<<endl<<"2.Jugar"<<endl<<"3.Salir"<<endl<<"Elija una Opcion:";
		cin >> opcion1;
		switch(opcion1){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
		}//switch exterior
	}//fin del while externo
	return 0;
}
