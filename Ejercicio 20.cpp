// ConsoleApplication44.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
*/
int main()
{
	// variables
	int numeroC;

	// datos de entrada
	cout << "Ingrese la cantidad de creditos acumulados : " << endl;
	cin >> numeroC;

	//logica
	if (0 <= numeroC)
	{
		if (numeroC < 32)
		{
			cout << "El alumno se encuentra en el Primer anio" << endl;
		}
		else
		{
			if ((32 <= numeroC) && (numeroC <= 63))
			{
				cout << "El alumno se encuentra en el Segundo anio" << endl;
			}
			else
			{
				if ((64 <= numeroC) && (numeroC <= 95))
				{
					cout << "El alumno se encuentra en el Tercer anio" << endl;
				}
				else
				{
					if (96 <= numeroC)
					{
						cout << "El alumno se encuentra en el Cuato anio" << endl;
					}
				}
			}
		}
	}
	else
	{
		cout << "Los datos ingresados son incorrectos" << endl;
	}


	system("pause");
	return 0;
}
