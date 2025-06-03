#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    int buscar;
    cout << "Ingrese un valor a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 1; i < n; i++) {
        if (vec[i] == buscar) {
            cout << "El valor se encuentra en la posicion " << i+1 << "." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "El valor no se encuentra en el vector." << endl;
    }

    return 0;
}
