/*
* Lista de exercícios - semana 2 
* Problema 2 - Conversão de temperatura
* Fórmula: Fahrenheit = (Celsius × 9/5) + 32
           Kelvin = Celsius + 273.15
*/


#include <stdio.h>

int main() {
  float celsius, fahrenheit, kelvin; 

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &celsius); 

  fahrenheit = (celsius * 9/5) + 32;
  kelvin = celsius + 273.15; 

  printf("A temperatura em Fahrenheit eh igual a %.1f F\n", fahrenheit);
  printf("A temperatura em Kelvin eh igual a %.1f K\n", kelvin);

  return 0;
}