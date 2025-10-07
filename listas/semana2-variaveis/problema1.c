/*
* Lista de exercícios - semana 2 
* Problema 1 - Calculadora de IMC
* Fórmula: IMC = peso / (altura²)
*/


#include <stdio.h>

int main() {
  float peso, altura, imc; 
  
  printf("Digite o peso (em Kg) de uma pessoa: ");
  scanf("%f", &peso); 

  printf("Digite a altura (em metros) de uma pessoa: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  if (peso <= 0 || altura <= 0) {
    printf("Valores inválidos. O peso deve ser maior que zero e a altura deve ser maior que zero.\n");
    return 1;
    }
    
  printf("O IMC é: %.2f kg/m²\n", imc);
  
  return 0;
}