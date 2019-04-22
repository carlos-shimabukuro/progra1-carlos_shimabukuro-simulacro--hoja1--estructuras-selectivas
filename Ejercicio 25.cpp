// ConsoleApplication49.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el diámetro en centímetros: 30
Ingrese el número de ingredientes extras: 2
El precio total de la pizza es de S/50.0
*/
int main()
{
	// variables
	float diametro, precioB, precioF;
	int	numeroI;
	// datos de entrada
	cout << "Ingrese el diametro en centimetros : " << endl;
	cin >> diametro;
	cout << "Ingrese el numero de ingredientes extras : " << endl;
	cin >> numeroI;

	//logica
	if ((0 < diametro) && (0 < numeroI))
	{
		precioB = diametro * 1.5;
		precioF = numeroI * 2.5 + precioB;
	}
	else
	{
		cout << "Datos invalidos" << endl;
	}

	//datos de salida
	cout << "El precio total de la pizza es de : " << precioF << endl;

	system("pause");
	return 0;
}
