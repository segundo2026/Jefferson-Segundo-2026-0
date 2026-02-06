#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese 3 numeros: ";
    cin >> a >> b >> c;
    float promedio = (a + b + c) / 3;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
