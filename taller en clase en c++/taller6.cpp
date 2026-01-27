#include <iostream>
#include  <cmath>
using namespace std;

int main() {
    double lado1, lado2,lado3,radio;
	double area;
   cout<<"TRIANGULO  ESCRITO"<<endl;
    cout << " ingrese el lado 1"<< endl;
    cin>>lado1;
    cout<<"ingrese el lado 2"<<endl;
    cin>>lado2;
    cout<<"ingrese el lado 3 "<<endl;
    cin>>lado3;
    cout<<"ingrese el radio"<<endl;
    cin>>radio;
    area= (lado1*lado2*lado3)/(4*radio);
     cout<<"area"<<  " ; " << area <<endl;
    return 0;
}
