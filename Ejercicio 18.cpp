// ConsoleApplication41.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test

test1
Ingrese la posición del equipo en la tabla: 3
El equipo seleccionado irá al mundial !!!

test2 
Ingrese la posición del equipo en la tabla: 8
Cómprate una TV LED para ver el mundial !!!
*/
int main()
{
	// variables
	int puesto;

	// datos de entrada
	cout << "Ingrese la posicion del equipo en la tabla : " << endl;
	cin >> puesto;

	//logica
	if (0 < puesto)
	{
		if ((1 <= puesto) && (puesto <= 4))
		{
			cout << "El equipo seleccionado ira al mundial !!!" << endl;
		}
		else
		{
			if (puesto == 5)
			{
				cout << "El equipo seleccionado ira al repechaje !!!" << endl;
			}
			else
			{
				if (5 < puesto)
				{
					cout << "Comprate una TV LED para ver el mundial !!!" << endl;
				}
			}
		}
	}
	else
	{
		
		cout << "EL dato introducido es incorrecto" << endl;
	}

	//datos de salida

	system("pause");
	return 0;
}
