#include <iostream>
using namespace std;

void cargarVector(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> vec[i];
    }
}

void sumarVectores(int vec1[], int vec2[], int vec3[], int tam) {
    for (int i = 0; i < tam; i++) {
        vec3[i] = vec1[i] + vec2[i];
    }
}

void mostrarVector(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int v1[5], v2[5], v3[5];

    cout << "Cargar primer vector:" << endl;
    cargarVector(v1, 5);

    cout << "Cargar segundo vector:" << endl;
    cargarVector(v2, 5);

    sumarVectores(v1, v2, v3, 5);

    cout << "Vector 1: "; mostrarVector(v1, 5);
    cout << "Vector 2: "; mostrarVector(v2, 5);
    cout << "Suma:     "; mostrarVector(v3, 5);

    return 0;
}

