#include <iostream>
using namespace std;

int main() {
    int K = 0, N, d;
    cout << "Podaj liczbe N: ";
    cin >> N;
    while (N != 0) {
        d = N % 10;
        N = N / 10;
        K += d;
    }
    cout << "K = " << K << endl;
    return 0;
}