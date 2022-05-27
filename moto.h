#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include <string>
using namespace std;

int a;
class moto
{
public:
    moto();
    ~moto();

    int getcolor(int color);
    int setcolor(int color);
    void getestela(bool estela);
    void setestela(bool estela);
    void getmovimiento(bool movimiento);
    void setmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int setvelocidad(int velocidad);
    int getturbo(int turbo);
    int setturbo(int turbo);
    void turboyvelocidad(int t = 3, int v = 5)
    {
        turbo = t;
        velocidad = v;
    }
    moto operator+(moto const &obj)
    {
        moto res;
        res.turbo = turbo + obj.turbo;
        res.velocidad = velocidad + obj.velocidad;
        return res;
    }
    void print() { cout << turbo << " + v" << velocidad << '\n'; }

private:
    int velocidad;
    int turbo;
    int color; // El color lo marqué así por el momento debido a que aún no resuelvo como poder modificar el color de la estela y de la moto, se investigará y en su defecto se preguntará en asesorías
    bool movimiento;
    bool estela;
};

moto::moto(){};
moto::~moto(){};

int moto::setturbo(int turbo)
{

    turbo = 3;
    return turbo;
}

int moto::setvelocidad(int velocidad)
{

    velocidad = 5;

    return 0;
}

void moto::setmovimiento(bool movimiento)
{

    movimiento = true;
}

int moto::setcolor(int color)
{ // Lo mencionado anteriormente en el tema del color.

    return 0;
}

class normal : public moto
{

public:
    normal();
    ~normal();
    int getcolor(int color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
    void print() { cout << "Velocidad: " << endl; }
};

normal::normal() : moto(){};
normal::~normal(){};

int normal::getcolor(int color)
{
    return color;
}

bool normal::getestela(bool estela)
{

    estela = true;
    return estela;
}

bool normal::getmovimiento(bool movimiento)
{

    movimiento = true;
    return movimiento;
}

int normal::getvelocidad(int velocidad)
{
    return velocidad;
}

int normal::getturbo(int turbo)
{

    return turbo;
}

class motoFlynn : public moto
{

public:
    motoFlynn();
    ~motoFlynn();
    int getcolor(int color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
};

motoFlynn::motoFlynn(){};
motoFlynn::~motoFlynn(){};

int motoFlynn::getcolor(int color)
{

    return color;
}

bool motoFlynn::getestela(bool estela)
{

    estela = true;
    return estela;
}

bool motoFlynn::getmovimiento(bool movimiento)
{

    movimiento = true;
    return movimiento;
}

int motoFlynn::getvelocidad(int velocidad)
{

    velocidad = velocidad + 10;
    return velocidad;
}

int motoFlynn::getturbo(int turbo)
{
    turbo = turbo + 5;
    return turbo;
}

#endif
