#include "Alumno.h"

using namespace std;


Alumno::Alumno() : nombre(""), edad(0), carrera(""), semestre(0), promedio(0.0) {}

Alumno::Alumno(string nom, int ed, string carr, int sem, float prom) 
    : nombre(nom), edad(ed), carrera(carr), semestre(sem), promedio(prom) {}


void Alumno::setNombre(string nom) { nombre = nom; }
string Alumno::getNombre() const { return nombre; }

void Alumno::setEdad(int ed) { edad = ed; }
int Alumno::getEdad() const { return edad; }

void Alumno::setCarrera(string carr) { carrera = carr; }
string Alumno::getCarrera() const { return carrera; }

void Alumno::setSemestre(int sem) { semestre = sem; }
int Alumno::getSemestre() const { return semestre; }

void Alumno::setPromedio(float prom) { promedio = prom; }
float Alumno::getPromedio() const { return promedio; }

void Alumno::mostrar() const {
    cout << "Nombre: " << nombre << ", Edad: " << edad 
         << ", Carrera: " << carrera << ", Semestre: " << semestre 
         << ", Promedio: " << promedio << endl;
}

