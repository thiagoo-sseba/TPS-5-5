#include <iostream>
using namespace std;

class Cuadrado {
private:
    float lado;
public:
    void cargar() {
        cout << "Ingrese el valor del lado: ";
        cin >> lado;
    }

    void imprimirPerimetro() {
        cout << "Perimetro: " << (lado * 4) << endl;
    }

    void imprimirSuperficie() {
        cout << "Superficie: " << (lado * lado) << endl;
    }
};

int main() {
    Cuadrado c;
    c.cargar();
    c.imprimirPerimetro();
    c.imprimirSuperficie();
    return 0;
}

