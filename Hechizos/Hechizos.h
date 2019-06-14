//
// Created by ariana on 13/06/19.
//

#ifndef HECHIZOS_HECHIZOS_H
#define HECHIZOS_HECHIZOS_H

#include <string>

struct Mago{
    int vida=0;
    int defensa=0;
    int oponente=0;
};

class Hechizo{
protected:
    std::string nombre;
public:
    Hechizo(std::string nombre):nombre(nombre){};
    virtual void usarHechizo(Mago* m1)=0;
};

class Ataque:public Hechizo{
    int poder=0;
public:
    Ataque(std::string nombre,int poder):Hechizo(nombre),poder(poder){};
    void usarHechizo(Mago* m1) override;
};

class Sanacion:public Hechizo{
    int sanacion=0;
public:
    Sanacion(std::string nombre, int sanacion):Hechizo(nombre),sanacion(sanacion){};
    void usarHechizo(Mago* m1) override;
};

class Proteccion:public Hechizo{
    int time_escudo=0;
public:
    Proteccion(std::string nombre, int time_escudo):Hechizo(nombre),time_escudo(time_escudo){};
    void usarHechizo(Mago* m1) override;
};

#endif //HECHIZOS_HECHIZOS_H
