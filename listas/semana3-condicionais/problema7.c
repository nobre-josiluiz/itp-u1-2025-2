/******************************************************************************

Lista de exercícios - semana 3
Problema 7 - Sistema de equações do 2º grau
Programa que resolve equações do segundo grau (ax² + bx + c = 0). O programa deve:
    Ler os coeficientes a, b e c
    Verificar se é uma equação do segundo grau (a ≠ 0)
    Calcular o discriminante (Δ = b² - 4ac)
    Determinar e exibir as raízes conforme o caso:
        Se Δ > 0: duas raízes reais distintas
        Se Δ = 0: uma raiz real
        Se Δ < 0: não possui raízes reais
    
    Fórmula das raízes: x = (-b ± √Δ) / (2a)

*******************************************************************************/


#include <stdio.h> // Incluir a biblioteca stdio.h 
#include <math.h>

int main() {
    float a, b, c, delta; // coeficientes da equação do 2º e discriminante
    
    printf("Digite o valor do coeficiente do primeiro termo da equacao do 2 grau (a): ");
    scanf(" %f", &a);
    if (a == 0) {
        printf("\nInvalido! Nesse caso, nao representa uma equacao do 2. Digite um valor diferente de zero.");
        return 1;
    }

    printf("Digite o valor do coeficiente do 2 termo x da equacao (b): ");
    scanf(" %f", &b);

    printf("Digite o valor do termo independente da equacao (c): ");
    scanf(" %f", &c); 
    
    //printf("\n %.1fx² + %.1fx + %.1f = 0", a, b, c);
    // Cálculo das raízes
    
    delta = b*b - 4*a*c;

    if (delta >= 0) {
        if (delta == 0) {
            printf("\nA equacao possui uma unica raiz: x = %.1f ", (b*(-1))/2*a);
        } else {
            printf("\nA equacao possui duas raizes distintas: x' = %.1f e x'' = %.1f ", ((-b - sqrt(delta))/2*a), ((-b + sqrt(delta))/2*a) );
        }
    } else { 
        printf("\nA equacao nao possui raizes reais.");
    }

    
    return 0;
}