/**
 * En un supermercado se hace una promoción, mediante la cual el cliente obtiene un descuento
 * dependiendo de un número que se escoge al azar. Si el numero escogido es menor que 74
 * el descuento es del 15% sobre el total de la compra, si es mayor o igual a 74 el descuento
 * es del 20%. Obtener cuanto dinero se le descuenta.
*/

#include<iostream>
#include<math.h>

// Podría haber definido aquí RAND_MAX para evitarme crear una función, pero lo hice de todas maneras.
// #define RAND_MAX = 100 ¿? XD

using namespace std;

/**
 * La operación es simple:
 * min, max: enteros pasados por parámetros en esta función.
 * rand(): es una función? nativa de las librerías de cpp (devuelve un número entre 0 y la constante por defecto RAND_MAX => 2147483647).
 * 
 * Entonces => min: 10 + 1804289383 % ((max: 100 + 1 = 101) - 10) = 88
*/
int getRandomNumber(int min, int max) {
  static bool firstAttemp = true;
  if (firstAttemp) {
    // Esto arregla el retorno del mismo número luego de poco tiempo
    // Cambia la semilla por la fecha del equipo, es por eso que llamo a time() y le paso NULL
    srand(time(NULL));
    firstAttemp = !firstAttemp;
  }
  return min + rand() % (( max + 1 ) - min);
}

int main() {
  /**
   * Aquí no considero a los porcentajes como constantes,
   * así me ahorro declarar dos constantes, y solo utilizo
   * una variable flotante para almacenar el porcentaje
   * del descuento y en base al resultado del número aleatorio
   * obtenido con la función ´getRandomNumber´ (prefiero programar en inglés)
   * se le asignara un valor a la variable de descuento.
  */

  float precioInicial, precioDesc, descuento, precioFinal;
  int random = getRandomNumber(10, 100);

  cout << "Ingresa el precio inicial: ";
  cin >> precioInicial;

  if (random >= 74) descuento = .2;
  else descuento = .15;

  precioDesc = precioInicial * descuento;

  precioFinal = precioInicial - precioDesc;

  cout << "El número aleatorio es " << random << " y tienes un descuento del " << (random >= 74 ? "20%" : "15%") << " sobre el total de la compra." << endl;

  cout << "El precio final es " << precioFinal;

  return 0;
}
