#include "Lista.h"
#include <iostream>

using namespace std;


Lista::Lista() : cabeza(NULL), tamano(0) {}


Lista::~Lista() { eliminarTodo(); }


void Lista::insertarInicio(Alumno alu) {
    cabeza = new Nodo(alu, cabeza);
    tamano++;
}


void Lista::insertarFinal(Alumno alu) {
    Nodo* nuevo = new Nodo(alu);
    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != NULL)
            temp = temp->siguiente;
        temp->siguiente = nuevo;
    }
    tamano++;
}


void Lista::mostrarTodo() const {
    Nodo* temp = cabeza;
    while (temp != NULL) {
        temp->dato.mostrar();
        temp = temp->siguiente;
    }
}


bool Lista::estaVacia() const {
    return cabeza == NULL;
}


void Lista::eliminar(string nombre) {
    Nodo* temp = cabeza;
    Nodo* prev = NULL;

    while (temp != NULL && temp->dato.getNombre() != nombre) {
        prev = temp;
        temp = temp->siguiente;
    }

    if (temp == NULL) return;

    if (prev == NULL) {
        cabeza = temp->siguiente;
    } else {
        prev->siguiente = temp->siguiente;
    }

    delete temp;
    tamano--;
}


void Lista::eliminarTodo() {
    while (cabeza != NULL) {
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }
    tamano = 0;
}

