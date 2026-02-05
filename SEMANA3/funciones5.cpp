//: Diseñar una función que retorne el valor máximo de un arreglo. 
//Análisis: Se debe establecer una comparación lógica entre elementos sucesivos. 
//Planificación: Inicializar una variable y comparar cada elemento para hallar el mayor.
#include <iostream>
using namespace std;

int maximoarreglo(int arreglo[], int n) {
    int max = arreglo[0];

    for (int i = 1; i < n; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
        }
    }

    return max;
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

    cout << "El valor maximo del arreglo es: " << maximoarreglo(arreglo, n);

    return 0;
}
