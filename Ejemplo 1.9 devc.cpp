#include "iostream"
#include <stdio.h>

using namespace std;
int main()
{
    inr NUM,CUA,CUB;
    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.9 Calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
    //Se pide el valor de NUM
    cout << "Por favor ingrese el vslor del NUMERO: " << "\n";
    //Se asigna el primer valor A
    cin >> NUM;
    //Resolvamos la formula del problema
    CUA=NUM*NUM;
    CUB=NUM*CUA;
    //Enviamos el resultado de CUA Y CUB a la pantalla
    cout << "El cuadrado de "<<NUM<<" es: "<<CUA<<" y el cubo es: "<<CUB<<end1;
    return 0;
}
