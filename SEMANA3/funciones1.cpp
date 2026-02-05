//1:Diseñar una función que reciba dos números enteros y retorne el mayor. 
//Análisis: El problema requiere comparar dos valores y tomar una decisión lógica basada en una condición. 
#include <iostream>
using namespace std;

int mayor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El numero mayor es: " << mayor(num1, num2);

    return 0;
}
