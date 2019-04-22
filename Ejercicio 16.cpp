// ConsoleApplication39.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el código del alumno: 210044
Ingrese las tres notas del alumno 210044: 16.5 14.5 17
El promedio del alumno 210044 es de 16.10
Felicitaciones ☺ ☺
*/
int main()
{
	// variables
	int codigoA;
	float nota1, nota2, nota3, promedio;
	char felicitaciones = 01;
	// datos de entrada
	cout << "Ingrese el codigo del alumno : " << endl;
	cin >> codigoA;
	cout << " Ingrese las tres notas del alumno " << codigoA << " : " << endl;
	cin >> nota1 >> nota2 >> nota3;

	//logica
	promedio = ((nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4));
	if ((0 <= codigoA) && ((0 <= nota1) && (nota1 <= 20)) && ((0 <= nota2) && (nota2 <= 20)) && ((0 <= nota3) && (nota3 <= 20)))
	{
		cout << "EL promedio del alumno : " << promedio << endl;
		cout << endl;

		if (promedio < 13)
		{
			cout << "Estudie" << endl;
		}
		else
		{
			if ((13 <= promedio) && (promedio < 15))
			{
				cout << "Felicitaciones" << felicitaciones << endl;
			}
			else
			{
				if ((15 <= promedio) && (promedio < 20))
				{
					cout << "Felicitaciones" << felicitaciones << felicitaciones << endl;
				}
				else
				{
					cout << "Felicitaciones" << felicitaciones << felicitaciones << felicitaciones << felicitaciones << felicitaciones  << endl;
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
