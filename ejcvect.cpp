#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int acum=0, i, num=1, alm=1, numb;
	vector<int> numbers;
	for(i = 1; i <= 20; i++)
	{
		cout<< "ingresa los numeros: ";
		cin>>num;
		acum += num;
		if(num == 0)
		{
			break;
		}
		numbers.push_back(num);
		acum += num;
	}
	cout<<"los numeros invrsos son: "<< endl;
	for(i = numbers.size() -1; i >= 0; i--)
	{
		cout<<numbers[i] << endl;	
	}
	cout<<" la suma de los numeros es de: "<< acum << endl;
	
	return 0;
}
	
	
	

