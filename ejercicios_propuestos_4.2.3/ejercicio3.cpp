#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingrese una letra minuscula: ";
    cin >> letra;
    if (letra == 'a' or letra == 'e' or letra == 'i' or
        letra == 'o' or letra == 'u') {
        cout << "Es una vocal" << endl;
    } else if (letra == 'y') {
        cout << "Es una semivocal" << endl;
    } else {
        cout << "Es una consonante" << endl;
    }
    return 0;
}
