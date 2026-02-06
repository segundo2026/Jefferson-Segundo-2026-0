#include <iostream>
#include  <cmath>
using namespace std;

int main() {
    double diagonal, dimenor;
	double area,lado,perimetro;
   cout<<"ROMBO"<<endl;
    cout << " ingrese la diagonal mayor"<< endl;
    cin>>diagonal;
    cout<<"ingrese la diagonal menor"<<endl;
    cin>>dimenor;
    area=(diagonal*dimenor)/2;
    lado=sqrt(pow(diagonal/2, 2)+pow(dimenor/2, 2));
    perimetro=4*lado;
    cout<<"area"<<  " ; " << area<<endl;
    cout<<"lado"<<  "; " << lado<<endl;
    cout<<"perimetro "<< " ; "<<perimetro   <<endl;
    
    return 0;
}