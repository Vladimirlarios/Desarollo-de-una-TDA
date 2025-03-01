#ifndef Alumno_h
#define Alumno_h

#include <iostream>
#include <string>

class Alumno {
private:
    std::string nombre;
    int edad;
    std::string carrera;
    int semestre;
    float promedio;

public:
    
    Alumno();
    Alumno(std::string, int, std::string, int, float);
    
    
    void setNombre(std::string);
    std::string getNombre() const;
    
    void setEdad(int);
    int getEdad() const;
    
    void setCarrera(std::string);
    std::string getCarrera() const;
    
    void setSemestre(int);
    int getSemestre() const;
    
    void setPromedio(float);
    float getPromedio() const;

   
    void mostrar() const;
};

#endif

