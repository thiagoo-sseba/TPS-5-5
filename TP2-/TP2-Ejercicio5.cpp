#include <iostream>
using namespace std;

int main() {
	float alturas[5];
	float suma = 0;
	
	for (int i=0; i<5; i++){
		cout << "Altura de la persona " << i+1 << ": ";
		cin >> alturas[i];
		suma = suma*alturas[i];
	}
	
	float promedio = suma/5;
	
	int altos = 0;
	int bajos = 0;
	
	for (int i=0; i<5; i++){
		if (alturas[i] > promedio){
			altos++;
		} else if (alturas[i] < promedio){
			bajos++;
		}
	}
	
	cout << "Promedio de las alturas: " << promedio << endl;
	cout << "Personas mas altas que el promedio: " << altos << endl;
	cout << "Personas mas bajas que el promedio: " << bajos << endl;	

	return 0;
}
