#include <iostream>
#include <chrono>
using namespace std;

constexpr bool miProcesoAMedir(const char texto1[],const char texto2[], int index = 0){
    if(texto1[index] != texto2[index]) return false;
    if(texto1[index] == '\0') return true; //caso base: se recorrio todo el texto
    return miProcesoAMedir(texto1, texto2, index + 1);
}

int main(){
    //se definen los textos como constantes para que se evaluen en tiempo de compilacion
    constexpr const char texto1[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    constexpr const char texto2[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.1";
    constexpr const char texto3[] = "Utilice esté código y las modificaciones necesarias que crea conveniente para verificar cuanto tiempo toma la ejecución del código del ejercicio 4.2";

    //se hacen las comparaciones en tiempo de compilacion
    constexpr bool comp1 = miProcesoAMedir(texto1, texto2);
    constexpr bool comp2 = miProcesoAMedir(texto1, texto3);

    //se mide el tiempo que tarda en imprimir los resultados
    auto startTime = std::chrono::high_resolution_clock::now();
    cout << comp1 << endl;
    cout << comp2 << endl;
    auto endTime = std::chrono::high_resolution_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::nanoseconds>(
    endTime - startTime);
    cout << "miProcesoAMedir le tomó: " << elapsedTime.count() << "nanosegundos" << std::endl;

    return 0;
}

/*
El codigo del ejercicio 4.1 tardo 179597nanosegundos, en cambio el codigo del ejercicio 4,2 tardo
60525nanosegundos mucho menos. La razon por la cual el segundo codigo tarda menos es porque se hace
la comparacion de los textos en tiempo de compilacion, mientras que en el primer codigo se hace la
comparacion de los textos en tiempo de ejecucion por lo que tarda mas.
*/