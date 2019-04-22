// ConsoleApplication24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;
/*
Test
test1
Ingrese los lados de un triángulo (A B C): 3 4 5
SI ES UN TRIANGULO

test2
Ingrese los lados de un triángulo (A B C): 1 2 8
NO ES UN TRIANGULO*/

int main()
{
	//Variable
	float a, b, c, suma1, resta1;

	//Datos de entrada
	cout << "Ingrese lado A : " << endl;
	cin >> a;
	cout << "Ingrese lado B : " << endl;
	cin >> b;
	cout << "Ingrese lado C : " << endl;
	cin >> c;

	//Logica

	if ((((a + b) > c) && ((a - b) < c)) && (((a + c) > b) && ((a - c) < b)) && (((c + b) > a) && ((c - b) < a)))
	{
		cout << "Si es un triangulo" << endl;
	}
	else
	{
		cout << "No es un triangulo" << endl;
	}

	system("pause");
    return 0; 
}

