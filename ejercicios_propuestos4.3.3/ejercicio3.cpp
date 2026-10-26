#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float n1, n2, res;
    char op;
    cout << "Ingrese dos numeros: ";
    cin >> n1 >> n2;
    cout << "Operacion (+, -, *, /, ^): ";
    cin >> op;
    switch (op) {
        case '+': res = n1 + n2; break;
        case '-': res = n1 - n2; break;
        case '*': res = n1 * n2; break;
        case '/': res = n1 / n2; break;
        case '^': res = pow(n1, n2); break;
        default: res = 0; break;
    }
    cout << "El resultado es: " << res << endl;
    return 0;
}