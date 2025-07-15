#include <iostream>
using namespace std;

int main() {
    int votos[3] = {0}; 
    
    int opcion, producto;

    do {
        cout << "¿Desea votar? (1: si, 2: no): ";
        cin >> opcion;
        if (opcion == 1) {
            cout << "1- Producto A\n2- Producto B\n3- Producto C\nElija: ";
            cin >> producto;
            if (producto >= 1 && producto <= 3)
                votos[producto-1]++;
        }
    } while (opcion != 2);

    int total = votos[0] + votos[1] + votos[2];
    cout << "Votos A: " << votos[0] << "\nVotos B: " << votos[1] << "\nVotos C: " << votos[2] << endl;
    cout << "Total de votos: " << total << endl;

    int max = 0, ganador = 0;
    for (int i = 0; i < 3; i++) {
        if (votos[i] > max) {
            max = votos[i];
            ganador = i;
        }
    }

    cout << "Producto mas votado: Producto " << char('A' + ganador) << endl;
}
