#include <iostream>
#include "Conjunto.h"
#include "Secuencia.h"
#include "Grafo.h"



int main() {

	Conjunto c1, c2;

	//nombre de los archivos conjunto1, conjunto2


	cout << "Ingrese valores para el conjunto V: " << endl;
	c1.generarConjunto();
	cout << "Ingrese valores para el conjunto E: " << endl;
	c2.generarConjunto();

	Secuencia sec(c1, c2);
	cout << "Secuencia creada:" << endl;
	sec.print(c1, c2);


	//imprimir grafo
	cout << endl
}




