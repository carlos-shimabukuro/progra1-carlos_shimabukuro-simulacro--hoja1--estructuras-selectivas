// ConsoleApplication53.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
	char modelo;
	int ultimoD, costoM;

	// datos de entrada
	cout << "Ingrese el modelo : " << endl;
	cin >> modelo;
	cout << "Ingrese el ultimo digito de la placa : " << endl;
	cin >> ultimoD;
	cout << "Ingrese el costo de mantenimiento anual : " << endl;
	cin >> costoM;
	cout << endl;

	//logica
	switch (modelo)
	{
	case 'A':
		if ((0 <= ultimoD) && (ultimoD <= 5))
		{
			if (costoM <= 500)
			{
				cout << "El mes de revision tecnica es : ENERO" << endl;
			}
			else
			{
				cout << "El mes de revision tecnica es : FEBRERO" << endl;
			}
		}
		else
		{
			if ((6 <= ultimoD) && (ultimoD <= 8))
			{
				if (costoM <= 700)
				{
					cout << "El mes de revision tecnica es : JUNIO" << endl;
				}
				else
				{
					cout << "El mes de revision tecnica es : JULIO" << endl;
				}
			}
			else
			{
				if (ultimoD = 9)
				{
					if (costoM <= 1000)
					{
						cout << "El mes de revision tecnica es : OCTUBRE" << endl;
					}
					else
					{
						cout << "El mes de revision tecnica es : NOBIEMBRE" << endl;
					}
				}
			}
			
		}
		break;
	case 'B':
		if ((1 <= ultimoD) && (ultimoD <= 3))
		{
			if (costoM <= 500)
			{
				cout << "El mes de revision tecnica es : MARZO" << endl;
			}
			else
			{
				cout << "El mes de revision tecnica es : ABRIL" << endl;
			}
		}
		else
		{
			if ((6 <= ultimoD) && (ultimoD <= 8))
			{
				if (costoM <= 700)
				{
					cout << "El mes de revision tecnica es : MAYO" << endl;
				}
				else
				{
					cout << "El mes de revision tecnica es : SEPTIEMBRE" << endl;
				}
			}
			else
			{
				if ((ultimoD = 9) || (ultimoD = 0))
				{
					if (costoM <= 1000)
					{
						cout << "El mes de revision tecnica es : AGOSTO" << endl;
					}
					else
					{
						cout << "El mes de revision tecnica es : DICIEMBRE" << endl;
					}
				}
			}

		}
		break;

	default:
		cout << "Los datos son incorrectos" << endl;
		break;
	}

	//datos de salida

	system("pause");
	return 0;
}
