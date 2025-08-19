#include <iostream>
using namespace std;

class Persona {
private:
    char nombre[40];
    int edad;
public:
    void inicializar() {
        cout << "Ingrese nombre: ";
        cin.getline(nombre, 40);
        cout << "Ingrese edad: ";
        cin >> edad;
        cin.ignore(); 
    }

    void imprimir() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    void esMayorEdad() {
        if (edad >= 18)
            cout << "Es mayor de edad." << endl;
        else
            cout << "No es mayor de edad." << endl;
    }
};

int main() {
    Persona persona1, persona2;

    cout << "=== Persona 1 ===" << endl;
    persona1.inicializar();

    cout << "\n=== Persona 2 ===" << endl;
    persona2.inicializar();

    cout << "\n--- Datos Persona 1 ---" << endl;
    persona1.imprimir();
    persona1.esMayorEdad();

    cout << "\n--- Datos Persona 2 ---" << endl;
    persona2.imprimir();
    persona2.esMayorEdad();

    return 0;
}

