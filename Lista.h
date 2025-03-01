#ifndef Lista_h
#define Lista_h

#include "Nodo.h"

class Lista {
private:
    Nodo* cabeza;
    int tamano;

public:

    Lista();
    ~Lista();


    void insertarInicio(Alumno);
    void insertarFinal(Alumno);
    void mostrarTodo() const;
    bool estaVacia() const;
    void eliminar(std::string nombre);
    void eliminarTodo();
};

#endif

