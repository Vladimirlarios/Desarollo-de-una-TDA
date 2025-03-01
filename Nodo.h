#ifndef Nodo_h
#define Nodo_h

#include "Alumno.h"

class Nodo {
public:
    Alumno dato;
    Nodo* siguiente;

   
    Nodo(const Alumno& alumno, Nodo* sig = NULL);
};

#endif


