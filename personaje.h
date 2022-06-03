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
    string getcolor(string color); // La misma situación del color del moto.h, para más información, revisar ese documento.
    string setcolor(string color);
    string setnombre(string nombre);
    string getnombre(string nombre);
private:
    int vidas = 3;
    string color;
    string nombre;
};

Personaje::Personaje(){};
Personaje::~Personaje(){};

int Personaje::setvidas(int vidas)
{
    vidas = 3;
    return vidas;
}

string Personaje::setcolor(string color)
{
    color = " ";
    return color;
};

class Tron : public Personaje
{
public:
    Tron();
    ~Tron();
    int getvidas(int vidas);
    string getcolor(string color);
    string getnombre(string nombre);
private:
    int vidas = 3;
    string color;
    string nombre;
};

Tron::Tron(){};
Tron::~Tron(){};

int Tron::getvidas(int vidas)
{
    vidas = 3;
    cout << "Tron cuenta con: " << vidas << " vidas" << endl;
    return vidas;
}

string Tron::getcolor(string color)
{
    color = "Azul";
    cout << "El color de Tron es: " << color << endl;
    return color;
}

string Tron::getnombre(string nombre)
{
    nombre = "TRON";
    cout << "Combatiente: " << nombre << "\nUn héroe de leyenda capaz de salvar la red." << endl;
    return nombre;
}

class Clu : public Personaje
{
public:
    Clu();
    ~Clu();
    int getvidas(int vidas);
    string getcolor(string color);
    string getnombre(string nombre);
private:
    int vidas = 3;
    string color;
    string nombre;
};

Clu::Clu(){};
Clu::~Clu(){};

int Clu::getvidas(int vidas)
{
    vidas = 3;
    cout << "Clu cuenta con " << vidas << " vidas" << endl;
    return vidas;
}

string Clu::getcolor(string color)
{
    color = "rojo";
    cout << "Clu cuenta con el color: " << color << endl;
    return color;
}

string Clu::getnombre(string nombre)
{
    nombre = "CLU";
    cout << "Combatiente: " << nombre << "\nUn tirano que solo quiere conservar la Red para los que el considere dignos." << endl;
    return nombre;
}
#endif