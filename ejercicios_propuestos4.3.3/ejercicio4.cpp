#include <iostream>
using namespace std;
int main() {
    char op;
    float b, h, lado, r, area;
    cout << "Menu: (a)Triangulo (b)Cuadrado (c)Circulo (d)Rectangulo: ";
    cin >> op;
    switch (op) {
        case 'a': cout << "Base y altura: "; 
        cin >> b >> h; 
        area = (b * h) / 2; break;
        case 'b': cout << "Lado: "; 
        cin >> lado; 
        area = lado * lado; break;
        case 'c': cout << "Radio: "; 
        cin >> r; 
        area = 3.1416 * r * r; break;
        case 'd': cout << "Base y altura: "; 
        cin >> b>> h; 
        area = b * h; break;
    }
    cout << "El area calculada es: " << area << endl;
    return 0;
}