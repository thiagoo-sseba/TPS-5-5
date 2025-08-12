#include <iostream>
using namespace std;

void cargar(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> vec[i];
    }
}

bool estaordenado(int vec[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int vector[10];
    cargar(vector, 10);

    if (estaordenado(vector, 10))
        cout << "El vector está ordenado de menor a mayor." << endl;
    else
        cout << "El vector NO esta ordenado." << endl;

    return 0;
}

