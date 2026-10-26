#include  <iostream>    
using namespace std;
int main () {
    int n, m, c, d, u, suma;
    cout <<"ingrese un numero de 4 cifras: ";
    cin >> n;
    m = n / 1000;
    c = (n / 100) % 10;
    d = (n / 10) % 10;
    u = n % 10;
    suma = (m*m*m*m) + (c*c*c*c) + (d*d*d*d) + (u*u*u*u);
    if (suma == n) {
        cout << "el numero es armstrong" << endl;
    } else {
        cout << "el numero no es armstrong" << endl;
    }
    return 0;
}