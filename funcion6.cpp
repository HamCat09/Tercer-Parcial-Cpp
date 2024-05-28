#include <iostream>
using namespace std;
int main()
{
	int n,i,p;
	char paises[10];
	char nombre[20];
	cout<<"digite el numero de paises: "<<endl;
	cin>>n;
	paises[n];
	for(i = -1; i <= n; i++)
	{
		cout<<"digite el pais: ";
		cin>> nombre;
		paises[i] = nombre;
	}
	cout<<"digite la posicion: "<<endl;
	cin>> p;
	
	cout<<"el pais que hay en la posicion: "<< p <<" es "<<pais[p]<< endl;
	return 0;	
}
