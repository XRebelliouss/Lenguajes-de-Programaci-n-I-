#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;
    char continuar;

    do {
        // Solicitar los dos números
        cout << "Escribe el primer número: ";
        cin >> numero1;
        cout << "Escribe el segundo número: ";
        cin >> numero2;

        // Realizar y mostrar las operaciones
        cout << "La suma es: " << (numero1 + numero2) << endl;
        cout << "La resta es: " << (numero1 - numero2) << endl;
        cout << "La multiplicación es: " << (numero1 * numero2) << endl;
        cout << "La división es: ";
        if (numero2 != 0) {
            cout << (numero1 / numero2) << endl;
        } else {
            cout << "No se puede dividir por cero." << endl;
        }

        // Preguntar si desea continuar
        cout << "¿Deseas realizar otra operación? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
