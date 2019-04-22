// ConsoleApplication52.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
	int numeroC, monto;
	float importe;
	char escalaP;

	// datos de entrada
	cout << "Ingresa la escala de pago : " << endl;
	cin >> escalaP;
	cout << "Ingresa el numero de cursos : " << endl;
	cin >> numeroC;

	//logica
	switch (escalaP)
	{
	case 'A':
		if ((1 <= numeroC) && (numeroC <= 5))
		{
			monto = 400;
		}
		else
		{
			if ((6 <= numeroC) && (numeroC <= 8))
			{
				monto = 600;
			}
			else
			{
				if (8 < numeroC)
				{
					monto = 900;
				}
			}
		}
		cout << "El importe a cancelar es de : s/." << 350.00 + monto << endl;
		break;	
	case 'B':
		if ((1 <= numeroC) && (numeroC <= 3))
		{
			monto = 350;
		}
		else
		{
			if ((4 <= numeroC) && (numeroC <= 7))
			{
				monto = 500;
			}
			else
			{
				if (7 < numeroC)
				{
					monto = 700;
				}
			}
		}
		cout << "El importe a cancelar es de : s/." << 350.00 + monto << endl;
		break;
	case 'C':
		if ((1 <= numeroC) && (numeroC <= 3))
		{
			monto = 320;
		}
		else
		{
			if ((4 <= numeroC) && (numeroC <= 7))
			{
				monto = 480;
			}
			else
			{
				if (7 < numeroC)
				{
					monto = 685;
				}
			}
		}
		cout << "El importe a cancelar es de : s/." << 350.00 + monto << endl;
		break;
	case 'D':
		if ((1 <= numeroC) && (numeroC <= 4))
		{
			monto = 310;
		}
		else
		{
			if ((4 <= numeroC) && (numeroC <= 8))
			{
				monto = 475;
			}
			else
			{
				if (8 < numeroC)
				{
					monto = 680;
				}
			}
		}
		cout << "El importe a cancelar es de : s/." << 350.00 + monto << endl;
		break;
	default:
		cout << "Datos incorrectos" << endl;
		break;
	}

	//datos de salida

	system("pause");
	return 0;
}