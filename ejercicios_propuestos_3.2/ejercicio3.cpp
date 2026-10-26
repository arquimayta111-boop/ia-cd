#include <iostream>
using namespace std;
int main() {
    float r, h, pi, v;
    r = 2;
    pi = 3.1416;
    cout << "Ingrese la altura (m): ";
    cin >> h;
    v = pi * (r * r) * h;
    cout << "El volumen es: " << v << " m3" << endl;
    return 0;
}