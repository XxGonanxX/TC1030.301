/*
 * proyecto TRON MENU
 * Alan Patricio González Bernal
 * A01067546
 * 17/06/2022
 * 
 * Este proyecto para la clase TC1030 es un menú
 * De información sobre el mundo de TRON y los 
 * Combates/carreras de motos.
 */
 
#include <iostream> // para imprimir.
#include "moto.h" // biblioteca con objetos para el proyecto.
#include "personaje.h" // biblioteca con objetos para el proyecto.
#include <cstdlib> // para que el rand() funcione.


using namespace std;

    /* Se realiza la definición de variables
     * para que el proyecto funcione.
     */
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
    int final1 = 1;
    int i;


int main()
{ /* El programa utiliza varios couts 
   * en el main para explicar su uso
   */
    usuario01 = rand();
    cout << endl << "Bienvenido a 'La Red' Usuario "<< usuario01 << "\n" << endl;
    for (final1 = 1; final1 >=0; final1=final1+1){
        cout << endl << endl << "Por favor, escriba la opción del menú que gustes usar: \n1.- Selección de moto\n2.- Selección "
        "de personaje\n3.- Contexto de lo que sucede en la carrera\n4.- Datos de desarrollador\n5.- Salir del programa" << endl << endl;
        cin >> seleccion;

            if (seleccion == 1 ){
                cout << "AVISO\nLOS DATOS NO PUEDEN SER MODIFICADOS, SON EXCLUSCIVAMENTE PARA QUE EL USUARIO PUEDA VERLOS (ESTOS DATOS"
                " SON APROXIMACIÓNES DE LAS HABILIDADES DEMOSTRADAS EN LAS CARRERAS DEL PASADO)" << endl << endl;
                cout << "Primera moto, moto básica:\n" << endl;
                motonormal.getcolor(color); // La herencia aplica en todas estas funciónes.
                motonormal.getestela(estela);
                motonormal.getmovimiento(movimiento);
                motonormal.getturbo(turbo);
                motonormal.getvelocidad(velocidad);
                motonormal.print();
                motonormal.turboyvelocidad(); // Se aplica la sobrecarga de operadores.
                motonormal.turboyvelocidadboost(turbo, velocidad); // Aquí se aplica la sobrecarga de funciónes.
                moto* motonormal = new normal(); // Aquí se aplica el polimorfóismo, pointers y abstracción.
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
                cout << "AVISO\nLOS DATOS NO PUEDEN SER MODIFICADOS, SON EXCLUSCIVAMENTE PARA QUE EL USUARIO PUEDA VERLOS (ESTOS DATOS"
                " SON APROXIMACIÓNES DE LAS HABILIDADES DEMOSTRADAS EN LAS CARRERAS DEL PASADO)" << endl << endl;
                cout << "Los personajes de los combates son 2, se despliegan a continuación:" << endl;
                tron.getnombre(nombre);
                tron.getcolor(color);
                tron.getvidas(vidas);
                cout << endl;
                clu.getnombre(nombre);
                clu.getcolor(color);
                clu.getvidas(vidas);
                cout << endl;
            }
            if (seleccion == 3){

                cout << "\n\nEste programa es un menú informativo el cual le permite al Usuario poder ver los datos de las motos y los "
                "personajes que compiten en la carrera de La Red. Este conflicto comenzó hace años...\n\nHISTORIA: \n\nDurante muchos "
                "siglos...\n\nEl creador de la red, Kevin Flynn, tenía una una idea... Crear un mundo virtual en el cual la gente" 
                " pudiera vivir, imaginó el futuro...\nKevin Flynn no estaba solo, a pesar de contar con el apoyo de su incondicional"
                " amigo TRON, Kevin necesitaba ayuda. Entonces decidió crear a CLU, una copia de sí mismo la cual lo ayudaría a cumplir"
                " su visión de un mundo perfecto.\n\nPero CLU no permitía ningún tipo de error... CLU quería salir de La Red para poder"
                " dominar el mundo y eliminar a cualquiera que quisiera interferir en su misión. TRON no podía permitir esto, así que "
                "entraron en combate. Ahora, cada cierto tiempo, TRON y CLU compiten en una carrera, si CLU gana, el podrá salir de La "
                "Red y dominar al mundo, si TRON gana, CLU no podrá salir.\n\nEl combate consiste en una carrera de motos de luz, los "
                "combatientes utilizarán unas motos las cuales dejan una estela sólida, estela con la cual deben hacer que el otro corredor"
                " choque y así, pierda, cada competidor cuenta con 3 vidas de manera inicial y con los turbos dependiendo de la moto de luz"
                "que utilizan." << endl << endl;

            }
            if(seleccion == 4){

                cout << "Este programa fue desarrollado por: \nAlan Patricio González Bernal, con matrícula: \nA01067546\n\nDedicatoria:"
                "\n\nA mi profesor Benja, espero este programa le guste, sé que no es el más complejo pero eso no significa que no lo haya"
                " hecho con mucho cariño y esfuerzo, es un concepto bastante interesante que me gustaría ampliar más en futuros semestres."
                " Espero le haya agradado como va quedando!\n\n\n-Alan Patricio González Bernal 'El creador de esta Red'" << endl << endl;
            }
            if(seleccion == 5){
                cout << endl << "Saliendo del sistema, gracias por visitarnos Usuario "<< usuario01 << endl << endl;
                final1 = final1 - (final1 + 5);
            }
            else{

            cout << endl << "Por favor usuario, seleccióne una opción válida." << endl << endl;
            
            }
    };
    return 0;
}