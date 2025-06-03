#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string paises[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del pais " << i + 1 << ": ";
        cin >> paises[i];
    }

    
    sort(paises, paises + 5);

    cout << "\nPaises ordenados alfabeticamente:\n";
    for (int i = 0; i < 5; i++) {
        cout << paises[i] << endl;
    }

    return 0;
}

