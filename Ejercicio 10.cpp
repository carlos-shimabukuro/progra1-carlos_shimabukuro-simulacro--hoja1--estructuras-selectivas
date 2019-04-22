// ConsoleApplication30.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*
Test
Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: 5
Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: 1
Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: 6
Ingrese el Monto de la Propina: 3.5
El monto total de la compra es: 8.8
LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS
*/

int main()
{
	// Variables
	float montoP, montoT, cantidadC1, cantidadC2, cantidadC3, precioC1, precioC2, precioC3;
	
	// Datos de entrada
	cout << "Ingrese la cantidad de caramenlos que va a comprar por el Tipo1 : " << endl;
	cin >> cantidadC1;
	cout << "Ingrese la cantidad de caramenlos que va a comprar por el Tipo2 : " << endl;
	cin >> cantidadC2;
	cout << "Ingrese la cantidad de caramenlos que va a comprar por el Tipo3 : " << endl;
	cin >> cantidadC3;
	cout << "Ingrese el Monto de la Propina : " << endl;
	cin >> montoP;

	// Logica
	precioC1 = cantidadC1 * 0.75;
	precioC2 = cantidadC2 * 1.15;
	precioC3 = cantidadC3 * 0.65;

	montoT = precioC1 + precioC2 + precioC3;

	if ((0 <= cantidadC1) && (0 <= cantidadC2) && (0 <= cantidadC3) && (0 <= montoP))
	{
		if (montoT <= montoP)
		{
			cout << "La propina si fue suficiente para pagar por los caramelos" << endl;
		}
		else
		{
			cout << "El monto total de la compra es : " << montoT << endl;
			cout << endl;
			cout << "La propina no fue suficiente para pagar por los caramelos" << endl;
		}
	}
	else
	{
		cout << "Valores ingresados son invalidos" << endl;
	}
	system("pause");
	return 0;
}