#include <iostream>
using namespace std;

class Operaciones {
private:
    int valor1, valor2;
public:
    void cargar() {
        cout << "Ingrese primer valor: "; cin >> valor1;
        cout << "Ingrese segundo valor: "; cin >> valor2;
    }

    void suma() {
        cout << "Suma: " << (valor1 + valor2) << endl;
    }

    void resta() {
        cout << "Resta: " << (valor1 - valor2) << endl;
    }

    void multiplicacion() {
        cout << "Multiplicacion: " << (valor1 * valor2) << endl;
    }

    void division() {
        if (valor2 != 0)
            cout << "Division: " << ((float)valor1 / valor2) << endl;
        else
            cout << "No se puede dividir por cero." << endl;
    }
};

int main() {
    Operaciones op;
    op.cargar();
    op.suma();
    op.resta();
    op.multiplicacion();
    op.division();
    return 0;
}

