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

    /**
     * set turbo establece un parametro.
     *
     * establece 1 parámetro para
     * la variable turbo.
     *
     * @param
     * @return valor de la variable turbo.
     */

int moto::setvelocidad(int velocidad)
{

    velocidad = 5;

    return 0;
}

    /**
     * setvelocidad establece un parametro.
     *
     * establece 1 parámetro para
     * la variable velocidad.
     *
     * @param
     * @return valor de la variable velocidad.
     */

void moto::setmovimiento(bool movimiento)
{

    movimiento = true;
}

    /**
     * set movimiento establece un parametro.
     *
     * establece 1 parámetro para
     * la variable movimiento.
     *
     * @param
     * @return valor de la variable movimiento.
     */

string moto::setcolor(string color)
{ 
    color = " ";
    return color;
}

    /**
     * set color establece un parametro.
     *
     * establece 1 parámetro para
     * la variable turbo.
     *
     * @param
     * @return valor de la variable color.
     */

    // Declaro normal que hereda de moto.
class normal : public moto
{
    //Declaro variables públicas.
public:
    normal();
    ~normal();
    string getcolor(string color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
    void print1() {cout << "Si se agarra un boost de velocidad, entonces la cant"
    "idad de turbos son: " << turbo << "\ny la velocidad se cambia a: "
     << velocidad +1.5 << '\n' << endl;}
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

    /**
     * operator+ realiza la sobrecarga de operadores
     *
     * sobrecarga un operador para así darme dos variables
     *
     * @param
     * @return valor de las variables velocidad y turbo
     */

    void print() { cout << "Los datos son: \nTurbo: " << turbo << "\nVelociad: " 
    << velocidad << '\n'; }
    virtual void uno();

    //Declaro variables públicas.
private:
    int velocidad = 5;
    int turbo = 3;
    string color = "Azul/Rojo"; 
    bool movimiento = true;
    bool estela = true;
};
    // Costructores y destructores de la clase normal.
normal::normal() : moto(){};
normal::~normal(){};

void normal::uno()
{
    cout << "/Estos datos pueden cambiar en el transcurso de la carrera. /"
     << endl << endl;
}
    /**
     * uno es una clase virtual
     *
     * Me permite modificarla dependiendo de la clase para así
     * Poder darle valores diferentes
     *
     * @param
     * @return un cout.
     */

string normal::getcolor(string color)
{
    color = "Azul/Rojo";
    cout << "El color de la moto es: " << color << endl;
    return color;
}

    /**
     * getcolor me dará el valor del color de la moto.
     *
     * Recibe el valor del color.
     *
     * @param
     * @return valore del color.
     */

bool normal::getestela(bool estela)
{
    estela = true;
    cout << "La estela de la moto está en estado: " << estela << endl;
    return estela;
}

    /**
     * getestela me dará el valor de la estela de la moto.
     *
     * Recibe el valor de la estela.
     *
     * @param
     * @return valor de la estela.
     */

bool normal::getmovimiento(bool movimiento)
{
    movimiento = true;
    cout << "La existencia de la moto está en estado: " << movimiento << endl;
    return movimiento;
}

    /**
     * getmovimiento me dará el valor del movimiento de la moto.
     *
     * Recibe el valor del movimiento.
     * 
     * @param
     * @return valor del movimiento.
     */

int normal::getvelocidad(int velocidad)
{
    velocidad = 5;
    cout << "La velocidad de la moto es de: " << velocidad << endl;
    return velocidad;
}

    /**
     * getvelocidad me dará el valor de la velocidad de la moto.
     *
     * Recibe el valor de la velocidad.
     *
     * @param
     * @return valor de la velocidad.
     */

int normal::getturbo(int turbo)
{
    turbo = 3;
    cout << "La moto cuenta con " << turbo << " turbos en total" << endl;
    return turbo;
}

    /**
     * getturbo me dará el valor del turbo de la moto.
     *
     * Recibe el valor del turbo.
     *
     * @param
     * @return valor del turbo.
     */

void normal::turboyvelocidadboost(int turbo, float velocidad)
{
    turbo = 3;
    velocidad = 5;
    velocidad = velocidad + 1.35;
    cout << "La moto, al agarrar el boost de velocidad, contará con " << turbo 
    << " turbos y " << velocidad << " puntos de velocidad\n" << endl;
}

    /**
     * turboyvelocidadboost me dará el valor 
     * de la velocidad, el turbo y la suma de la velocidad
     * al recoger un turbo.
     *
     * Recibe el valor de la velocidad y el del turbo.
     *
     * @param
     * @return valor de velocidad, turbo y velocidad después
     * de recoger un turbo.
     */


    // Declaro MotoFlynn que hereda de moto.
class motoFlynn : public moto
{
    // Declaro métodos públicos.
public:
    motoFlynn();
    ~motoFlynn();
    string getcolor(string color);
    bool getestela(bool estela);
    bool getmovimiento(bool movimiento);
    int getvelocidad(int velocidad);
    int getturbo(int turbo);
    void print() { cout << "Los datos son: \nTurbo: " << turbo << "\nVelociad: "
     << velocidad << '\n'; }
    void turboyvelocidadboost(int turbo, float velocidad);
    virtual void uno();

    // Declaro variables privadas.
private:
    int velocidad = 10;
    int turbo = 5;
    string color = "Blanca"; 
    bool movimiento = true;
    bool estela = true;

};

    // Constructores y destructores de la clase motoFlynn.
motoFlynn::motoFlynn(){};
motoFlynn::~motoFlynn(){};

string motoFlynn::getcolor(string color)
{
    color = "Blanco";
    cout << "El color de la moto es: " << color << endl;
    return color;
}

    /**
     * getcolor me dará el valor del color de la moto.
     *
     * Recibe el valor del color.
     *
     * @param
     * @return valore del color.
     */

bool motoFlynn::getestela(bool estela)
{
    estela = true;
    cout << "La estela de la moto está en estado: " << estela << endl;
    return estela;
}

    /**
     * getestela me dará el valor de la estela de la moto.
     *
     * Recibe el valor de la estela.
     *
     * @param
     * @return valor de la estela.
     */

bool motoFlynn::getmovimiento(bool movimiento)
{
    movimiento = true;
    cout << "La existencia de la moto está en estado: " << movimiento << endl;
    return movimiento;
}

    /**
     * getmovimiento me dará el valor del movimiento de la moto.
     *
     * Recibe el valor del movimiento.
     * 
     * @param
     * @return valor del movimiento.
     */

int motoFlynn::getvelocidad(int velocidad)
{
    velocidad = velocidad + 10;
    cout << "La velocidad de la moto es de: " << velocidad << endl;
    return velocidad;
}

    /**
     * getvelocidad me dará el valor de la velocidad de la moto.
     *
     * Recibe el valor de la velocidad.
     *
     * @param
     * @return valor de la velocidad.
     */

int motoFlynn::getturbo(int turbo)
{
    turbo = turbo + 5;
    cout << "la moto cuenta con " << turbo << " turbos en total" << endl;
    return turbo;
}

    /**
     * getturbo me dará el valor del turbo de la moto.
     *
     * Recibe el valor del turbo.
     *
     * @param
     * @return valor del turbo.
     */

void motoFlynn::turboyvelocidadboost(int turbo, float velocidad)
{
    turbo = 5;
    velocidad = 10;
    velocidad = velocidad + 1.35;
    cout << "La moto, al agarrar el boost de velocidad, contará con " << turbo 
    << " turbos y " << velocidad << " puntos de velocidad\n" << endl;
}

    /**
     * turboyvelocidadboost me dará el valor 
     * de la velocidad, el turbo y la suma de la velocidad
     * al recoger un turbo.
     *
     * Recibe el valor de la velocidad y el del turbo.
     *
     * @param
     * @return valor de velocidad, turbo y velocidad después
     * de recoger un turbo.
     */

void motoFlynn::uno()
{
    cout << "/Estos datos, como fue mencionados anteriormente, pueden cambiar en"
    " el transcurso de la carrera, aunque debido a las capacidades de la misma m"
    "oto del creador, es probable que los datos que cambien como la velocidad se"
    "a solo de manera temporal. /" << endl << endl;
}
    /**
     * uno es una clase virtual
     *
     * Me permite modificarla dependiendo de la clase para así
     * Poder darle valores diferentes
     *
     * @param
     * @return un cout.
     */

#endif // Se termina el .h