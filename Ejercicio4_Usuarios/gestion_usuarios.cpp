#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Usuario {
    string nombre;
    string apellidos;
    int estado; // 0 offline, 1 online
};

int main() {
    const int MAX_USUARIOS = 100; // Tamaño máximo del array
    Usuario listaUsuarios[MAX_USUARIOS];
    int cantidadUsuarios = 0;

    ifstream archivo("usuarios.txt");

    if (!archivo.is_open()) {
        cout << "Error: No se encuentra 'usuarios.txt'." << endl;
        return 1;
    }

    // Bucle de lectura
    // Intentamos leer el nombre. Si hay datos, entramos al bucle.
    while (cantidadUsuarios < MAX_USUARIOS && getline(archivo, listaUsuarios[cantidadUsuarios].nombre)) {
        
        // Leemos apellidos
        getline(archivo, listaUsuarios[cantidadUsuarios].apellidos);
        
        // Leemos el estado (entero)
        archivo >> listaUsuarios[cantidadUsuarios].estado;
        
        // Limpiamos el salto de línea pendiente del buffer para la siguiente vuelta
        archivo.ignore(); 

        cantidadUsuarios++;
    }

    archivo.close();

    cout << "--- Usuarios Online ---" << endl;

    // Recorremos el array que hemos llenado
    for (int i = 0; i < cantidadUsuarios; i++) {
        if (listaUsuarios[i].estado == 1) {
            cout << "El usuario " << listaUsuarios[i].nombre << " " 
                 << listaUsuarios[i].apellidos << " esta online." << endl;
        }
    }

    return 0;
}