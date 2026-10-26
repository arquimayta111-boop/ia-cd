#include <iostream>
using namespace std;
int main() {
    float horas, pago, sueldo;
    char clase;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese clase (A, B, C, D): ";
    cin >> clase;
    switch (clase) {
        case 'A': case 'a': pago = 50; break;
        case 'B': case 'b': pago = 40; break;
        case 'C': case 'c': pago = 25; break;
        case 'D': case 'd': pago = 20; break;
        default: pago = 0; break;
    }
    sueldo = horas * pago;
    cout << "El sueldo es: S/ " << sueldo << endl;
    return 0;
}