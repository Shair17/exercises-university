/**
 * Calcular el nuevo salario de un obrero si obtuvo un incremento
 * del 25% sobre su salario anterior.
*/

// ✔️

#include<iostream>

using namespace std;

int main() {
  float salario, aumento, salarioNuevo;
  const float INCREMENTO = .25;

  /** Entrada: salario */
  cout << "Ingresa tu salario: ";
  cin >> salario;

  aumento = salario * INCREMENTO;
  salarioNuevo = salario + aumento;

  /** Salida: nuevo salario */
  cout << "Tu nuevo salario es " << salarioNuevo;

  return 0;
}

