#include <iostream>
#include <string>
#include <chrono>
using namespace std;

/*
En este ejercicio se opto por usar strings porque son mas faciles de usar 
al no tener que asignarles memoria como cuando se utilizan punteros. Al mismo
tiempo al usar la libreria de string, nos permite usar funciones como length()
que facilita la resolucion del ejercicio.
*/
bool miProcesoAMedir(string texto1, string texto2, int index = 0){
    if(texto1.length() != texto2.length()) return false;
    if(index == texto1.length()) return true;
    if(texto1[index] != texto2[index]) return false;
    return miProcesoAMedir(texto1, texto2, index + 1);
}

int main(){
    auto startTime = std::chrono::high_resolution_clock::now();
    string texto1 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    string texto2 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    string texto3 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.2";
    bool comp1 = miProcesoAMedir(texto1, texto2);
    bool comp2 = miProcesoAMedir(texto1, texto3);
    int len = texto1.length();
    cout << comp1 << endl;
    cout << comp2 << endl;
    auto endTime = std::chrono::high_resolution_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::nanoseconds>(
    endTime - startTime);
    cout << "miProcesoAMedir le tomó: " << elapsedTime.count() << "nanosegundos" << std::endl;
    return 0;
}