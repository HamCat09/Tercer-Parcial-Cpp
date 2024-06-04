#include <iostream>
using namespace std;

int main()
{
    float unidad, subtotal = 0, precio, descuento , iva, total;
    cin>> unidad;
    cout<<"cantidad de unidades: \n"<<unidad;
    cin>>precio;
    cout<<"\nprecio: "<<precio;
    if(subtotal < 1000)
    {
        descuento = subtotal * 0;
    }
    if(subtotal > 1000)
    {
        descuento = subtotal * 0.2;
        cout << "\nEl desucento es de: "<< descuento;
    }
    iva = subtotal * 0.16;
    total = subtotal - descuento + iva;
    cout<<"\nEl total es de: "<< total;

    return 0;
}
