#include <iostream>
using namespace std;
int main()
{
	int f,c,i,j;
	cout<<"digite el numero en filas: "<<endl;
	cin>>f;
	cout<<"digite el numero de columnas: "<<endl;
	cin>>c;
	int matriz[f,c];
	for(j = -1; j <= c; j++)
	{
		cout<<"digite dato para la fila: "<< i <<"columna"<< j;
		cin>> numero;
		matriz[i,j]=numero;
	}
	
	for(i = -1; i <= f i++)
	{
		for(j = -1; j <= h; j++)
		{
			cout<<"los datos que hay en la matriz son: "<< matriz[i,j]<< endl;
		}
	}
	return 0;
}
