//: Elaborar una función que calcule la suma de los elementos de un arreglo.
//Análisis: El estudiante debe identificar la necesidad de un proceso repetitivo y un acumulador.
//Planificación: Recorrer el arreglo, acumular valores y retornar la suma.
#include <iostream>
using namespace std;

int sumaarreglo(int arreglo[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + arreglo[i];
    }

    return suma;
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

    cout << "La suma de los elementos es: " << sumaarreglo(arreglo, n);

    return 0;
}
