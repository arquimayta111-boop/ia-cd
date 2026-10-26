#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int suma = 0;
    int exponente = 5;
    for (int base = 1; base <= 5; base++) {
        suma += pow(base, exponente);
        exponente--; 
    }
    cout << "La suma de la serie S = 1^5 + 2^4 + 3^3 + 4^2 + 5^1 es: " << suma << endl;
    return 0;
}