#include <iostream>
#include "ejercicio1.h"
using namespace std;

int main(){
    //se le pide al usuario ingresar el tamaño de la matriz
    cout << "Ingrese el tamaño de la matriz: " << endl;
    int n;
    cin >> n;
    //se crea la matriz con tamaño n
    int** matriz = crear_matriz(n);
    //se imprime la matriz
    imprimir_matriz(matriz, n);

    return 0;
}