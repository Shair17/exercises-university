/**
 * Calcular el total que una persona debe pagar en una llantera,
 * si el precio de cada llanta es de $800 si se compran menos de 5 llantas
 * y de $700 si se compran 5 o mas.
*/

#include<iostream>

using namespace std;

int main() {
  int cantidadLlantas, precioLlantas;
  const int PRECIO_MENOS_DE_5 = 800, PRECIO_5_O_MAS = 700;

  cout << "Ingresa la cantidad de llantas: ";
  cin >> cantidadLlantas;

  if (cantidadLlantas >= 5) precioLlantas = cantidadLlantas * PRECIO_5_O_MAS;
  else precioLlantas = cantidadLlantas * PRECIO_MENOS_DE_5;

  cout << "El total a pagar es de " << precioLlantas;

  return 0;
}