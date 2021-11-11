#pragma once
#include <iostream>
#include <string>

using namespace std;

class Conjunto{
public:
	Conjunto();
	~Conjunto();

	void print();
	void createArchivo(string nombreArchivo);
	void createManual();
	void generarConjunto();

	int conjunto[50];
	int cantElementos;

};

