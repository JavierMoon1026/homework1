#include <iostream>
#include <cstring>
#include <chrono>
using namespace std;

constexpr bool miProcesoAMedir(const char* texto1, char* texto2, int index = 0){
    if(strlen(texto1) != strlen(texto2)) return false;
    if(index == (int)strlen(texto1)) return true;
    if(texto1[index] != texto2[index]) return false;
    return miProcesoAMedir(texto1, texto2, index + 1);
}

int main(){
    auto startTime = std::chrono::high_resolution_clock::now();
    char* texto1 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    char* texto2 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    char* texto3 = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.2";
    bool comp1 = miProcesoAMedir(texto1, texto2);
    bool comp2 = miProcesoAMedir(texto1, texto3);
    int len = sizeof(texto1);
    cout << comp1 << endl;
    cout << comp2 << endl;
    auto endTime = std::chrono::high_resolution_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::nanoseconds>(
    endTime - startTime);
    cout << "miProcesoAMedir le tomó: " << elapsedTime.count() << "nanosegundos" << std::endl;
    return 0;


}