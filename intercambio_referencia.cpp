#include <iostream>

using namespace std;

// Función que recibe referencias (&) para modificar las variables originales
void intercambiar(int &a, int &b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int numero1, numero2;

    cout << "Introduce el primer numero (variable A): ";
    cin >> numero1;
    cout << "Introduce el segundo numero (variable B): ";
    cin >> numero2;

    cout << "\n--- Antes del intercambio ---" << endl;
    cout << "Variable A: " << numero1 << endl;
    cout << "Variable B: " << numero2 << endl;

    // Llamamos a la función
    intercambiar(numero1, numero2);

    cout << "\n--- Despues del intercambio ---" << endl;
    cout << "Variable A: " << numero1 << endl;
    cout << "Variable B: " << numero2 << endl;

    return 0;
}