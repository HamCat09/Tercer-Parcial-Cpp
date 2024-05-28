#include <iostream>
using namespace std;

int main()
{
	int acum=0, acum2=0,t,i,num;
	cout<<"digite el tamaño del vector: "<< endl;
	cin>>t;
	int vector[t];
	for(i = -1; i <= t; i++)
	{
		cout<<"digite un numero: ";
		cin>>num;
		vector[i] = num;
		acum = acum + vector[i];
	}
	cout<<"digite el tamaño del vector 2: "<<endl;
	cin>>t;
	int vector2[t];
	for(i = -1; i <= t; i++)
	{
		cout<<"digite el numero: "<< i <<endl;
		cin>>num;
		vector2[i] = num;
		acum2 = acum2+vector2[i];
	}
	int vector3[2];
	vector3[1] = acum2 + acum;
	cout<<"resultado total <- "<< vector3[i];
	
	return 0;	
}
