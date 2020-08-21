/**
 * Cinco miembros de un club contra la obesidad desean saber cuánto
 * han bajado o subido de peso desde la última vez que se reunieron.
 * Para esto se debe realizar un ritual de pesaje en donde cada uno
 * se pesa en diez básculas distintas para así tener el promedio
 * más exacto de su peso.
 * Si existe diferencia positiva entre este promedio de peso y el peso
 * de la última vez que se reunieron, significa que subieron de peso.
 * Pero si la diferencia es negativa, significa que bajaron.
 * Lo que el problema requiere es que por cada persona se imprima
 * un letrero que diga:
 * “SUBIO” o “BAJO”  y la cantidad de kilos que subió o bajo de peso.
*/

#include <iostream>

using namespace std;

int main() {
  float ultimoPeso, bascula, pesoTotal, promedioBascula;
  int i = 1, cont = 1, acu = 0;

  while (i <= 5) {
    cout << "Cuál fue el peso de la última vez? ";
    cin >> ultimoPeso;

    while (cont <= 10) {
      cout << "Ingrese el peso de la bascula número " << cont << " ";
      cin >> bascula;

      acu += bascula;

      cont++;
    }

    promedioBascula = acu / 10;
    pesoTotal = promedioBascula - ultimoPeso;

    if (pesoTotal > 0) {
      cout << "SUBIO" << endl;
      cout << "Total de kilos: " << pesoTotal << endl;
    } else {
      cout << "BAJO" << endl;
      cout << "Total de kilos: " << pesoTotal  << endl;
    }

    i++;
  }

  return 0;
}
