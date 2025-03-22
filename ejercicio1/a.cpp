#include <iostream>
#include "ejercicio1.h"
using namespace std;

int** crear_matriz(int n){
    //se crea una matriz nxn
    int** matriz;
    //se utiliza un try y catch para ver si tengo memoria suficiente para la matriz
    try{
        //se reserva memoria para n filas
        matriz = new int*[n];
        //se reserva n columnas a cada fila
        for(int i = 0; i < n; i++){
            matriz[i] = new int[n];
        }

        //se agregan los numeros a cada celda
        int x = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            matriz[i][j] = x;
            x++;
        }
        }
    } catch(const bad_alloc&){
        delete[] matriz;
        cerr << "Error: memoria insuficiente" << endl;
        return nullptr;
    }

    return matriz;
}


