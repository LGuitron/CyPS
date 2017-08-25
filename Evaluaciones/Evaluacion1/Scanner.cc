#include "Scanner.h"

Scanner::Scanner()
{
    obtenerPuertosAbiertos();
}


void Scanner::obtenerPuertosAbiertos()
{
    std::vector<int> puertos;
    //Ejecuta nmap para ver puertos abiertos
    FILE* file = popen( "nmap -sTU localhost | grep -i open", "r" ) ;
    if( file )
    {
        std::ostringstream stm ;

        constexpr std::size_t MAX_LINE_SZ = 1024 ;
        char line[MAX_LINE_SZ] ;

        while( fgets( line, MAX_LINE_SZ, file ) ) stm << line;
        pclose(file) ;
        
        //Salida del comando anterior se guarda en un archivo//
        std::ofstream myfile;
        myfile.open ("salida.txt");
        myfile << stm.str();
        myfile.close();
        
        
        //Obtiene solamente los numeros cortando el archivo con diagonales//
        FILE* file2 = popen( "cut -d '/' -f1 salida.txt", "r" ) ;
        if( file2 )
        {
            std::ostringstream stm2 ;

            char line2[MAX_LINE_SZ] ;

            while( fgets( line2, MAX_LINE_SZ, file2 ) )
                puertos.push_back(atoi(line2));

            pclose(file2) ;
            
            //Borra el archivo de salida
            system("rm salida.txt");
            puertosAbiertos = puertos;
        }
    }
}
bool Scanner::verificarAbierto(int numPuerto)
{
    for (int i=0;i<puertosAbiertos.size();i++)
    {
        if(puertosAbiertos[i]==numPuerto)
            return true;
    }
    return false;
}
