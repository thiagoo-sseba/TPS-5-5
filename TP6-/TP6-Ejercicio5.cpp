#include <iostream>
using namespace std;

void cargar(float alturas[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese altura de la persona " << i + 1 << ": ";
        cin >> alturas[i];
    }
}

float calcularPromedio(float alturas[], int tam) {
    float suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += alturas[i];
    }
    return suma / tam;
}

void contarSegunPromedio(float alturas[], int tam, float promedio) {
    int mayores = 0, menores = 0;
    for (int i = 0; i < tam; i++) {
        if (alturas[i] > promedio) mayores++;
        else if (alturas[i] < promedio) menores++;
    }
    cout << "Personas más altas que el promedio: " << mayores << endl;
    cout << "Personas más bajas que el promedio: " << menores << endl;
}

int main() {
    float alturas[5];
    cargar(alturas, 5);

    float promedio = calcularPromedio(alturas, 5);
    cout << "Promedio de alturas: " << promedio << endl;

    contarSegunPromedio(alturas, 5, promedio);

    return 0;
}

