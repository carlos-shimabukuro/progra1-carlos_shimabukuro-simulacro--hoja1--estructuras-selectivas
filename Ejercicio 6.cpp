// ConsoleApplication61.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

/*
test
*/
int main()
{
	// variables
	int a, b, c, d, x;
	double  raizA, raizB;

	// datos de entrada
	cout << "Ingrese valor de A, B, C : " << endl;
	cin >> a >> b >> c;
	cout << "Ingrese valor a evaluar : " << endl;
	cin >> d;

	//logica
	raizA = (-1 * b + sqrt(b * b - (4 * a * c ))) / (2 * a);
	raizB = (-1 * b + -1 * sqrt(b * b - (4 * a * c))) / (2 * a);

	x = a * pow(d, 2) + (b * d) + (c);

	//datos de salida
	cout << "(" << a << ")" << d << "^2 + " << b << "(" << d << ")" << " + " << c << " = " << d << endl;
	cout << endl;
	cout << "Primero raiz : " << raizA * 1.00 << endl;
	cout << "Segunda raiz : " << raizB * 1.00 << endl;




	system("pause");
	return 0;
}
