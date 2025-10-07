/******************************************************************************

Lista de exercícios - semana 4

Problema 5 - Primos num intervalo

Programa que lê dois números inteiros a e b. 
O programa só deve prosseguir quando a > b. 
Em seguida, o programa deve escrever na tela todos os números primos
entre a e b.
*******************************************************************************/



#include <stdio.h>

int main() {
    int a, b, i, j, divisor; // índices
    
    //Dados de entrada
    printf("Digite dois números inteiros com (a < b): ");
    scanf(" %d %d", &a, &b);
    
    //Validação
    if(a >= b || a < 0 || b <= 0) {
        printf("Cuidado, digite valores válidos e no formato a < b.");
        return 1;
    }
    
    //Construção: busca por primos
    for (int i = a + 1; i < b; i++) {
        divisor = 0;
        for (int j = 1; j <= i; j++)
            if(i % j == 0) {
                divisor++;
            }
        if(divisor == 2) {
            printf(" %d,", i);
        } 
        
    }    
    
    
    return 0;
}