#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " es mayor que " << b << endl;
    else if (a < b)
        cout << a << " es menor que " << b << endl;
    else
        cout << "Ambos son iguales" << endl;

    return 0;
}
