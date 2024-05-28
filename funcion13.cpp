#include <iostream>
using namespace std;

int main() {
  int acum = 0;
  int acum2 = 0;
  
  cout << "Digite el tamaño del vector 1: ";
  int n;
  cin >> n;

  int vector1[n];
  for (int i = 0; i < n; i++) {
    cout << "Digite un numero: ";
    int num;
    cin >> num;
    vector1[i] = num;
    acum += vector1[i]; 
  }

  cout << "Digite el tamaño del vector 2: ";
  int t;
  cin >> t;

  int vector2[t];
  for (int i = 0; i < t; i++) {
    cout << "Digite un numero: ";
    int num;
    cin >> num;
    vector2[i] = num;
    acum2 += vector2[i];
  }

  int vector3[2];
  vector3[0] = acum; 
  vector3[1] = acum2;
  
  cout << "Resultado total: " << vector3[0] + vector3[1] << endl;

  return 0;
}
