#include "Conjunto.h"
#include <fstream>

Conjunto::Conjunto() {
	for (int i = 0; i < 50; i++) {
		conjunto[i] = 0;
	}
	cantElementos = 0;
}

Conjunto::~Conjunto() {

}

 void Conjunto::createManual() {
	 int cant, x;

	 cout << "Ingrese la cantidad de elementos a ingresar: ";
	 cin >> cant;
	 while (cant < 0) {
		 cout << "No se permiten numeros negativos :(" << endl;
		 cout << "Ingrese cant de elementos a ingresar: ";
		 cin >> cant;
	 }

	 while (cin.fail()) {
		 cout << "No se permiten letras!!" << endl;
		 cin.clear();
		 cin.ignore(256, '\n');
		 cout << "Ingrese cantidad de elementos: ";
		 cin >> cant;
	 }

	 for (int i = 0; i < cant; i++)
	 {
		 cout << "Ingrese valor " << i << ": ";
		 cin >> x;
		 while (cin.fail()) {
			 cout << "No se permiten valores que no sean enteros!!!!!" << endl;
			 cin.clear();
			 cin.ignore(256, '\n');
			 cout << "Ingrese un valor: ";
			 cin >> x;
		 }
			conjunto[cantElementos] = x;
			cantElementos++;	 
	 }
}

 void Conjunto::generarConjunto(){
	 int opc;
	 string nombreArch, txt;
	 txt = ".txt";

	 cout << "1.Ingresar datos MANUAL  \n2.Ingresar datos por ARHCIVO. \nOpcion: ";
	 cin >> opc;

	 if (opc == 1) {
		 createManual();
	 }
	 else {

		 cout << "Ingrese nombre del archivo (incluir.txt): ";
		 cin >> nombreArch;
		 std::size_t found = nombreArch.find(txt);
		 if (found != string::npos) {
			createArchivo(nombreArch);
		 }
		 else {
			 createArchivo(nombreArch + ".txt");
		 }
	 }
	 print();
	 cout << endl;
 }

void Conjunto::print() {
	std::cout << "{";
	for (int i = 0; i < cantElementos; i++)
	{
		std::cout << conjunto[i] << " ";
	}
	std::cout << "}" << std::endl;
}

void Conjunto::createArchivo(string nombreArchivo){

	ifstream arch(nombreArchivo);
	string line;
	string delimiter = ",";

	if (arch.is_open()) {
		getline(arch, line);
	}


	size_t pos = 0;
	string token;
	int x;
	while ((pos = line.find(delimiter)) != string::npos) {
		token = line.substr(0, pos);
		//std::cout << token << std::endl;

		x = stoi(token);

		conjunto[cantElementos] = x;
		cantElementos++;

		line.erase(0, pos + delimiter.length());
	}
}
