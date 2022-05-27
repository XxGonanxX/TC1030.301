#include <iostream>
#include "moto.h"
#include "personaje.h"

using namespace std;

int main()
{
    int inicio;
    Tron tron;
    normal moto_normal;
    moto moto;

    cout << endl
         << "Bienvenido a 'La Red' por favor, para iniciar, escriba 1, de lo contrario, escriba 0 para salir de la red. " << endl
         << endl;
    cin >> inicio;

    if (inicio == 1)
    {
        cout << endl
             << "Bienvenido nuevamente Tron" << endl
             << endl;

        moto_normal.print();

        moto.turboyvelocidad();

        moto.print();
    }
    return 0;
}