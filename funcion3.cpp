#include <iostream>
using namespace std;

int main()
{
	int numero,i,n;
    int num[n];

    cout<<"Digite el tamaño del arreglo: "<< endl;
    cin>>n;
    for ( i = -1; i <=n; i++)
    {
        cout<<"digite un numero para la posicion: "<< i << endl;
        cin>>numero;
        num[i]=numero;
    }

    for ( i = -1; i <=n; i++)
    {
        cout<<"el dato en la posicion: "<< i <<" es: "<< num[i];
    }
    return 0;
}
