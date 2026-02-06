#include <iostream>
#include <string>

using namespace std;

struct Producto {
    int codigo;
    string nombre;
    float precio;
    int stock;
};

int main() {
    const int MAX = 5;
    Producto productos[MAX];
    int cantidad = 0;
    int opcion;

    do {
        cout << "\n===== MENU TIENDA =====\n";
        cout << "1. Registrar productos\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Buscar producto por codigo\n";
        cout << "4. Buscar producto por nombre\n";
        cout << "5. Mostrar producto con mayor stock\n";
        cout << "6. Mostrar producto mas caro\n";
        cout << "7. Calcular valor total del inventario\n";
        cout << "8. Salir\n";
        cout << "9. Ordenar productos por precio (mayor a menor)\n";
        cout << "10. Ordenar productos por nombre (A-Z)\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

        case 1: 
            if (cantidad < MAX) {
                cout << "Codigo: ";
                cin >> productos[cantidad].codigo;

                cout << "Nombre: ";
                cin >> productos[cantidad].nombre;

                do {
                    cout << "Precio: ";
                    cin >> productos[cantidad].precio;
                } while (productos[cantidad].precio <= 0);

                do {
                    cout << "Stock: ";
                    cin >> productos[cantidad].stock;
                } while (productos[cantidad].stock < 0);

                cantidad++;
                cout << "Producto registrado correctamente.\n";
            } else {
                cout << "No se pueden registrar mas productos.\n";
            }
            break;

        case 2: 
            if (cantidad == 0) {
                cout << "No hay productos registrados.\n";
            } else {
                cout << "CODIGO\tNOMBRE\tPRECIO\tSTOCK\n";
                for (int i = 0; i < cantidad; i++) {
                    cout << productos[i].codigo << "\t"
                         << productos[i].nombre << "\t"
                         << productos[i].precio << "\t"
                         << productos[i].stock << endl;
                }
            }
            break;

        case 3: { 
            int cod;
            bool encontrado = false;
            cout << "Ingrese codigo: ";
            cin >> cod;

            for (int i = 0; i < cantidad; i++) {
                if (productos[i].codigo == cod) {
                    cout << "Codigo: " << productos[i].codigo << endl;
                    cout << "Nombre: " << productos[i].nombre << endl;
                    cout << "Precio: " << productos[i].precio << endl;
                    cout << "Stock: " << productos[i].stock << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
                cout << "No encontrado.\n";
            break;
        }

        case 4: { // Buscar por nombre
            string nom;
            bool encontrado = false;
            cout << "Ingrese nombre: ";
            cin >> nom;

            for (int i = 0; i < cantidad; i++) {
                if (productos[i].nombre == nom) {
                    cout << "Codigo: " << productos[i].codigo << endl;
                    cout << "Nombre: " << productos[i].nombre << endl;
                    cout << "Precio: " << productos[i].precio << endl;
                    cout << "Stock: " << productos[i].stock << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
                cout << "No encontrado.\n";
            break;
        }

        case 5: {
            if (cantidad == 0) {
                cout << "No hay productos.\n";
            } else {
                int pos = 0;
                for (int i = 1; i < cantidad; i++) {
                    if (productos[i].stock > productos[pos].stock)
                        pos = i;
                }
                cout << "Producto con mayor stock:\n";
                cout << productos[pos].nombre << " - Stock: " << productos[pos].stock << endl;
            }
            break;
        }

        case 6: {
            if (cantidad == 0) {
                cout << "No hay productos.\n";
            } else {
                int pos = 0;
                for (int i = 1; i < cantidad; i++) {
                    if (productos[i].precio > productos[pos].precio)
                        pos = i;
                }
                cout << "Producto mas caro:\n";
                cout << productos[pos].nombre << " - Precio: " << productos[pos].precio << endl;
            }
            break;
        }

        case 7: { 
            float total = 0;
            for (int i = 0; i < cantidad; i++) {
                total += productos[i].precio * productos[i].stock;
            }
            cout << "Valor total del inventario: " << total << endl;
            break;
        }

        case 8:
            cout << "Saliendo del programa...\n";
            break;

        case 9: {
            for (int i = 0; i < cantidad - 1; i++) {
                for (int j = i + 1; j < cantidad; j++) {
                    if (productos[i].precio < productos[j].precio) {
                        Producto aux = productos[i];
                        productos[i] = productos[j];
                        productos[j] = aux;
                    }
                }
            }
            cout << "Productos ordenados por precio.\n";
            break;
        }

        case 10: { 
            for (int i = 0; i < cantidad - 1; i++) {
                for (int j = i + 1; j < cantidad; j++) {
                    if (productos[i].nombre > productos[j].nombre) {
                        Producto aux = productos[i];
                        productos[i] = productos[j];
                        productos[j] = aux;
                    }
                }
            }
            cout << "Productos ordenados por nombre.\n";
            break;
        }

        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 8);

    return 0;
}

