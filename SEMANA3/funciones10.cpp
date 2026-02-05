//: Diseñar una función que determine si un arreglo está ordenado de forma ascendente. 
//Análisis: El problema exige comparar elementos consecutivos y validar una condición lógica global. 
//Planificación: Comparar cada par de elementos y decidir si el orden es correcto.
#include <iostream>
using namespace std;

bool estaordenadoAsc(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arreglo[i] > arreglo[i + 1]) {
            return false;
        }
    }
    return true;
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

    if (estaordenadoAsc(arreglo, n)) {
        cout << "El arreglo esta ordenado de forma ascendente";
    } else {
        cout << "El arreglo NO esta ordenado de forma ascendente";
    }

    return 0;
}
