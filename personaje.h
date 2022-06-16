/*
 * proyecto TRON MENU
 * Alan Patricio González Bernal
 * A01067546
 * 17/06/2022
 * 
 * Esta librería me permite integrar todos los
 * Conceptos necesarios para que el programa
 * Funcione correctamente con los comandos
 * Creados para los personajes. Añadiendo a
 * TRON y a CLU.
 */

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <stdio.h>

/* Se crea la clase padre, la cual tendrá
 * Dos clases hijas, siendo estas TRON y
 * CLU.
 */
class Personaje
{
    // Declaro variables públicas.
public:
    Personaje();
    ~Personaje();

    int getvidas(int vidas);
    int setvidas(int vidas);
    string getcolor(string color); 
    string setcolor(string color);
    string setnombre(string nombre);
    string getnombre(string nombre);
    // Declaro variables privadas.
private:
    int vidas = 3;
    string color;
    string nombre;
};

 // Constructores y destructores de la clase padre.
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

 // Declaro TRON que hereda de personaje.
class Tron : public Personaje
{
    // Declaro variables públicas.
public:
    Tron();
    ~Tron();
    int getvidas(int vidas);
    string getcolor(string color);
    string getnombre(string nombre);
    
    // Declaro variables privadas.
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
    cout << "Estos datos pueden cambiar en el transcurso de la carrera. " << endl << endl;
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

 // Declaro CLU que hereda de personaje.
class Clu : public Personaje
{
    // Declaro variables públicas.
public:
    Clu();
    ~Clu();
    int getvidas(int vidas);
    string getcolor(string color);
    string getnombre(string nombre);

    //Declaro variables privadas.
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
    cout << "Estos datos pueden cambiar en el transcurso de la carrera. " << endl << endl;
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