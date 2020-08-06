/**
 * Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber
 * cuantas calorías consume su cuerpo durante todo el tiempo que realice una misma actividad.
 * Las actividades que tiene permitido realizar son únicamente dormir o estar sentado en reposo.
 * Los datos que tiene son que estando dormido consume 1.08 calorías por minuto y estando sentado
 * en reposo consume 1.66 calorías por minuto.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
  float tiempoActividad, caloriasConsumidas;
  const float consumoDormido = 1.08, consumoSentado = 1.66;
  string actividad;
  const string ACTIVIDADES[2] = { "Dormido", "Sentado" };

  cout << "Ingresa el tiempo de la actividad en minutos: ";
  cin >> tiempoActividad;

  cout << "Ingresa el tipo de actividad (string): ";
  cin >> actividad;

  if (actividad == ACTIVIDADES[0]) {
    caloriasConsumidas = consumoDormido * tiempoActividad;
    cout << "Las calorías consumidas en " << tiempoActividad << "min realizando la actividad " << ACTIVIDADES[0] << " es " << caloriasConsumidas;
  } else if (actividad == ACTIVIDADES[1]) {
    caloriasConsumidas = consumoSentado * tiempoActividad;
    cout << "Las calorías consumidas en " << tiempoActividad << "min realizando la actividad " << ACTIVIDADES[1] << " es " << caloriasConsumidas;
  } else {
    cout << "No hay actividad registrada.";
  }

  return 0;
}
