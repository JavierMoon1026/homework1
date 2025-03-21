#include <iostream>
#include "ejercicio1.h"
using namespace std;

int main(){
    cout << "Ingrese el tamaño de la matriz: " << endl;
    int n = 3;
    cin >> n;
    int** matriz = crear_matriz(n);
    imprimir_matriz(matriz, n);

    return 0;
}