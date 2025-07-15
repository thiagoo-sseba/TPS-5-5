#include <iostream>
using namespace std;

int main() 
{
    const int cursos = 5;
    int inscriptos[cursos] = {0};

    for (int i = 0; i < cursos; i++) {
        cout << "Ingrese inscriptos al curso " << i+1 << ": ";
        int cantidad;
        cin >> cantidad;
        if (cantidad > 20) cantidad = 20;
        inscriptos[i] = cantidad;
    }

    cout << "Cantidad de inscriptos por curso:\n";
    for (int i = 0; i < cursos; i++) {
        cout << "Curso " << i+1 << ": " << inscriptos[i] << endl;
    }
}
