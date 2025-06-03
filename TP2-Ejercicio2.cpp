#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Ingrese el numero de elementos: " << endl;
	cin >> n;
	
	int vec[n];
	int suma = 0;
	
	for (int i=0; i<n; i++){
		cout << "Ingrese el numero " << i+1 << ": " << endl;
		cin >> vec[i];
		suma += vec[i];
	}
	
	float promedio = float(suma)/n;
	
	cout << "La suma: " << suma << endl;
	cout << "El promedio: " << promedio << endl;
	
	return 0;
}
