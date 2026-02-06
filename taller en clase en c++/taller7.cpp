#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lado1, lado2, lado3, radio;
    double area, semiperimetro;

    cout<< "TRIANGULO  CIRCUNSCRITO" << endl;
    cout << "Ingrese el lado 1: ";
    cin >> lado1;
    cout << "Ingrese el lado 2: ";
    cin >> lado2;
    cout << "Ingrese el lado 3: ";
    cin >> lado3;
    cout << "Ingrese el radio del circulo inscrito: ";
    cin >> radio;
    semiperimetro = (lado1 + lado2 + lado3) / 2;
    area = radio * semiperimetro;
    cout << "Semiperimetro: " << semiperimetro << endl;
    cout << "Area: " << area << endl;

    return  0;
}
