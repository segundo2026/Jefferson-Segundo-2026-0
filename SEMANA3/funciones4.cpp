//Crear una función que calcule el promedio de un arreglo de notas. 
//Análisis: Se requiere dividir el problema en dos partes: suma y cantidad de elementos. 
//Planificación: Calcular la suma y dividirla para obtener el promedio.

#include <iostream>
using namespace std;

float promedionotas(float notas[], int n) {
    float suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + notas[i];
    }

    return suma / n;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    float notas[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << "El promedio es: " << promedionotas(notas, n);

    return 0;
}
