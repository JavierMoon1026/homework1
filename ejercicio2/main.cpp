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

    logMessage("Access Denied", "usuario no valido");

    try{
        throw runtime_error("Fallo");
    } catch(const exception& e){
        logMessage(e.what(), __FILE__, __LINE__);
        return 1;
    }
    return 0;
}