#include <iostream>
#include <string.h>
#include<cmath>
using namespace std;

int main()
{
    string nombre, apellido, direccion, hobbie;
    cout << "cual es tu nombre: "; cin >> nombre;
    cout << "cual es tu apellido: "; cin >> apellido;
    cout << "cual es tu direccion: "; cin >> direccion;
    cout << "cual es tu hobbie: "; cin >> hobbie;

    int edad;
    int telefono;
    cout << "ingrese telefono: "; cin >> telefono;
    cout << "ingrese edad: "; cin >> edad;

    cout << "nombre: " << nombre << "\n";
    cout << "apellido: " << apellido << "\n";
    cout << "direccion: " << direccion << "\n";
    cout << "hobbie: " << hobbie << "\n";
    cout << "edad: " << edad << "\n";
    cout << "telefono: " << telefono << "\n";

    int a, b, suma;
    cout << "ingrese numero a: "; cin >> a;
    cout << "ingrese numero b: "; cin >> b;
    suma = a + b;
    cout << "la suma de: " << a << "+" << b << "=" << suma << "\n";

    int c, d, resta;
    cout << "ingrese numero c: "; cin >> c;
    cout << "ingrese numero d: "; cin >> d;
    resta = c - d;
    cout << "la resta de: " << c << "-" << d << "=" << resta << "\n";

    int e, f, multiplicacion;
    cout << "ingrese numero e: "; cin >> e;
    cout << "ingrese numero f: "; cin >> f;
    multiplicacion = e * f;
    cout << "la multiplicacion de: " << e << "*" << f << "=" << multiplicacion << "\n";

    float g, h, division;
    cout << "ingrese numero g: "; cin >> g;
    cout << "ingrese numero h: "; cin >> h;
    division = g / h;
    cout << "la division de: " << g << "/" << h << "=" << division << "\n";

    int n, raizcuadrada;
    cout << "ingrese numero n: "; cin >> n;
    raizcuadrada = sqrt(n);
    cout << "la raizcuadrada de: " << n << "es: " << raizcuadrada << "\n";


	float r, pi = 3.14, area1;
	cout << "introduce el radio del circulo: "; cin >> r;
	area1 = pow(r, 2) * pi;
	cout << "el area del circulo es: " << area1 << endl;

	float l, area2;
	cout << "introduce el lado del cuadrado: "; cin >> l;
	area2 = pow(l, 2);
	cout << "el area del un cuadrado es: " << area2 << endl;

	float b2, a2, area3;
	cout << "introduce la base del triangulo: "; cin >> b2;
	cout << "introduce la altura del triangulo: "; cin >> a2;
	area3 = (b2 * a2) / 2;
	cout << "el area del triangulo es: " << area3 << endl;

	float l2, area4;
	cout << "introduce el lado del triangulo equilatero: "; cin >> l2;
	area4 = pow(l2, 2) * sqrt(3) / 4;
	cout << "el area del triangulo equilatero es: " << area4 << endl;

	

}
