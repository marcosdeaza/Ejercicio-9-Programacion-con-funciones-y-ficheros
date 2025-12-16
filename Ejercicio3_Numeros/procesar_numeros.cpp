#include <iostream>
#include <fstream> // Librería necesaria para ficheros

using namespace std;

int main() {
    // Abrimos el fichero de lectura
    ifstream archivoEntrada("numeros.txt");
    // Creamos el fichero de escritura
    ofstream archivoSalida("resultado_dobles.txt");

    // Comprobamos si el archivo de entrada existe
    if (!archivoEntrada.is_open()) {
        cout << "Error: No se pudo abrir el archivo 'numeros.txt'. Asegurate de crearlo primero." << endl;
        return 1;
    }

    int numero;
    // El bucle lee número a número hasta llegar al final del fichero
    while (archivoEntrada >> numero) {
        int doble = numero * 2;
        archivoSalida << doble << endl; // Guardamos en el otro fichero
    }

    cout << "Proceso completado. Revisa el archivo 'resultado_dobles.txt'." << endl;

    // Cerramos los archivos
    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}