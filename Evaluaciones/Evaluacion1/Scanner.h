#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "MemoryCheck.h"

class Scanner : public MemoryCheck
{
public: 
    Scanner();
    bool verificarAbierto(int numPuerto);
    
private:
    void obtenerPuertosAbiertos();
    std::vector<int> puertosAbiertos;
};
