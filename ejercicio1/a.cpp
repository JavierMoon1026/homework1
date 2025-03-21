#include <iostream>
#include "ejercicio1.h"
using namespace std;

int** crear_matriz(int n){
    int** matriz;
    //se utiliza un try y catch para ver si tengo memoria suficiente para la matriz
    try{
        //se crea una matriz que es un puntero a otro puntero
        matriz = new int*[n]; //se hace un array de n filas
        for(int i = 0; i < n; i++){
            matriz[i] = new int[n];
        } //se agrega n columnas a cada fila

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


