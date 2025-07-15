#include <iostream>
using namespace std;

int main() {
	char rta;
    int n = 5;
    int CP[n] = {101, 102, 103, 104, 105};
    int CS[n] = {30, 20, 50, 10, 15};

    int codigo, cantidad;
    cout << "Ingrese codigo de producto: (los codigos son del 101 al 102) ";
    cin >> codigo;
    
    
    for (int i = 0; i < n; i++) {
        if (CP[i] == codigo) {
            cout << "Cantidad a restar: ";
            cin >> cantidad;
            if (cantidad <= CS[i]) 
			{
			CS[i] -= cantidad;	
			}
            else {
            	cout << "Stock insuficiente\n";
			}
            break;
        }
    }

    cout << "Listado actualizado:\n";
    for (int i = 0; i < n; i++) {
        cout << "CP: " << CP[i] << " - Stock: " << CS[i] << endl;
    }
    
}
