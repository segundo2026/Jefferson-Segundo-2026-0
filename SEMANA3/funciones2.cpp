//Crear una función que determine si un número es par o impar. Análisis:
// Se debe razonar sobre la divisibilidad de un número entre dos y el posible resultado. 
#include <iostream>
using namespace std;
bool espar(int numero) {
    if (numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (espar(num)) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }

    return 0;
}
