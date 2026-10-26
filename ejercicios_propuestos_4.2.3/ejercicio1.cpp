#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Ingrese el numero entero A: ";
    cin >> a;
    cout << "Ingrese el numero entero B: ";
    cin >> b;
    if (a % b == 0) {
        cout << a << " es divisible por " << b << endl;
    } else {
        cout << a << " no es divisible por " << b << endl;
    }
    return 0;
}