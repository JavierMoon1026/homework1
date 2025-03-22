#include <iostream>
#include <fstream>
#include "sistema_log.h"
using namespace std;

void logMessage(string mensaje, NivelSeveridad nivel){
    ofstream logFile("log.txt", ios::app); //se abre el archivo log.txt en modo append
    if(logFile.is_open()){
        //se escribe el nivel de severidad correspondiente junto al mensaje
        switch (nivel){
        case NivelSeveridad::DEBUG:
            logFile << "[DEBUG] " << mensaje << endl; break;
        case NivelSeveridad::INFO:
            logFile << "[INFO] " << mensaje << endl; break;
        case NivelSeveridad::WARNING:
            logFile << "[WARNING] " << mensaje << endl; break;
        case NivelSeveridad::ERROR:
            logFile << "[ERROR] " << mensaje << endl; break;
        case NivelSeveridad::CRITICAL:
            logFile << "[CRITICAL] " << mensaje << endl; break;
        case NivelSeveridad::SECURITY:
            logFile << "[SECURITY] " << mensaje << endl; break;
        }
        logFile.close();
    } else
        cerr << "error abriendo el archivo!" << endl;
}

void logMessage(string mensaje, string archivo, int linea){
    //se escribe el mensaje junto al archivo y la linea donde se encuentra el error
    string mensaje_completo = mensaje + " (Archivo: " + archivo + ", Línea: " + to_string(linea) + ")";
    logMessage(mensaje_completo, NivelSeveridad::ERROR);
}

void logMessage(string mensaje, string username){
    string mensaje_completo = mensaje + " Usuario: " + username;
    logMessage(mensaje_completo, NivelSeveridad::SECURITY);
}