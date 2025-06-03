#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "¿Cuantos numeros desea ingresar? ";
    cin >> n;

    vector<int> numeros;
    int num;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;
        numeros.push_back(num);
    }

    sort(numeros.begin(), numeros.end());

    cout << "\nVector ordenado:\n";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
