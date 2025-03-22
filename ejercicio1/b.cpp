#include <iostream>
#include "ejercicio1.h"
using namespace std;

/*
Razonamiento del ejercicio:
    - se utiliza un for loop que empieza en n*n - 1 y termina en cero para recorrer de forma inversa toda la matriz
    - se hace una divicion entera para ir por filas ya que cada fila contiene n elementos
    - se hace el modulo para ir por columnas, que nos da la posicion dentro de la fila
*/

//se imprimen todos las celdas de la matriz de mayor a menor
void imprimir_matriz(int** matriz, int n){
    for(int i = n*n - 1; i >= 0; i--){
        //se calcula la fila
        int j = i / n;
        //se calcula la columna
        int k = i % n;
        cout << "M[" << j << "][" << k << "] = " << matriz[j][k] << endl;
    }
}

