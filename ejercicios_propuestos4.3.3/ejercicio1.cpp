#include <iostream>
using namespace std;
int main() {
    float importe, desc, total;
    int color;
    cout << "Ingrese importe de compra: ";
    cin >> importe;
    cout << "Bolita (1:Azul, 2:Roja, 3:Blanca): ";
    cin >> color;
    switch (color) {
        case 1: desc = importe * 0.20; break;
        case 2: desc = importe * 0.30; break;
        case 3: desc = 0; break;
        default: desc = 0; break;
    }
    total = importe - desc;
    cout << "Total a pagar: S/ " << total << endl;
    return 0;
}