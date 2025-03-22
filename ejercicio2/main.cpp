#include <iostream>
#include <fstream>
#include "sistema_log.h"
using namespace std;

int main(){
    //se registran menjases con distintos niveles de severidad
    logMessage("Inicio del sistema", NivelSeveridad::DEBUG);
    logMessage("Inicio del sistema", NivelSeveridad::INFO);
    logMessage("Inicio del sistema", NivelSeveridad::WARNING);
    logMessage("Inicio del sistema", NivelSeveridad::ERROR);
    logMessage("Inicio del sistema", NivelSeveridad::CRITICAL);

    //se registra un acceso fallido de nivel de severidad security
    logMessage("Access Denied", "usuario no valido");

    try{
        //se simula un error en tiempo de ejecucion
        throw runtime_error("Fallo");
    } catch(const exception& e){
        //se registra el error con el archivo y la linea
        logMessage(e.what(), "main.cpp", 20);
        return 1;
    }
    return 0;
}