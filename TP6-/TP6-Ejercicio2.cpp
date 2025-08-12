#include <iostream>
using namespace std;

void cargar(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> vec[i];
    }
}

void mostrar(int vec[], int tam) {
    cout << "Vector: ";
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int vector[5];
    cargar(vector, 5);
    mostrar(vector, 5);
    return 0;
}

