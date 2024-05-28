#include <iostream>
using namespace std;

int main() {
  int num[7]; // Declaramos y creamos el arreglo

  num[0] = 20; // Asignamos valores al arreglo
  num[1] = -14;
  num[2] = 12;
  num[3] = 10;
  num[4] = 5;
  num[5] = 19;
  num[6] = 24;

  // Imprimimos los valores del arreglo con un ciclo for
  for (int i = 0; i < 7; i++) {
	cout << "El dato en la posicion " << i << " es: " << num[i] <<endl;
  }

  return 0;
}
