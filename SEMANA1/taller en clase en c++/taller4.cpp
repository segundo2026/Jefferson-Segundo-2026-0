#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float Area;
    float BaseMa, Baseme, Altura    ;
    cout<<"TRAPECIO"<<endl;
    cout<<"Vamos a hallar el area de un trapecio"<<endl;
    cout<<"Ingrese el valor de la base mayor del trapecio: "<<endl;
    cin>>BaseMa;
    cout<<"Ingrese el valor de la base menor del trapecio: "<<endl;
    cin>>Baseme;
    cout<<"Ingrese la altura del trapecio: "<<endl;
    cin>>Altura;
    Area=((BaseMa+Baseme)*Altura)/2;
    cout<<"El area es: "<<Area<< endl;

    return 0;
}