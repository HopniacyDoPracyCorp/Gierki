#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int max, min;

    cout << "Podaj wartosci a, b, c rozdzielajac je spacjami: ";
    cin >> a >> b >> c;

    cout << "Wprowadzone liczby to: " << a << " " << b << " " << c << endl;

    max = a;
    min = a;

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    if (c > max) {
        max = c;
    }
    if (c < min) {
        min = c;
    }

    if ((a != min && a != max) || (b != min && b != max) || (c != min && c != max)) {
        int mid = a + b + c - min - max;
        cout << "Wypisuje liczby rosnaco: " << min << " " << mid << " " << max << endl;
    } else {
        cout << "Wypisuje liczby rosnaco: " << min << " " << min << " " << max << endl;
    }

    return 0;
}
