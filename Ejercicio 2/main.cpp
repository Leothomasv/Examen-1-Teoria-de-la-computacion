#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;



char matrix[6][6];


void cargarMatrix() {
    ifstream archivo;
        archivo.open("tabla.txt");

        if (!archivo) {
            cout << "El archivo no se pudo abrir";
        }
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                archivo >> matrix[i][j];
            }
        }
}



void imprimirMatrix() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
                
                if (matrix[i][j] == '1') {//piedra
                    printf("\x1B[31m %c\033[0m", matrix[i][j]);
                }else if (matrix[i][j] == '2') {//papel
                    printf("\x1B[33m %c\033[0m", matrix[i][j]);
                }else if (matrix[i][j] == '3') {//tijera
                    printf("\x1B[35m %c\033[0m", matrix[i][j]);
                }else if (matrix[i][j] == '4') {//lartija
                    printf("\x1B[32m %c\033[0m", matrix[i][j]);
                }else if (matrix[i][j] == '5') {//spock
                    printf("\x1B[34m %c\033[0m", matrix[i][j]);
                }else{
                    cout << " " << matrix[i][j];
                }
        }
        cout << endl;
    }
}

void jugar(int j1, int j2) {

    if (matrix[j1][j2] == 'W') {
        cout << "Jugador 1 GANA!!!!!" << endl;
    }
    else if (matrix[j1][j2] == 'L') {
        cout << "Jugador 2 GANA!!!!!" << endl;
    }
    else {
        cout << "EMPATE!!!" << endl;
    }
}

int main() {
    cargarMatrix();
    


    int jugador1, jugador2;
    bool seguir = true;
    char salir;

    while (seguir) {
       cout << "======= EJERCICIO 2========" << endl;
       imprimirMatrix();


       cout << "============================" << endl;

        cout << "Opciones para jugar: " << endl;
        cout << "Piedra -> 1" << endl;
        cout << "Papel -> 2" << endl;
        cout << "Tijera -> 3" << endl;
        cout << "Lagartija -> 4" << endl;
        cout << "Spock -> 5" << endl;
        cout << "<=======================>" << endl;
        cout << endl;


        cout << "Jugador 1 ingrese opcion: ";
        cin >> jugador1;
        cout << "Jugador 2 ingrese opcion: ";
        cin >> jugador2;
        cout << endl;

        jugar(jugador1, jugador2);
        cout << endl;

        cout << "Desea continuar? y/n: ";
        cin >> salir;

        if (salir == 'y') {
            seguir = true;
            system("cls");
        }
        else {
            seguir = false;
        }

    }










    
    
}