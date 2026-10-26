#include <iostream>
using namespace std;
int main() {
    float n1, n2, suma, resta, multi;
    cout << "Ingrese primer numero: ";
    cin >> n1;
    cout << "Ingrese segundo numero: ";
    cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multi = n1 * n2;
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multi << endl;
    return 0;
}