#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, altura;
    double perimetro, area, diagonal;

    cout << "RECTANGULO" << endl;

    cout << "Ingrese la base del rectangulo: "<<endl;
    cin >> base;

    cout << "Ingrese la altura del rectangulo: "<<endl;
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;
}
