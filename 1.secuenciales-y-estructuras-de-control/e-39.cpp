/**
 * En una llantera se ha establecido una promoción de las llantas marca “Ponchadas”,
 * dicha promoción consiste en lo siguiente:
 * 
 * Si se compran menos de cinco llantas el precio es de $300 cada una,
 * de $250 si se compran de cinco a 10 y de $200 si se compran más de 10.
 * 
 * Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas
 * que compra y la que tiene que pagar por el total de la compra.
*/

#include<iostream>

using namespace std;

int main() {
  float precioLlanta, precioFinal;
  int llantasCompradas;

  cout << "Ingrese las llantas compradas: ";
  cin >> llantasCompradas;

  if (llantasCompradas < 5) precioLlanta = 300;
  else if (llantasCompradas >= 5 && llantasCompradas <= 10) precioLlanta = 250;
  else precioLlanta = 200;

  precioFinal = precioLlanta * llantasCompradas;

  cout << "Tiene que pagar " << precioFinal << " por " << llantasCompradas << (llantasCompradas <= 1 ? " llanta " : " llantas") << endl;

  return 0;
}
