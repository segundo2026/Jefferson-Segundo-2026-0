//Diseñar una función que calcule el factorial de un número.
// Análisis: Se debe decidir entre un enfoque iterativo o recursivo y analizar el caso base. 
//Planificación: Aplicar un ciclo o recursión para calcular el factorial.
#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "El factorial es: " << factorial(num);

    return 0;
}


