#include "Lista.h"
#include <iostream>

using namespace std;

int main() {
    Lista lista;
    int opcion;
    string nombre;
    int edad, semestre;
    float promedio;
    string carrera;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insertar Alumno\n";
        cout << "2. Mostrar Alumnos\n";
        cout << "3. Eliminar Alumno\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Nombre: "; cin >> nombre;
                cout << "Edad: "; cin >> edad;
                cout << "Carrera: "; cin >> carrera;
                cout << "Semestre: "; cin >> semestre;
                cout << "Promedio: "; cin >> promedio;
                lista.insertarFinal(Alumno(nombre, edad, carrera, semestre, promedio));
                break;
            case 2:
                lista.mostrarTodo();
                break;
            case 3:
                cout << "Nombre del alumno a eliminar: "; cin >> nombre;
                lista.eliminar(nombre);
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
        }
    } while (opcion != 4);

    return 0;
}

