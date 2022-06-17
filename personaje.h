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

    /**
     * setvidas pondrá el valor de las vidas de los personajes.
     *
     * Me permite declarar cuántas vidas tenrá un personaje.
     *
     * @param
     * @return la cantidad de vidas que tendrán los personajes.
     */


string Personaje::setcolor(string color)
{
    color = " ";
    return color;
};

    /**
     * setcolor pondrá el valor del color de los personajes
     *
     * Me permite declarar el color que tendrá un personaje.
     *
     * @param
     * @return la variable del color para el personaje.
     */


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
    // Cosntructores y destructores de la clase Tron.
Tron::Tron(){};
Tron::~Tron(){};

int Tron::getvidas(int vidas)
{
    vidas = 3;
    cout << "Tron cuenta con: " << vidas << " vidas" << endl;
    cout << "Estos datos pueden cambiar en el transcurso de la carrera. " << endl 
    << endl;
    return vidas;
}

    /**
     * getvidas me dará el valor de las vidas del personaje.
     *
     * Me permite ver con cuántas vidas cuenta un presonaje,
     * en este caso, Tron.
     *
     * @param
     * @return la variable del vidas para Tron.
     */



string Tron::getcolor(string color)
{
    color = "Azul";
    cout << "El color de Tron es: " << color << endl;
    return color;
}

    /**
     * getcolor me dará el valor del color del personaje.
     *
     * Me permite ver el color que tendrá un personaje.
     *
     * @param
     * @return la variable del color para Tron.
     */

string Tron::getnombre(string nombre)
{
    nombre = "TRON";
    cout << "Combatiente: " << nombre << "\nUn héroe de leyenda capaz de salvar la "
    "red." << endl;
    return nombre;
}

    /**
     * getnombre me da el valor de nombre para el personaje
     *
     * Me da el valor del nombre de un personaje, en este caso
     * Tron.
     * 
     * @param
     * @return la variable del nombre para el personaje.
     */


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

    // Declaro los constructores y destructores de Clu.
Clu::Clu(){};
Clu::~Clu(){};

int Clu::getvidas(int vidas)
{
    vidas = 3;
    cout << "Clu cuenta con " << vidas << " vidas" << endl;
    cout << "Estos datos pueden cambiar en el transcurso de la carrera. " << endl
     << endl;
    return vidas;
    
}

    /**
     * getvidas me dará el valor de las vidas del personaje.
     *
     * Me permite ver con cuántas vidas cuenta un presonaje,
     * en este caso, Clu.
     *
     * @param
     * @return la variable del vidas para Clu.
     */

string Clu::getcolor(string color)
{
    color = "rojo";
    cout << "Clu cuenta con el color: " << color << endl;
    return color;
}

    /**
     * getcolor me dará el valor del color del personaje.
     *
     * Me permite ver el color que tendrá un personaje.
     *
     * @param
     * @return la variable del color para Clu.
     */

string Clu::getnombre(string nombre)
{
    nombre = "CLU";
    cout << "Combatiente: " << nombre << "\nUn tirano que solo quiere conservar la "
    "Red para los que el considere dignos." << endl;
    return nombre;
}

    /**
     * getnombre me da el valor de nombre para el personaje
     *
     * Me da el valor del nombre de un personaje, en este caso
     * Clu.
     * 
     * @param
     * @return la variable del nombre para el personaje.
     */

#endif // Se termina el .h