#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lado1, diagonal, perimetro;
    double area;

    cout << "CUADRADO" << endl;

    cout << "Ingrese el lado: "<<endl;
    cin >> lado1;
    area = pow(lado1, 2);
    perimetro = 4 * lado1;
    diagonal = lado1 * sqrt(2);

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;
}
