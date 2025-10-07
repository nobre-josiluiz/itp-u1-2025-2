/******************************************************************************

Lista de exercícios - semana 4

Problema 10 - Promoção

A empresa na qual você trabalha está pretendendo divulgar um pacote promocional
em que o cliente leva x unidades do seu produto e paga y unidades, onde x > y. 
Cada unidade do produto é vendida por um preço p, mas custa um preço q `a empresa. 
Com a crise, a empresa está precisando realmente fazer um marketing agressivo e, portanto, quer
que a razão entre x e y seja a maior possível2, desde que não haja prejuízos. 

O pacote promocional conterá no máximo 10 itens por limitações do tamanho da embalagem. 

Escreva um programa que leia os valores de p e q e escreva na tela de todas as possibilidades de x
e y qual a que possui maior razão entre x e y sem prejuízos `a empresa. 
Por exemplo:
Digite o preco de venda p: 3.50
Digite o preco de producao q: 2.20
A melhor promocao eh: leve 3 pague 2
*******************************************************************************/



#include <stdio.h>

int main() {
    float preco_venda, preco_producao, razao, lucro;
    float aux = 0;
    int i, j, x, y; // índices
    
    //Dados de entrada
    printf("Digite o preço de venda: ");
    scanf(" %f", &preco_venda);
    
    printf("Digite o preço de produção: ");
    scanf(" %f", &preco_producao);
    
    
    //Validação
    if(preco_venda <= 0 || preco_producao <= 0) {
        printf("Cuidado, digite valores positivos.");
        return 1;
    }
    
    //Construção: bloco principal
    for (int i = 2; i <= 10; i++) {
        for (int j = 1; j < i; j++) {
            lucro = preco_venda*j - preco_producao*i;
            razao = ((float)i)/j;
            if(lucro > 0 && razao > 1 && aux < razao) {    
                //printf("Prejuízo");
                //return 1;   
            //} else if(razao > 1) {
                aux = razao;
                //printf("A melhor promoção é: leve %d e pague %d.\n", i, j);
                x = i;
                y = j;
                //printf(" %f, \n", aux);
                
            } 
        }   
            
    }
    printf("A melhor promoção é: leve %d e pague %d.\n", x, y);
    
    //printf("menor resto: %f ", aux);
            
    
    
    return 0;
}