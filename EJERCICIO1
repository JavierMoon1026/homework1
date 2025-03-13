#include <iostream>
using namespace std;

int** crear_matriz(int n){
    int** matriz = new int*[n];
    for(int i; i < n; i++){
        matriz[i] = new int[n];
    }

    int x = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = x;
            x++;
        }
    }

    return matriz;
}

int main(){
    int** matriz = crear_matriz(2);
    cout << matriz[0][0] << endl;
    cout << matriz[1][0] << endl;
}
