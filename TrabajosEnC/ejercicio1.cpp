#include <iostream>
using namespace std;

int main()
{
    int unidad,subtotal,precio;
    cin>>unidad;
    cout<<"cantidad de unidades: \n"<< unidad;
    cin>> precio;
    cout<<"precio: \n"<< precio;
    subtotal = unidad + precio;
    cout<<subtotal;

    return 0;
}
