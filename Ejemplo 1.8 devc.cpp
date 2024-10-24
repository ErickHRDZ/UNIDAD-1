#include "iostream"
#include <stdio.h>

using namespace std;
int main()
{
    int MAT;
    float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
    //Mensaje de bienvenida
    
    cout <<"Hola! Este programa1.8 Promedio calificaciones" << "\n";
    //Se pide la MATRICULA DEL ALUMNO
    cout <<Por favor ingrese la matricula del alumno: " <<"\n";
    //Se asigna el primer valor a MAT
    cin >> MAT;
    //Se asigna la primera calificacion
    cout <<"Por favor ingrese la primera calificacion: " << "\n";
    //SE asigna el primer valor a CAL1
    cin >> CAL1;
    //Se asigna la segunda calificacion
    cout <<"Por favor ingrese la segunda calificacion: " << "\n";
    //SE asigna el primer valor a CAL2
    cin >> CAL2;
    //Se asigna la tercera calificacion
    cout <<"Por favor ingrese la tercera calificacion: " << "\n";
    //SE asigna el primer valor a CAL3
    cin >> CAL3;
    //Se asigna la cuarta calificacion
    cout <<"Por favor ingrese la cuarta calificacion: " << "\n";
    //SE asigna el primer valor a CAL4
    cin >> CAL4;
    //Se asigna la quinta calificacion
    cout <<"Por favor ingrese la quinta calificacion: " << "\n";
    //SE asigna el primer valor a CAL5
    cin >> CAL5;
    PRO=(CAL1+CAL2+CAL3+CAL4+CAL5+)/5.0;
    //Se muestra el resultado
    printf ("\n El promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
    cout << "\n El promedio del alumno con matricula " << MAT <<" es "<<PRO <<"\";
    return 0;
}
