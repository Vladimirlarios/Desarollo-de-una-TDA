#include "Nodo.h"


Nodo::Nodo(const Alumno& alumno, Nodo* sig) : dato(alumno), siguiente(sig) {}

