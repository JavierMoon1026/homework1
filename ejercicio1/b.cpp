#include <iostream>
using namespace std;

void imprimir_matriz(int** matriz, int n){
    for(int i = n*n; i > 0; i--){
        int j = i / n;
        int k = i % n;
        cout << matriz[j][k] << endl;
    }
}

