#include <iostream>
using namespace std;
int main() {
    float t, g, h;
    g = 9.8;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> t;
    h = 0.5 * g * (t * t);
    cout << "La altura que cae es: " << h << " m" << endl;
    return 0;
}