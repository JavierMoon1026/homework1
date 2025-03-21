#include <iostream>
#include <fstream>
using namespace std;

enum class NivelSeveridad{DEBUG, INFO, WARNING, ERROR, CRITICAL, SECURITY};

void logMessage(string mensaje, NivelSeveridad nivel);

void logMessage(string mensaje, string archivo, int linea);

void logMessage(string mensaje, string username);
