#include <iostream>
using namespace std;
int main() {
    int n, c, d, u;
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> n;
    c = n / 100;
    d = (n / 10) % 10;
    u = n % 10;
    if (c == u) {
        cout << n << " es capicua" << endl;
    } else {
        cout << n << " no es capicua" << endl;
    }
    return 0;
}