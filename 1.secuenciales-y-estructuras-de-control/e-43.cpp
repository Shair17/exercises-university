/**
 * Tomando como base los resultados obtenidos en un laboratorio de análisis clínicos, un medico determina si una persona tiene anemia o no, lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su sexo. Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como positivo y en caso contrario como negativo. La tabla en la que el medico se basa para obtener el resultado es la siguiente:
 *          EDAD                             NIVEL HEMOGLOBINA
 *      0 - 1 mes                               13 - 26 g%
 *      > 1 y < = 6 meses                       10 - 18 g%
 *      > 6 y < = 12 meses                      11 - 15 g%
 *      > 1 y < = 5 años                        11.5 - 15 g%
 *      > 5 y < = 10 años                       12.6 - 15.5 g%
 *      > 10 y < = 15 años                      13 - 15.5 g%
 *      mujeres > 15 años                       12 - 16 g%
 *      hombres > 15 años                       14 - 18 g%
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
  int edad;
  char sexo, respuesta;
  float nivelHemoblogina;

  cout << "El paciente es menor de un año?";
  cin >> respuesta;

  if (respuesta == 's' || respuesta == 'S') {
    cout << "Ingrese la edad del paciente en meses: ";
    cin >> edad;

    cout << "Nivel de hemoglobina del paciente: ";
    cin >> nivelHemoblogina;

    if (edad <= 1) {
      if (nivelHemoblogina < 13) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }

    if (edad <= 6) {
      if (nivelHemoblogina < 10) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }

    if (edad <= 12) {
      if (nivelHemoblogina < 11) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }
  }

  cout << "El paciente es mayor de un 1 año y menor de 15 años?";
  cin >> respuesta;

  if (respuesta == 's' || respuesta == 'S') {
    cout << "Ingrese edad del paciente en meses ";
    cin >> edad;

    cout << "Ingrese nivel de hemoglobina ";
    cin >> nivelHemoblogina;

    if (edad <= 5) {
      if (nivelHemoblogina < 11) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }

    if (edad <= 10) {
      if (nivelHemoblogina < 12.6) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }

    if (edad <= 15) {
      if (nivelHemoblogina < 13) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }
  }

  cout << "El paciente es mayor de 15 años?";
  cin >> respuesta;

  if (respuesta == 's' || respuesta == 'S') {
    cout << "Ingrese la edad del paciente en meses ";
    cin >> edad;

    cout << "Ingrese nivel de hemoglobina ";
    cin >> nivelHemoblogina;

    cout << "Ingrese el sexo del paciente (m | M: Masculino; f | F: Femenino) ";
    cin >> sexo;

    if (sexo == 'm' || sexo == 'M') {
      if (nivelHemoblogina < 12) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }

    if (sexo == 'f' || sexo == 'F') {
      if (nivelHemoblogina < 14) cout << "El paciente tiene anemia";
      else cout << "El paciente no tiene anemia";
    }
  }

  return 0;
}
