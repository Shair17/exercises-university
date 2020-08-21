/**
 * Un Zoólogo pretende determinar el porcentaje de animales que hay
 * en las siguientes tres categorías de edades:
 * de 0 a 1 año, de más de 1 año y menos de 3 y de 3 o más años.
 * El  zoológico todavía no está seguro del animal que va a estudiar.
 * Si se decide por elefantes solo tomara una muestra de 20 de ellos;
 * si se decide por las jirafas, tomara 15 muestras, y si son chimpancés tomara 40.
*/

#include <iostream>

using namespace std;

/**
 * I know, we should use for () loop
 * We are just learning ¯\_(ツ)_/¯
 * 
 * The logic for index++ and index += 1 isn't same
 * 
 * I should create a struct {} right?
*/

int calcAverage(int arg, int mul = 100, int div = 5) {
  return (arg / mul) * div;
}

int main() {
  int chimpanceA = 0, chimpanceB = 0, chimpanceC = 0;
  int jirafaA = 0, jirafaB = 0, jirafaC = 0;
  int elefanteA = 0, elefanteB = 0, elefanteC = 0;

  float promedioEA = 0, promedioEB = 0, promedioEC = 0,
      promedioJA = 0, promedioJB = 0, promedioJC = 0,
      promedioCA = 0, promedioCB = 0, promedioCC = 0;

  string animal;

  int index = 1;

  int elefante = 1, jirafa = 1, chimpance = 1, edadElefante, edadJirafa, edadChimpance;

  while (index <= 3) {
    cout << "Ingrese el tipo de animal: ";
    cin >> animal;

    if (animal == "elefante") {
      while (elefante <= 20) {
        cout << "Ingrese la edad del elefante número " << elefante << " ";
        cin >> edadElefante;

        if (edadElefante <= 1) elefanteA += 1;

        if (edadElefante > 1 && edadElefante < 3) elefanteB += 1;

        if (edadElefante >= 3) elefanteC += 1;

        elefante++;
      }
      promedioEA = calcAverage(elefanteA);
      promedioEB = calcAverage(elefanteB);
      promedioEC = calcAverage(elefanteC);
    }
    
    if (animal == "jirafa") {
      while (jirafa <= 15) {
        cout << "Ingrese la edad de la jirafa número " << jirafa << " ";
        cin >> edadJirafa;

        if (edadJirafa <= 1) jirafaA += 1;

        if (edadJirafa > 1 && edadJirafa < 3) jirafaB += 1;

        if (edadJirafa >= 3) jirafaC += 1;

        jirafa++;
      }
      promedioJA = calcAverage(jirafaA);
      promedioJB = calcAverage(jirafaB);
      promedioJC = calcAverage(jirafaC);
    }
    
    if (animal == "chimpance") {
      while (chimpance <= 40) {
        cout << "Ingrese la edad del chimpance número " << chimpance << " ";
        cin >> edadChimpance;

        if (edadChimpance <= 1) chimpanceA += 1;

        if (edadChimpance > 1 && edadChimpance < 3) chimpanceB += 1;

        if (edadChimpance >= 3) chimpanceC += 1;
      }
      promedioCA = calcAverage(chimpanceA);
      promedioCB = calcAverage(chimpanceB);
      promedioCC = calcAverage(chimpanceC);
    }
    
    index += 1;
  }

  cout << "El porcentaje de elefantes son: " << endl;
  cout << "De 0 a 1 años " << promedioEA << endl;
  cout << "De 2 años " << promedioEB << endl;
  cout << "De 3 o más años " << promedioEC << endl;

  cout << "El porcentaje de jirafas son: " << endl;
  cout << "De 0 a 1 años " << promedioJA << endl;
  cout << "De 2 años " << promedioJB << endl;
  cout << "De 3 o más años " << promedioJC << endl;

  cout << "El porcentaje de chimpances son: " << endl;
  cout << "De 0 a 1 años " << promedioCA << endl;
  cout << "De 2 años " << promedioCB << endl;
  cout << "De 3 o más años " << promedioCC << endl;

  return 0;
}
