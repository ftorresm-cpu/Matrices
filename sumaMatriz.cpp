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

    // Avance: Lectura de los elementos de la matriz
    cout << "\nIngrese los elementos de la matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            // Pendiente: Realizar la sumatoria de los elementos
        }
    }

    return 0;
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
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    return 0;
}
