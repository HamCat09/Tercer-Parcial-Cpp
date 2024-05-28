#include <iostream>
using namespace std;
int main()
{
	int acum = 0, tam , i , num;
	cout<<"digite el tamaño del vector (arreglo)"<<endl;
	cin>>tam;
	int vector[tam];
	for(i = 1; i <= tam; i++)
	{
		cout<<"digite el numero: "<<endl;
		cin>>num;
		vector[i] = num;
		acum = acum + vector[i];
	}
	for(i= -1; i <= tam; i++)
	{
		cout << "la suma de: "<<vector[i]<<endl;
	}
	cout<<"es: "<<acum<<endl;
	
	return 0;	
}
