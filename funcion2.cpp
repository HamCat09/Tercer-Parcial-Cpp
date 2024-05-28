#include <iostream>
using namespace std;

int main()
{
    int pers[n];
    int i, nomb;
    for (i = 0; i < n - 1; i++)
    {
        cout << "digite un nombre para la posicion: ";
        cin >> nomb;
        pers[i] = nomb;
    }

    for (i = 0; i < n - 1; i++)
    {
        cout << "el dato en la posicion " << i << " es: " << pers[i] << endl;
    }
    return 0;
}
