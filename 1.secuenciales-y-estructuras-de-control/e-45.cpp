#include "iostream"

using namespace std;



int main() {
  /*float numero1, numero2, numero3;
  float numeroIntermedio;

  cout << "Ingresa numero 1: ";
  cin >> numero1;

  cout << "Ingresa numero 2: ";
  cin >> numero2;

  cout << "Ingresa numero 3: ";
  cin >> numero3;*/

  int numeroInicial, numeroFinal;

  cout << "Ingresa numero inicial: ";
  cin >> numeroInicial;

  cout << "Ingresa numero final: ";
  cin >> numeroFinal;

  int contador = numeroInicial;

  while (contador < numeroFinal) {
    cout << contador << endl;
    contador++;
  }





















  /*if (numero1 <= numero2 && numero2 <= numero3) {
    numeroIntermedio = numero2;
  } else if (numero1 <= numero3 && numero3 <= numero2) {
    numeroIntermedio = numero3;
  } else if (numero2 <= numero1 && numero1 <= numero3) {
    numeroIntermedio = numero1;
  } else if (numero2 <= numero3 && numero3 <= numero1) {
    numeroIntermedio = numero3;
  } else if (numero3 <= numero1 && numero1 <= numero2) {
    numeroIntermedio = numero1;
  } else {
    numeroIntermedio = numero2;
  }*/

  // cout << numeroIntermedio << endl;

  return 0;
}
