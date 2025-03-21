#include <iostream>
#include <chrono>
using namespace std;

constexpr bool miProcesoAMedir(const char texto1[],const char texto2[], int index = 0){
    if(texto1[index] != texto2[index]) return false;
    if(texto1[index] == '\0') return true;
    return miProcesoAMedir(texto1, texto2, index + 1);
}

int main(){
    constexpr const char texto1[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    constexpr const char texto2[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    constexpr const char texto3[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.2";
    constexpr bool comp1 = miProcesoAMedir(texto1, texto2);
    constexpr bool comp2 = miProcesoAMedir(texto1, texto3);

    auto startTime = std::chrono::high_resolution_clock::now();
    cout << comp1 << endl;
    cout << comp2 << endl;
    auto endTime = std::chrono::high_resolution_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::nanoseconds>(
    endTime - startTime);
    cout << "miProcesoAMedir le tomó: " << elapsedTime.count() << "nanosegundos" << std::endl;

    return 0;
}