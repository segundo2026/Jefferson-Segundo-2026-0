//Crear una función que valide una opción de menú dentro de un rango permitido. 
//Análisis: El estudiante debe razonar sobre el control de errores y condiciones válidas. 
//Planificación: Evaluar si el valor ingresado pertenece al rango definido.
#include <iostream>
using namespace std;

bool validaropcion(int opcion, int min, int max) {
    if (opcion >= min && opcion <= max) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int opcion;

    cout << "MENU\n";
    cout << "1. Registrar\n";
    cout << "2. Mostrar\n";
    cout << "3. Salir\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    if (validaropcion(opcion, 1, 3)) {
        cout << "Opcion valida";
    } else {
        cout << "Opcion invalida";
    }

    return 0;
}
