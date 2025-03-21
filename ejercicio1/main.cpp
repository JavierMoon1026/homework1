#include <iostream>
#include "ejercicio1.h"
using namespace std;

int main(){
    cout << "Ingrese el tamaño de la matriz: " << endl;
    int n;
    cin >> n;
    if(n < 2){
        cout << "El tamaño debe ser mayor a 1";
        return 1;
    }
    int** matriz = crear_matriz(n);
    imprimir_matriz(matriz, n);

    return 0;
}