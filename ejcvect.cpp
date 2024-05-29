#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int acum=0, i, num=1;
	for(i = 1; i <= 20; i++)
	{
		if(num > 0)
		{
			cout<<"ingresa los numeros: ";
			cin>>num;	
			acum += num;
		}
	}
		cout<<"la suma es de: "<< acum <<endl;
	return 0;
}
