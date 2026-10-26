#include <iostream>
using namespace std;
int main () {
    int n, m, c, d, u;
    cout <<"ingrese un numero de 4 cifras: ";
    cin >> n;
    m = n / 1000;
    c = (n / 100) % 10;
    d = (n / 10) % 10;
    u = n % 10;
    if (m == u && c == d) {
        cout << "el numero es capicua" << endl;
    } else {
        cout << "el numero no es capicua" << endl;
    }
    return 0;   
}