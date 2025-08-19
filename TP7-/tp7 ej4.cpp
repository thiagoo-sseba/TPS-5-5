#include <iostream>
using namespace std;

class Empleado {
private:
    char nombre[40];
    float sueldo;
public:
    void cargar() {

        cout << "Ingrese nombre: ";
        cin.getline(nombre, 40);
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
    }

    void imprimir() {
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: $" << sueldo << endl;
    }

    void pagaImpuestos() {
        if (sueldo > 3000)
            cout << "Debe pagar impuestos." << endl;
        else
            cout << "No debe pagar impuestos." << endl;
    }
};

int main() {
    Empleado e;
    e.cargar();
    e.imprimir();
    e.pagaImpuestos();
    return 0;
}

