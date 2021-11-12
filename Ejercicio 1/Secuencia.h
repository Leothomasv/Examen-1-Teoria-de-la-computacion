#pragma once
#include "conjunto.h"
class Secuencia
{
public:
	Secuencia(Conjunto, Conjunto);
	Conjunto* conjuntoE;
	Conjunto* conjuntoV;

	void print(Conjunto, Conjunto);

};

