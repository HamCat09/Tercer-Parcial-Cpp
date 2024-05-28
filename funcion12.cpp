#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
	int num[10];
    for (int i = 0; i < 10; i++)
	 {
        num[i] = rand() % 100 + 1;
    }
    cout << "Los números aleatorios son: ";
    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
