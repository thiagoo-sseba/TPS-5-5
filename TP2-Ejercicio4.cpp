#include <iostream>
using namespace std;

int main() {
	int num[10];
	
	for (int i=0; i<10; i++){
		cout << "Ingrese el numero: ";
		cin >> num[i];
	}
	
	int max = num[0];
	int min = num[0];
	
	for (int i=0; i<10; i++){
		if (num[i] > max){
			max = num[i];
		}
		if (num[i] < min){
			min = num[i];
	}
	}
	
	cout << "El valor maximo es: " << max << endl;
	cout << "El valor minimo es: " << min << endl;
	
	return 0;
}
