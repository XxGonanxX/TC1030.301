#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <stdio.h>

class Personaje
{
public:
    Personaje();
    ~Personaje();

    int getvidas(int vidas);
    int setvidas(int vidas);
    int getcolor(int color); // La misma situación del color del moto.h, para más información, revisar ese documento.
    int setcolor(int color);

private:
    int vidas = 3;
    int color = 0;
};

Personaje::Personaje(){};
Personaje::~Personaje(){};

int Personaje::setvidas(int vidas)
{
    vidas = 3;
    return vidas;
}

int Personaje::setcolor(int color)
{
    color = 0;
    return color;
};

class Tron : public Personaje
{
public:
    Tron();
    ~Tron();
    int getvidas(int vidas);
    int getcolor(int color);
};

Tron::Tron(){};
Tron::~Tron(){};

int Tron::getvidas(int vidas)
{
    return vidas;
}

int Tron::getcolor(int color)
{
    return color;
}

class Clu : public Personaje
{
public:
    Clu();
    ~Clu();
    int getvidas(int vidas);
    int getcolor(int color);
};

Clu::Clu(){};
Clu::~Clu(){};

int Clu::getvidas(int vidas)
{

    return vidas;
}

int Clu::getcolor(int color)
{

    return color;
}

#endif