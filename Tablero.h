#ifndef TABLERO_H
#define TABLERO_H
#include "Posicion.h"
#include "Serpiente.h"

class Tablero {
    private:
    int ancho;
    int altura;
    Serpiente serpiente;
    //variables

    public:
    void dibujar(); //Funcion para dibujar el tablero
    bool checarColision(const Posicion& p); //Funcion para checar la colicion de la serpiente
};