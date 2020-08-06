/**
 * En una tienda de descuento se efectúa una promoción en la cual se hace un descuento
 * sobre el valor de la compra total según el color de la bolita que el cliente saque
 * al pagar en caja.
 * 
 * Si la bolita es de color blanco no se le hará descuento alguno, si es verde se le hará
 * un 10% de descuento, si es amarilla un 25%, si es azul un 50% y si es roja un 100%.
 * Determinar la cantidad final que el cliente deberá pagar por su compra.
 * Se sabe que solo hay bolitas de los colores mencionados.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
  srand(time(NULL));
  const char *colores[5] = { "blanco", "verde", "amarilla", "azul", "roja" };
  const float descuentos[5] = { 0, .1, .25, .5, 1 };
  int index = rand() % 5;
  float compra, descuento, compraFinal;

  cout << "Ingrese el valor de la compra: ";
  cin >> compra;
  
  if (colores[index] == "verde") descuento = compra * descuentos[1];
  else if (colores[index] == "amarilla") descuento = compra * descuentos[2];
  else if (colores[index] == "azul") descuento = compra * descuentos[3];
  else if (colores[index] == "roja") descuento = compra * descuentos[4];
  else descuento = compra * descuentos[0];

  compraFinal = compra - descuento;

  cout << "La bolita es de color " << colores[index] << endl;
  cout << "Tienes que pagar " << compraFinal << endl;

  return 0;
}
