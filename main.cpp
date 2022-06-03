#include <iostream>
#include "moto.h"
#include "personaje.h"
#include <cstdlib>


using namespace std;

    int inicio;
    Personaje personaje;
    Tron tron;
    Clu clu;
    normal motonormal;
    motoFlynn motomotoFlynn;
    string color;
    bool estela;
    bool movimiento;
    int turbo;
    int velocidad;
    int vidas;
    int seleccion;
    string nombre;
    int usuario01;


int main()
{
    cout << endl << "Bienvenido a 'La Red' por favor, para iniciar, escriba 1, de lo contrario, escriba 0 para salir de la red. " << endl << endl;
    cin >> inicio;
    usuario01 = rand();

    if (inicio == 1)
    {
        cout << endl << "Bienvenido nuevamente Usuario " << usuario01 << endl << endl << "Por favor Usuario, selecciona el menú que gustes usar: \n1.- Selección de moto\n2.-Selección de personaje\n" << endl;
        cin >> seleccion;

        if (seleccion == 1){
            cout << "Primera moto, moto básica:\n" << endl;
            motonormal.getcolor(color); //La herencia aplica en todas estas funciónes.
            motonormal.getestela(estela);
            motonormal.getmovimiento(movimiento);
            motonormal.getturbo(turbo);
            motonormal.getvelocidad(velocidad);
            motonormal.print();
            motonormal.turboyvelocidadboost(turbo, velocidad); //Aquí se aplica la sobrecarga de funciónes
            moto* motonormal = new normal(); //Aquí se aplica el polimorfóismo y pointers
            motonormal ->uno();


            cout << "Segunda moto, moto de Flynn:" << endl;
            motomotoFlynn.getcolor(color);
            motomotoFlynn.getestela(estela);
            motomotoFlynn.getmovimiento(movimiento);
            motomotoFlynn.getturbo(turbo);
            motomotoFlynn.getvelocidad(velocidad);
            motomotoFlynn.print();
            motomotoFlynn.turboyvelocidadboost(turbo, velocidad);
            moto* motomotoFlynn = new motoFlynn();
            motomotoFlynn ->uno();

        }
        if (seleccion == 2){

            cout << endl;
            cout << "Los personajes seleccionables son 2, se despliegan a continuación:" << endl;
            tron.getnombre(nombre);
            tron.getcolor(color);
            tron.getvidas(vidas);
            cout << endl;
            clu.getnombre(nombre);
            clu.getcolor(color);
            clu.getvidas(vidas);
            cout << endl;
        }

    }
    return 0;
}


