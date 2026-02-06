#include <iostream>
#include  <cmath>
using namespace std;

int main() {
    double lado1, lado2,lado3,perimetro,a,b,c;
	double area;
   cout<<"TRIANGULO,FORMULA DE HERON "<<endl;
    cout << " ingrese el lado 1"<< endl;
    cin>>a;
    cout<<"ingrese el lado 2"<<endl;
    cin>>b;
    cout<<"ingrese el lado 3 "<<endl;
    cin>>c;
     perimetro =(a+b+c)/2;
     area= sqrt(perimetro*(perimetro-a)*(perimetro-b)*(perimetro-c));
     cout<<"semi perimetro"<<  " ; " << perimetro <<endl;
     cout<<"area"<<  " ; " << area <<endl;
    return 0;
}
