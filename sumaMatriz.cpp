#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el numero de filas (M): ";
    cin >> m;
    cout << "Ingrese el numero de columnas (N): ";
    cin >> n;

    int matriz[100][100];
    int suma = 0;

    cout << "\nIngrese los elementos de la matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            
            suma = suma + matriz[i][j]; 
        }
    }


    cout << suma << "\n";

    return 0;
}
