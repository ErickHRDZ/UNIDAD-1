#include "iostream"
#include <stdio.h>

using namespace std;

ibt main()
{
    int A,B;
    float RES;
    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.7 Escribir el resultado de la expresion" << \n":
         
         //se declaran los numeros que se sumaran (pueden ser decimales)
         
         //Se pide el primer numero
         cout << "Por favor ingrese el valor de A: " << "\n":
              
         //Se asigna el primer valor a A
         cin >> A;
         
         //Se pide el segundo numero
         cout << "Por favor ingrese el valor de B: " << "\n":
              cin >> B;
              
         RES=((A+B)*(A+B))/3.0;
         
         //Se muestra el resultado
         printf ("\El resultado de la expresion es %5.4f \n", RES);
         cout << "EL RESULTADO DE LA EXPRESION ES " <<RES <<"\n";
         
         return 0;
         }
