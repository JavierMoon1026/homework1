#include <iostream>
#include <string>
#include <chrono>
using namespace std;

bool miProcesoAMedir(string texto1, string texto2){

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