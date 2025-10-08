/******************************************************************************

Lista de exercícios - semana 3
Problema 8 - Validador de triângulos
Programa que lê três valores representando os lados de um triângulo e determine:
    Se os valores podem formar um triângulo (soma de dois lados sempre maior que o terceiro)
    Se formar um triângulo, classificá-lo como:
        Equilátero (todos os lados iguais)
        Isósceles (dois lados iguais)
        Escaleno (todos os lados diferentes)
    Também classifique quanto aos ângulos:
        Retângulo (a² = b² + c², onde a é o maior lado)
        Acutângulo (a² < b² + c²)
        Obtusângulo (a² > b² + c²)
        
*******************************************************************************/


#include <stdio.h> 

int main() {
    float a, b, c, valor_max; // medidas de cada lado do triângulo
    
    printf("Digite tres valores que representam medidas (a, b, c) separados por espaco: ");
    scanf(" %f %f %f", &a, &b, &c); 
    
    // Validando valores de entrada 
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("\nCuidado! Os valores das medidas dos lados do triangulo precisam ser positivos.");
        return 1;
    }
    
    // Validação se forma um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("\nCom essas medidas obtemos um triangulo: ");
        
    } else {
        printf("\nCom essas medidas nao forma um triangulo.\n");
        return 1;
    }
    
    // Classificação de triângulo
    if (a == b && b == c && c == a) {
        printf("equilatero e ");
        
    } else if (a == b || b == c || a == c) {
        printf("isosceles e ");
    } else {
        printf("escaleno e ");
    }
    
    // Determinando  o maior valor dos dados de entrada
    if (a >= b) {
        if (b >= c) {
            valor_max = a;
        } else if (a >= c) {
            valor_max = a;
        } else {
            valor_max = c;
        }
       
    } else if (b >= a) { 
        if (a >= c) {
            valor_max = b;
        } else if (b >= c) {
            valor_max = b;
        } else {
            valor_max = c;
        }
        
    } else if (c >= b) {
        if (b >= a) {
            valor_max = c;
        } else if (c >= a) {
            valor_max = c;
        }
        
    }
    
    // Classificando em relação aos ângulos
    if (valor_max == a) {
        if (a*a == b*b + c*c) {
            printf("retangulo.");
        } else if (a*a < b*b + c*c) {
            printf("acutangulo.");
        } else {
            printf("obtusangulo.");
        }
    } else if (valor_max == b) {
        if (b*b == a*a + c*c) {
            printf("retangulo.");
        } else if (b*b < a*a + c*c) {
            printf("acutangulo.");
        } else {
            printf("obtusangulo.");
        }
    } else {
        if (c*c == a*a + b*b) {
            printf("retangulo.");
        } else if (c*c < a*a + b*b) {
            printf("acutangulo.");
        } else {
            printf("obtusangulo.");
        }
    }

    //printf("\n %.4f , %.4f , %.4f , %.4f ", a, b, c, valor_max);
    
    return 0;
}