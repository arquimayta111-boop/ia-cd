#include <iostream>
using namespace std;
int main() {
    int a, b, c, mayor, menor, medio;
    cout << "Ingrese 3 numeros enteros: ";
    cin >> a >> b >> c;
    mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    medio = (a + b + c) - mayor - menor;
    cout << "El numero intermedio es: " << medio << endl;
    return 0;
}