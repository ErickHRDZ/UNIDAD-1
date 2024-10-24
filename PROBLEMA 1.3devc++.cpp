#include "iostream"
#include "iostream"

using namespace std;

int main()
{
    //Problema 1.3 Escribir programa tal que dado como datos el numero del dinosaurio su peso y su longitud
    //, expresado estos ultimos en libros y pies respectivamente
    //escriba el nombre del dinosaurio, su peso expresado en kg y la longitud expresada en metros
    
    //Declaracion de variables
    string NOMBRE;
    float PESOLIBRAS, LONGITUDENPIES;
    float PESOENKILOS, LONGITUDENMETROS;
    
    //Entrada de datos
    
    cout<<" Escribe el nombre del dinosaurio "<<"\n";
    cin >> NOMBRE;
    cout<<" Escribe el peso del dinosaurio en libras "<<"\n";
    cin >> PESOLIBRAS;
    cout<<" Escribe la longitud del dinosaurio en pies "<<"\n";
    cin >> LONGITUDENPIES;
    
    //CALCULO
    PESOENKILOS=PESOLIBRAS*1000;
    LONGITUDENMETROS=LONGITUDENPIES*0.3047;
    
    //SE IMPRIME RESULTADOS
    cout<<" El peso en kilos del dinosaurio " << NOMBRE<< "es "<<PESOENKILOS<<" y la longitud en metros es " <<LONGITUDENMETROS<<"\n";
    return 0;
}
