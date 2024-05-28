#include <iostream>
using namespace std;

int main()
{
    /*creamois el arreglo le damos un nombre y un tamano de 5 posiciones */
    int num[5];
    int numero,i;
    /*a cada posicion le damos un dato con el ciclo para*/
    for (i = 0; i <= 5; i++)
    {
        /*pido los datos*/
        cout<<"digite un numero para la posicion: ";
        cin>>numero; /*Capturo los numeros ingresados en la variable numero*/
        num[i]=numero; //al arreglo le paso todos los numeros ingresados//
    }

    //Imprimir los datos asignados con un ciclo for
    for ( i = 0; i <= 5; i++)
    {
        cout<<"el dato en la posicion es "<< i <<" es: "<< num[i] <<endl;
    }
    
    return 0;
}
