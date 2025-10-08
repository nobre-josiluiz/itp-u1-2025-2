/******************************************************************************

Lista de exercícios - semana 4

Problema 11 - Problema das 4 rainhas

O problema das 8 rainhas é clássico: você deve posicionar 8 rainhas em um tabuleiro
de xadrez de forma que nenhuma delas se ataquem. Aqui você irá resolver um problema
mais simples: o problema das 4 rainhas. 

Escreva um programa que escreva na tela todas
as possibilidades de posicionar 4 rainhas em um tabuleiro 4 × 4 de forma que nenhuma
delas se ataquem.
*******************************************************************************/



#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, l, ameaca; // índices
    
    
    //Verificando cada posicao da rainhas
    for (int i = 1; i <= 4 ; i++) {
        for (int j = 1; j <= 4 ; j++) {
            for (int k = 1; k <= 4; k++) {
                for (int l = 1; l <= 4; l++) {

                    // comparando duas a duas rainhas
                    int ameaca = 0;

                    // Verificação de ameaça entre a primeira rainha  e as outras
                    if (i == j || i == k || i == l) ameaca = 1;                    
                    if (abs(1 - 2) == abs(i - j)) ameaca = 1;
                    if (abs(1 - 3) == abs(i - k)) ameaca = 1;
                    if (abs(1 - 4) == abs(i - l)) ameaca = 1;

                    // Verificação de ameaça entre a segunda rainha e as outras.
                    if (j == k || j == l) ameaca = 1;
                    if (abs(2 - 3) == abs(j - k)) ameaca = 1;
                    if (abs(2 - 4) == abs(j - l)) ameaca = 1;

                    // Verificação de ameaça entre a terceira rainha e as outras.
                    if (k == l) ameaca = 1;
                    if (abs(3 - 4) == abs(k - l)) ameaca = 1;
                    
                    // Se não houver ameaça, obtemos as possbilidades
                    if (!ameaca) {
                        printf("As possibiilidades sao:\n");
                        printf(" Rainha na linha %d na posicao(letra a). \n", i);
                        printf(" Rainha na linha %d na posicao(letra b). \n", j);
                        printf(" Rainha na linha %d na posicao(letra c). \n", k);
                        printf(" Rainha na linha %d na posicao(letra d). \n", l);
                        
                        printf("\n");
                    }
                    
                }
            }
        }
    }    
    
    return 0;
}    
    
    
    
    
    
    
    
    
    
    