/**
 * Una persona debe realizar un muestreo con 50 personas para determinar
 * el promedio de peso de los niños, jóvenes, adultos y viejos que existen
 * en su zona habitacional.
 * Se determinan las categorías con base en la siguiente tabla:
 * 
 *  CATEGORÍA                 EDAD
 *   Niños                   0 - 12
 *   Jóvenes                13 - 29
 *   Adultos                30 - 59
 *   Viejos                 60 - +
*/

#include <iostream>

using namespace std;

int main() {
  float pesoN, pesoJ, pesoA, pesoV, peso;
  int ninhos = 0, jovenes = 0, adultos = 0, viejos = 0, edad, index = 1;
  float promedioN, promedioJ, promedioA, promedioV;

  while (index <= 50) {
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su peso: ";
    cin >> peso;

    if (edad <= 12) {
      ninhos += 1;
      pesoN += peso;
      promedioN = pesoN / ninhos;

      cout << "Estás en la categoría de niños" << endl;
      cout << "Total de niños: " << ninhos << endl;
    }

    if (edad >= 13 && edad <= 29) {
      jovenes += 1;
      pesoJ += peso;
      promedioJ = pesoJ / jovenes;

      cout << "Estás en la categoría de jovenes" << endl;
      cout << "Total de jovenes: " << jovenes << endl;
    }

    if (edad >= 30 && edad <= 59) {
      adultos += 1;
      pesoA += peso;
      promedioA = pesoJ / jovenes;

      cout << "Estás en la categoría de adultos." << endl;
      cout << "Total de adultos: " << adultos << endl;
    }

    if (edad >= 60) {
      viejos += 1;
      pesoV += peso;
      promedioV = pesoV / viejos;

      cout << "Estás en la categoría de viejos." << endl;
      cout << "Total de viejos: " << viejos << endl;
    }

    index++;
  }

  cout << "El promedio de peso de niños es: " << promedioN;
  cout << "El promedio de peso de jovenes es: " << promedioJ;
  cout << "El promedio de peso de adultos es: " << promedioA;
  cout << "El promedio de peso de viejos es: " << promedioV;

  return 0;
}
