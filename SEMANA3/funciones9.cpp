//: Crear una función que busque un valor dentro de un arreglo y retorne si existe. 
//Análisis: Se requiere analizar el recorrido secuencial y la comparación lógica. 
//Planificación: Recorrer el arreglo y retornar el resultado de la búsqueda.
#include <iostream>
using namespace std;

bool estaOrdenadoasc(int arreglo[], int n) {
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

    if (estaOrdenadoasc(arreglo, n)) {
        cout << "El arreglo esta ordenado de forma ascendente";
    } else {
        cout << "El arreglo NO esta ordenado de forma ascendente";
    }

    return 0;
}
