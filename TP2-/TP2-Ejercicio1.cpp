#include <iostream>
using namespace std;

int main() {
	int vec[5] = {2,5,3,10,9};
	int suma = 0;
	
	for (int i=0; i<5; i++){ 
		suma += vec[i];
	}
	
	cout << "La suma de los elementos es: " << suma << endl;
	
	return 0;
}
