#include <iostream>
using namespace std;

int main() {
    const int dias = 30;
    float temp[dias];
    float suma = 0, maxT = -999, minT = 999;
    int bajo10 = 0;

    for (int i = 0; i < dias; i++) {
        cout << "Día " << i+1 << ": ";
        cin >> temp[i];
        suma += temp[i];
        if (temp[i] > maxT) maxT = temp[i];
        if (temp[i] < minT) minT = temp[i];
        if (temp[i] < 10) bajo10++;
    }

    cout << "Temp Máx: " << maxT << "\nTemp Mín: " << minT << "\nPromedio: " << suma/dias << "\nDías <10°C: " << bajo10 << endl;
}