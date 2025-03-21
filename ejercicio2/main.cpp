#include <iostream>
#include <fstream>
#include "sistema_log.h"
using namespace std;

int main(){
    logMessage("Inicio del sistema", NivelSeveridad::DEBUG);
    logMessage("Inicio del sistema", NivelSeveridad::INFO);
    logMessage("Inicio del sistema", NivelSeveridad::WARNING);
    logMessage("Inicio del sistema", NivelSeveridad::ERROR);
    logMessage("Inicio del sistema", NivelSeveridad::CRITICAL);

    return 0;
}