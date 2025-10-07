




/*****************************************************************************************
******************************************************************************************
* PROGRAMA SIMULANDO UMA CALCULADORA DE MATRIZES
* OPERAÇÕES: 
* 1 - SOMA
* 2 - SUBTRAÇÃO
* 3 - MULTIPLICAÇÃO
* 4 - TRANSPORTE
* 5 - DETERMINANTE
* 6 - INVERSA
* 7 - ORTOGONAL
* 8 - EQUAÇÃO MATRICIAL
* 9 - SAIR
* 
******************************************************************************************
******************************************************************************************/

#include <stdio.h> // Incluir a biblioteca stdio.h

// Declaração das funções

void digitarMatriz(int linhas, int colunas, int matriz[10][10]) {
  int i, j;

  // Escrever (preencher) a matriz com valores do utilizador
  printf("Digite os elementos da matriz:\n");
  for (i = 0; i < linhas; i++) { // Loop pelas linhas
      for (j = 0; j < colunas; j++) { // Loop pelas colunas
          printf("Elemento [%d][%d]: ", i, j);
          scanf("%d", &matriz[i][j]); // Lê o valor e armazena
      }
  }

  // Ler (exibir) a matriz
  printf("\nConteúdo da matriz:\n");
  for (i = 0; i < linhas; i++) { // Loop pelas linhas
      for (j = 0; j < colunas; j++) { // Loop pelas colunas
          printf("%d\t", matriz[i][j]); // Exibe o elemento
      }
      printf("\n"); // Quebra de linha para separar as linhas
  }
}

void somaMatrizes() {
    int linhaA, colunaA, linhaB, colunaB;
    int matrizA[10][10];  // Fixed size array to avoid undefined behavior
    int matrizB[10][10];  // Fixed size array to avoid undefined behavior
    int matrizResultado[10][10];  // Matrix to store the result
  
    // Leitura das dimensões da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    printf("Digite o tamanho da primeira matriz (linha coluna): ");
    scanf(" %d %d", &linhaA, &colunaA);
    digitarMatriz(linhaA, colunaA, matrizA);
    printf("\n");
  
    // Leitura das dimensões da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    printf("Digite o tamanho da segunda matriz (linha coluna): ");
    scanf(" %d %d", &linhaB, &colunaB);
    digitarMatriz(linhaB, colunaB, matrizB);

    // Verificar se as matrizes têm o mesmo tamanho
    if (linhaA != linhaB || colunaA != colunaB) {
      printf("As matrizes não têm o mesmo tamanho. Não é possível realizar a soma.\n");
      return;
    } else {
      // Realizar a soma das matrizes
      for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaA; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
      }
      
      printf("A soma das matrizes é:\n");
      for (int i = 0; i < linhaA; i++) {
          for (int j = 0; j < colunaA; j++) {
              printf("%d\t", matrizResultado[i][j]);
          }
          printf("\n");
      }
    }
}  

int main() {
  int operacao; // Variável para armazenar a operação a ser realizada;

  do {
    printf("Qual a operação a ser realizada com matrizes?\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Transporte\n");
    printf("5 - Determinante\n");
    printf("6 - Inversa\n");
    printf("7 - Ortogonal\n");
    printf("8 - Equação Matricial\n");
    printf("9 - Sair\n");
    printf("\n");
    scanf("%d", &operacao);

    switch (operacao) {
      case 1: {
        printf("Operação de soma selecionada.\n");
        somaMatrizes();
        break;
      }  
      case 2: {
        printf("Operação de subtração selecionada.\n");
        // Chame a função para realizar a subtração de matrizes
        break;
      }
      case 3: {
        printf("Operação de multiplicação selecionada.\n");
        // Chame a função para realizar a multiplicação de matrizes
        break;
      }  
      case 4: {
        printf("Operação de transporte selecionada.\n");
        // Chame a função para realizar o transporte de matrizes
        break;
      }
      case 5: {
        printf("Operação de determinante selecionada.\n");
        // Chame a função para realizar o determinante de matrizes
        break;
      }  
      case 6: {
        printf("Operação de inversa selecionada.\n");
        // Chame a função para realizar a inversa de matrizes
        break;
      }  
      case 7: {
        printf("Operação de ortogonal selecionada.\n");
        // Chame a função para realizar a ortogonal de matrizes
        break;
      }
      case 8: {
        printf("Operação de equação matricial selecionada.\n");
        // Chame a função para realizar a equação matricial de matrizes
        break;
      }  
      case 9: {
        printf("Saindo do programa.\n");
        break;
      }  
      default:
        printf("Operação inválida. Tente novamente.\n"); 
        break;
    } 
      
    
  } while (operacao != 9);
  

  return 0;
}