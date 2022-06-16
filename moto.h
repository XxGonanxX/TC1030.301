/*
 * proyecto TRON MENU
 * Alan Patricio González Bernal
 * A01067546
 * 17/06/2022
 * 
 * Esta librería me permite integrar todos los
 * Conceptos necesarios para que el programa
 * Funcione correctamente con los comandos
 * Creados para las motos. Añadiendo la moto
 * Normal y la moto de Kevin Flynn.
 */
 
#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include <string>
using namespace std;

int a;

/* Se crea la clase padre, la cual tendrá
 * Dos clases hijas, siendo estas la moto
 * Normal y la moto de Flynn.
 */
class moto
{

    //Declaro variables públicas.
public:
    moto();
    ~moto();

    string getcolor(string color);
    string setcolor(string color);
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
    void print() { cout << turbo << " + v" << velocidad << '\n'; }
    virtual void uno() = 0;
    
    
    // Declaro variables privadas.
private:
    int velocidad;
    int turbo;
    string color; 
    bool movimiento;
    bool estela;
};

    // Constructores y destructores de la clase padre.
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

string moto::setcolor(string color)
{ 
    color = " ";
    return color;
}

    // Declaro normal que hereda de moto.
class normal : public moto
{

public:
    normal();
    ~normal();
    string getcolor(string color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
    void print1() {cout << "Si se agarra un boost de velocidad, entonces la cantidad de turbos son: " << turbo << "\ny la velocidad"
    " se cambia a: " << velocidad +1.5 << '\n' << endl;}
    void turboyvelocidadboost(int turbo, float velocidad);
    void turboyvelocidad(int t = 3, int v = 5)
    {
        turbo = t;
        velocidad = v;
    }
    /**
     * turboyvelocidad recibe dos parámetros
     *
     * recibe dos parámetros los cuales regresará y más tarde
     * se usarán en string.
     *
     * @param
     * @return valores numéricos.
     */

    normal operator+(normal const &obj)
    {
        normal res;
        res.turbo = turbo + obj.turbo;
        res.velocidad = velocidad + obj.velocidad;
        return res;
    }

    void print() { cout << "Los datos son: \nTurbo: " << turbo << "\nVelociad: " << velocidad << '\n'; }
    virtual void uno();
private:
    int velocidad = 5;
    int turbo = 3;
    string color = "Azul/Rojo"; 
    bool movimiento = true;
    bool estela = true;
};

normal::normal() : moto(){};
normal::~normal(){};

void normal::uno()
{
    cout << "/Estos datos pueden cambiar en el transcurso de la carrera. /" << endl << endl;
}
string normal::getcolor(string color)
{
    color = "Azul/Rojo";
    cout << "El color de la moto es: " << color << endl;
    return color;
}

bool normal::getestela(bool estela)
{
    estela = true;
    cout << "La estela de la moto está en estado: " << estela << endl;
    return estela;
}

bool normal::getmovimiento(bool movimiento)
{
    movimiento = true;
    cout << "La existencia de la moto está en estado: " << movimiento << endl;
    return movimiento;
}

int normal::getvelocidad(int velocidad)
{
    velocidad = 5;
    cout << "La velocidad de la moto es de: " << velocidad << endl;
    return velocidad;
}

int normal::getturbo(int turbo)
{
    turbo = 3;
    cout << "La moto cuenta con " << turbo << " turbos en total" << endl;
    return turbo;
}
void normal::turboyvelocidadboost(int turbo, float velocidad)
{
    turbo = 3;
    velocidad = 5;
    velocidad = velocidad + 1.35;
    cout << "La moto, al agarrar el boost de velocidad, contará con " << turbo << " turbos y " << velocidad << " puntos de velocidad\n" << endl;
}


    // Declaro MotoFlynn que hereda de moto.
class motoFlynn : public moto
{

public:
    motoFlynn();
    ~motoFlynn();
    string getcolor(string color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
    void print() { cout << "Los datos son: \nTurbo: " << turbo << "\nVelociad: " << velocidad << '\n'; }
    void turboyvelocidadboost(int turbo, float velocidad);
    virtual void uno();
private:
    int velocidad = 10;
    int turbo = 5;
    string color = "Blanca"; 
    bool movimiento = true;
    bool estela = true;

};

motoFlynn::motoFlynn(){};
motoFlynn::~motoFlynn(){};

string motoFlynn::getcolor(string color)
{
    color = "Blanco";
    cout << "El color de la moto es: " << color << endl;
    return color;
}

bool motoFlynn::getestela(bool estela)
{
    estela = true;
    cout << "La estela de la moto está en estado: " << estela << endl;
    return estela;
}

bool motoFlynn::getmovimiento(bool movimiento)
{
    movimiento = true;
    cout << "La existencia de la moto está en estado: " << movimiento << endl;
    return movimiento;
}

int motoFlynn::getvelocidad(int velocidad)
{
    velocidad = velocidad + 10;
    cout << "La velocidad de la moto es de: " << velocidad << endl;
    return velocidad;
}

int motoFlynn::getturbo(int turbo)
{
    turbo = turbo + 5;
    cout << "la moto cuenta con " << turbo << " turbos en total" << endl;
    return turbo;
}
void motoFlynn::turboyvelocidadboost(int turbo, float velocidad)
{
    turbo = 5;
    velocidad = 10;
    velocidad = velocidad + 1.35;
    cout << "La moto, al agarrar el boost de velocidad, contará con " << turbo << " turbos y " << velocidad << " puntos de velocidad\n" << endl;
}
void motoFlynn::uno()
{
    cout << "/Estos datos, como fue mencionados anteriormente, pueden cambiar en el transcurso de la carrera, aunque debido a las "
    "capacidades de la misma moto del creador, es probable que los datos que cambien como la velocidad sea solo de manera temporal. /" << endl << endl;
}

#endif