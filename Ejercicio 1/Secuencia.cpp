#include "Secuencia.h"

Secuencia::Secuencia(Conjunto, Conjunto) {

}


void Secuencia::print(Conjunto V, Conjunto E){
	Secuencia sec();

	cout << "( ";
	//Conjunto V
	std::cout << "{";
	for (int i = 0; i < V.cantElementos; i++)
	{
		std::cout << V.conjunto[i] << " ";
	}
	std::cout << "} " << ",";

	//Conjunto E
	std::cout << " {";
	for (int i = 0; i < E.cantElementos; i++)
	{
		std::cout << E.conjunto[i] << " ";
	}
	std::cout << "} ";
	std::cout << ")" << endl;
}
