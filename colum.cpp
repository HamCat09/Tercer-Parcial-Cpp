#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int fil = 4;
    const int col = 3;
    vector<vector<int>> tabla(filas, vector<int>(columnas, 0));
    vector<int> columnSums(columnas, 0);
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Ingrese el valor para la fila " << i + 1 << ", col " << j + 1 << ": " << endl;
            cin >> tab[i][j];

            columnSums[j] += tab[i][j];
        }
    }
    int maxsu = columnSums[0];
    int maxco1 = 0;
    for (int i = 1; i < col; i++)
    {
        if (columnSums[i] > maxsu)
        {
            maxsu = columnSums[i];
            maxco1 = i;
        }
    }
    cout << "mayor de columnas: " << maxsu << endl;
    cout << "La columna con la mayor suma es la " << maxco1 + 1 << endl;

    return 0;
}

