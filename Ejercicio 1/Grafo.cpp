#include "Grafo.h"


void grafo::Inicializar(){
	this->primero;
}

bool grafo::Vacio() {

	if (this->primero == NULL)
	{
		return true;
	}
	else {
		return false;
	}
}

