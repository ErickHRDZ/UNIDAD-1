#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	//MENSAJE DE BIENVENIDA
	cout <<"Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" <<"\n";
	
	//Se declaran los n�meros que se sumar�n (pueden ser decimales)
	
	//Se pide el primer n�mero
	cout<< "Por favor ingrese el valor de la Base:" << "\n";
	//Se pide el primer valor a Base
	cin >> Base;
	//Se pide el segundo n�mero
	cout<< "Por favor ingrese el valor de la Altura:" << "\n";
	//Se pide el segundo valor a Altura
	cin >> Altura;
	
	SUPERFICIE= Base*Altura;
	PERIMETRO=2* (Base+Altura);
	
	//Se muestra el resultado
	printf ("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n", SUPERFICIE);
	
	return 0;
}
