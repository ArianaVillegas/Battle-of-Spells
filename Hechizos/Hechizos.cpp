//
// Created by ariana on 13/06/19.
//

#include "Hechizos.h"

void Ataque::usarHechizo(Mago* m1) {
    if(m1->defensa<=0)
        m1->oponente-=poder;
    else
        m1->defensa-=1;
}

void Sanacion::usarHechizo(Mago* m1) {
    m1->vida+=sanacion;
}

void Proteccion::usarHechizo(Mago* m1) {
    m1->defensa+=time_escudo;
}