#include <iostream>
#include "ejercicio1.h"
using namespace std;

void imprimir_matriz(int** matriz, int n){
    for(int i = n*n - 1; i >= 0; i--){
        int j = i / n;
        int k = i % n;
        cout << "M[" << j << "][" << k << "] = " << matriz[j][k] << endl;
    }
}

