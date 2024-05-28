#include <iostream>
using namespace std;

int main()
{
    char arreglo1[2],arreglo2[3];
    int i;
    arreglo1[1] = 'fernando';
    arreglo2[2] = 'oscar';
    arreglo2[1] = -74;
    arreglo2[2] = -56;
    arreglo2[3] = -10;
    cout<<"arreglo 1"<<endl;
    for ( i = 0; i < 2; i++)
    {
        cout<<"el dato es la posicion: "<< i <<" es: "<< arreglo1[i];
    }
    for ( i = 0; i < 3; i++)
    {
        cout<<"el dato en la posicion: "<< i <<" es: "<<arreglo1[i]<<endl;
    }
    
    return 0;
}

