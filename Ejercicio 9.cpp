// ConsoleApplication28.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test
Ingrese la cantidad de goles del equipo local: 7
Ingrese la cantidad de goles del equipo visitante: 4
Ganó el equipo local*/

int main()
{
	// Varibles
	int golesL, golesV;

	// Datos de entrada
	cout << "Ingrese la cantidad de goles del equipo local : " << endl;
	cin >> golesL;
	cout << "Ingrese la cantidada de goles del equipo visitante : " << endl;
	cin >> golesV;


	// Logica
	if ((0 <= golesL) && (0 <= golesV))
	{
		if (golesL < golesV)
		{
			cout << "Gano el equipo visitante" << endl;
		}
		else
		{
			if (golesV < golesL)
			{
				cout << "Gano el equipo local" << endl;
			}
			else
			{
				cout << "Resultado empate" << endl;
			}
		}
	}
	else
	{
		cout << "Datos de entrada invalidos" << endl;
	}

	system("pause");
    return 0; 
}
