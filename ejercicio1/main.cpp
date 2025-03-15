#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main(){
    cout << "Ingrese el tamaño de la matriz: " << endl;
    int n;
    cin >> n;
    int** matriz = crear_matriz(n);
    imprimir_matriz(matriz, n);

    return 0;
}