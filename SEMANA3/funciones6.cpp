//Crear una función que retorne el valor mínimo de un arreglo. 
//Análisis: Similar al ejercicio anterior, pero enfocada en encontrar el menor valor. 
//Planificación: Comparar cada elemento y actualizar el valor mínimo.
#include <iostream>
using namespace std;

int minimoarreglo(int arreglo[], int n) {
    int min = arreglo[0];

    for (int i = 1; i < n; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }

    return min;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "El valor minimo del arreglo es: " << minimoarreglo(arreglo, n);

    return 0;
}
