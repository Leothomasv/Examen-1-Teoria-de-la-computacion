#pragma once
#include <iostream>
#include "Secuencia.h"

using namespace std;

class Arista;

class Vertice {
public:
	Secuencia* sec;
	Vertice* siguiente;
	Arista* adyacente;
	int nombre;
	friend class Grafo;
};

class Arista {
public:
	Arista* siguiente;
	Vertice* adyacente;
	int peso;
	friend class Grafo;
};


class grafo{
	Vertice* primero;

public:
	void Inicializar();
	bool Vacio();
	//int Tamano();
	//Vertice* GetVertice(string nombre);
	//void InsertaArista(Vertice* origen, Vertice* destino, int peso);
	//void crearVertice(int nombre);
	//void imprimirGrafo();

	//void llenarVertices(Conjunto);

};

