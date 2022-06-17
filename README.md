# Tron
Este programa está pensado para ser un menú de selección para ver todos los archivos disponibles en el mundo de corredores de TRON, principalmente para el combate de todos los tiempos, TRON contra CLU.

# Funcionalidad
Este programa es un menú interactivo con el cual el usuario puede ver caracteristicas y especificaciónes sobre las motos del mundo de Tron y sus personajes, además de una explicación sobre la historia del mundo de tron y predicciónes sobre carreras próximas, hasta máximo 3 carreras en el futuro.

# Casos de error
Si el usuario ingresa un valor de caracter o un valor flotante en lugar de un número entero, el ciclo for se vuelve infinito y el programa se repetirá sin fin hasta que se fuerce la salida del código. Este caso de error está mencionado en los comentarios del main.

# UML
El diagrama muestra las clases que se usarán para la creación del menú de manera visual, con señalamientos que permiten a cualquier persona que vea el diagrama entender de manera básica como se relaciónan las clases.


# Segundo cambio
Se corrigió el UML junto con al explicación del proyecto en este Readme.

# Tercer cambio
Se añadió la función de polimorfismo al código del menú.

# Cuarto cambio
Se añadió la sobrecarga de operadores y el uso de clases abstractas.

# Quinto cambio
Se añadieron funciónes sobre el menú principal y se le dió el formato PEP8. El programa está terminado.

# Consideraciónes
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ moto.h personaje.h main.cpp"

correr en linux: "/a.out"

correr en windows: "a.exe"

# Detalles sobre el desarrollo
Al comienzo del desarrollo se definieron las dos clases padres que se usarían para poder generar el programa: moto y personaje. Una vez decididas las clases padres se comenzó con el desarrollo de los valores que tendrían ambas clases y sus clases hijas. Una vez completado este paso, se comenzó con la ideación del main.cpp para asegurarse de que el código funcione de manera correcta. Cabe mencionar que este proyecto no está diseñado para modificaciónes del mismo, es un menú que se podría comparar con la información que uno podría conseguir en un museo. Siendo méramente de manera de exposición sobre la información que existe sobre el mundo de Tron. Esta información fue recabada utilizando como fuentes las peliculas de Tron del año 1982 y 2010.
