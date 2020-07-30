/**
 * Suponga que un individuo desea invertir su capital en un banco y desea saber
 * cuanto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
*/

#include<iostream>

using namespace std;

int main() {
  float capital, i;

  cout << "Ingresa tu capital a invertir: ";
  cin >> capital;

  cout << "Ingresa la razón mensual (default: 2): ";
  cin >> i;

  if (!i) i = 2;

  // Check if capital & i variables has been introduced (not needed, but ¯\_( ͡❛ ͜ʖ ͡❛)_/¯)
  if (capital && i) {
    i /= 100;
    capital += capital * i;
    cout << "La ganancia es: " << capital;
  } else cout << ".______.XD";

  return 0;
}
