#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N = 8;
    int V[] = {-3, -1, 2, 5, 6, 7, 9, 17};
    float S = 0;
    float PROM;
    float A, B, E;
    int C, D, POS;

    for (int I = 0; I < N; I++) {
        S += V[I];
    }

    PROM = S / N;

    for (int I = 1; I < N; I++) {
        if (V[I] > PROM) {
            A = PROM - V[I - 1];
            B = V[I] - PROM;
            C = V[I - 1];
            D = V[I];
            POS = I;
            break;
        }
    }

    if (A < B) {
        E = C;
        POS = POS - 1;
    } else {
        E = D;
    }

    cout << "PROM = " << PROM << endl;
    cout << "E = " << E << endl;
    cout << "POS = " << POS << endl;

    return 0;
}