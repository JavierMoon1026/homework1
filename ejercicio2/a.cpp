#include <iostream>
#include <fstream>
using namespace std;

enum class NivelSeveridad{DEBUG, INFO, WARNING, ERR, CRITICAL, SECURITY};

void logMessage(string mensaje, NivelSeveridad nivel){
    ofstream logFile("log.txt");
    if(logFile.is_open()){
        switch (nivel){
        case NivelSeveridad::DEBUG:
            logFile << "[DEBUG]" << mensaje << endl; break;
        case NivelSeveridad::INFO:
            logFile << "[INFO]" << mensaje << endl; break;
        case NivelSeveridad::WARNING:
            logFile << "[WARNING]" << mensaje << endl; break;
        case NivelSeveridad::ERR:
            logFile << "[ERR]" << mensaje << endl; break;
        case NivelSeveridad::CRITICAL:
            logFile << "[CRITICAL]" << mensaje << endl; break;
        case NivelSeveridad::SECURITY:
            logFile << "[SECURITY]" << mensaje << endl; break;
        default:
            break;
        }
        logFile.close();
    } else
        cerr << "error abriendo el archivo!\n";
}

int main(){
    logMessage("hello", NivelSeveridad::CRITICAL);
    return 0;
}