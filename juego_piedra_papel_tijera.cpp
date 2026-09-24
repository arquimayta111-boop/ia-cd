#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0));
    
    int computadora;
    int usuario;
    
    computadora = rand() % 3 + 1;

    cout << "=== JUEGO DE PIEDRA, PAPEL Y TIJERA ===" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Ingresa el numero de tu eleccion: ";
    cin >> usuario;

    if (usuario < 1 || usuario > 3) {
        cout << "Opcion no valida. Debes ingresar 1, 2 o 3." << endl;
        return 0; 
    }

    cout << "La computadora eligio: " << computadora;
    if (computadora == 1) {
        cout << " (Piedra)" << endl;
    } else if (computadora == 2) {
        cout << " (Papel)" << endl;
    } else {
        cout << " (Tijera)" << endl;
    }

    if (usuario == computadora) {
        cout << "Resultado: EMPATE." << endl;
    } 
    else if ((usuario == 1 && computadora == 3) || 
             (usuario == 2 && computadora == 1) || 
             (usuario == 3 && computadora == 2)) {
       
        cout << "Resultado: ¡GANASTE!" << endl;
    } 
    else {
        cout << "Resultado: LA COMPUTADORA GANA." << endl;
    }

    return 0;
}