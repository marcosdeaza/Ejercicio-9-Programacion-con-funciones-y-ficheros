#include <iostream>

using namespace std;

const double PI = 3.14159265359;

// Función para calcular el diámetro (2 * radio)
double calcularDiametro(double radio) {
    return 2 * radio;
}

// Función para calcular el perímetro (2 * PI * radio)
double calcularPerimetro(double radio) {
    return 2 * PI * radio;
}

// Función para calcular el área (PI * radio^2)
double calcularArea(double radio) {
    return PI * (radio * radio);
}

int main() {
    double radio;

    cout << "--- Calculadora de Circulos ---" << endl;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    // Llamadas a las funciones
    double diametro = calcularDiametro(radio);
    double perimetro = calcularPerimetro(radio);
    double area = calcularArea(radio);

    cout << "\nResultados:" << endl;
    cout << "Diametro: " << diametro << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

    return 0;
}