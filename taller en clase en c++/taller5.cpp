#include <iostream>
#include  <cmath>
using namespace std;

int main() {
    double lado1, lado2,a,b;
	double base,altura;
   cout<<"TRIANGULO"<<endl;
    cout << " ingrese el lado 1"<< endl;
    cin>>lado1;
    cout<<"ingrese el lado 2"<<endl;
    cin>>lado2;
    cout<<"ingrese la base"<<endl;
    cin>>base;
    cout<<"ingrese la altura"<<endl;
    cin>>altura;
    a=base*altura/2,
    b=lado1 + lado2 + base;

    cout<<"area"<<  " ; " << a <<endl;
    cout<<"perimetro"<<  "; " << b  <<endl;
    
    
    return 0;
}
