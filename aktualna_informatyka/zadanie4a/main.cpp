#include <iostream>
using namespace std;

int main() {
    int N, K, I = 0, S1 = 0, S2 = 0;
    cout << "Podaj N: ";
    cin >> N;

    for (I = 0; I < N; I++) {
        cout << "Podaj K: ";
        cin >> K;
        if (K % 2 != 0) {
            S1 += K;
        } else {
            S2 += K;
        }
    }

    cout << "Wartosc S1=" << S1 << endl;
    cout << "Wartosc S2=" << S2 << endl;

    return 0;
}