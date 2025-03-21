#include <iostream>
#include "ejercicio1.h"
using namespace std;

int** crear_matriz(int n){
    int** matriz;
    try{
        int** matriz = new int*[n];
        for(int i = 0; i < n; i++){
        matriz[i] = new int[n];
        }

        int x = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            matriz[i][j] = x;
            x++;
        }
        }
    } catch(const bad_alloc){
        delete[] matriz;
        cerr << "Error: memoria insuficiente";
        return nullptr;
    }

    return matriz;
}


