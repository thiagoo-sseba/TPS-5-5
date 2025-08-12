#include <iostream>
using namespace std;

void cargarVector(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> vec[i];
    }
}

void procesarVector(int vec[], int tam) {
    int sumaTotal = 0, sumaMayores36 = 0, cantidadMayores50 = 0;

    for (int i = 0; i < tam; i++) {
        sumaTotal += vec[i];
        if (vec[i] > 36) sumaMayores36 += vec[i];
        if (vec[i] > 50) cantidadMayores50++;
    }

    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de elementos > 36: " << sumaMayores36 << endl;
    cout << "Cantidad de elementos > 50: " << cantidadMayores50 << endl;
}

int main() {
    int vector[8];
    cargarVector(vector, 8);
    procesarVector(vector, 8);
    return 0;
}

