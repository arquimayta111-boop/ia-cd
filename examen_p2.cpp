#include <iostream>
using namespace std;
int main() {
    int n;
    double suma = 0.0;
    cout << "Ingrese la cantidad de terminos (n): ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double numerador = 2 * i - 1;
        double denominador = 2 * i;
        double termino = numerador / denominador;
        if (i % 2 != 0) {
            suma += termino;
        } else {
            suma -= termino;
        }
    }
    cout << "El resultado de la serie S es: " << suma << endl;
    return 0;
}