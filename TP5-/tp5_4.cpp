#include <iostream>
using namespace std;

int main() {
    const int N = 50;
    int tipoLibro[N], edad[N], educacion[N];
    int mayores = 0, fic = 0, noFic = 0, edu[6] = {0};

    for (int i = 0; i < N; i++) {
        cout << "Encuestado " << i+1 << endl;
        cout << "Tipo libro (1=fic, 2=no fic): "; cin >> tipoLibro[i];
        cout << "Edad: "; cin >> edad[i];
        cout << "Educacion (1 a 5): "; cin >> educacion[i];

        if (edad[i] > 18) mayores++;
        if (tipoLibro[i] == 1) fic++;
        else if (tipoLibro[i] == 2) noFic++;
        edu[educacion[i]]++;
    }

    cout << "Mayores de 18: " << mayores << endl;
    cout << "Ficcion: " << (fic*100)/N << "%, No ficcion: " << (noFic*100)/N << "%" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Educacion " << i << ": " << edu[i] << endl;
    }
}
