




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
#include <locale.h>

// Declaração das funções

void digitarMatriz(int linhas, int colunas, int matriz[10][10]) {
  int i, j;

  // Escrever (preencher) a matriz com valores do utilizador
  //printf("Digite os elementos da matriz:\n");
  for (i = 0; i < linhas; i++) { // Loop pelas linhas
      for (j = 0; j < colunas; j++) { // Loop pelas colunas
          printf("Elemento [%d][%d]: ", i, j);
          scanf("%d", &matriz[i][j]); // Lê o valor e armazena
      }
  }

  // Ler (exibir) a matriz
  printf("\nConteudo da matriz:\n");
  for (i = 0; i < linhas; i++) { // Loop pelas linhas
      for (j = 0; j < colunas; j++) { // Loop pelas colunas
          printf("%d\t", matriz[i][j]); // Exibe o elemento
      }
      printf("\n"); // Quebra de linha para separar as linhas
  }
}

void somaMatrizes() {
    int linhaA, colunaA, linhaB, colunaB;
    int matrizA[10][10];  
    int matrizB[10][10];  
    int matrizResultado[10][10];  
  
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
      printf("As matrizes nao tem o mesmo tamanho. Nao e possivel realizar a soma.\n");
      return;
    } else {
      // Realizar a soma das matrizes
      for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaA; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
      }
      
      printf("A soma das matrizes e:\n");
      for (int i = 0; i < linhaA; i++) {
          for (int j = 0; j < colunaA; j++) {
              printf("%d\t", matrizResultado[i][j]);
          }
          printf("\n");
      }
    }
}  


// Função subtração de matrizes
void subtracaoMatrizes() {
    int linhaA, colunaA, linhaB, colunaB;
    int matrizA[10][10];  
    int matrizB[10][10];  
    int matrizResultado[10][10];  
  
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
      printf("As matrizes nao tem o mesmo tamanho. Nao eh possivel realizar a subtracao.\n");
      return;
    } else {
      // Realizar a subtração das matrizes
      for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaA; j++) {
            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
      }
      
      printf("A subtração das matrizes é:\n");
      for (int i = 0; i < linhaA; i++) {
          for (int j = 0; j < colunaA; j++) {
              printf("%d\t", matrizResultado[i][j]);
          }
          printf("\n");
      }
    }
}  

// Função produto de matrizes
void produtoMatrizes() {
  int linhaA, colunaA, linhaB, colunaB;
  int matrizA[10][10];         // Fixed size array to avoid undefined behavior
  int matrizB[10][10];         // Fixed size array to avoid undefined behavior
  int matrizResultado[10][10]; // Matrix to store the result

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

  // Verificar se as matrizes podem ser multiplicadas
  if (colunaA != linhaB) {
    printf("O número de colunas da primeira matriz é diferente do número de "
           "linhas da segunda. Não é possível realizar o produto.\n");
    return;
  } else {
    // Inicializando a matriz de resultados com zeros para uso a seguir
    for (int i = 0; i < linhaA; i++) {
      for (int j = 0; j < colunaB; j++)
        matrizResultado[i][j] = 0;
    }

    // Realizando o produto das matrizes
    for (int i = 0; i < linhaA; i++) {
      for (int j = 0; j < colunaB; j++)
        for (int k = 0; k < colunaA; k++)
          matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
    }

    printf("A produto das matrizes é:\n");
    for (int i = 0; i < linhaA; i++) {
      for (int j = 0; j < colunaB; j++) {
        printf("%d\t", matrizResultado[i][j]);
      }
      printf("\n");
    }
  }
}

// Função matriz transporte
void transporteMatrizes() {
  int linhaA, colunaA;
  int matrizA[10][10];
  int matrizResultado[10][10];

  printf("Digite os elementos da matriz:\n");
  printf("Digite o tamanho da matriz separados por espaco (linha coluna): ");
  scanf(" %d %d", &linhaA, &colunaA);
  digitarMatriz(linhaA, colunaA, matrizA);
  printf("\n");

  // Laço do transporte das matrizes
  for (int i = 0; i < linhaA; i++) {
    for (int j = 0; j < colunaA; j++)
      matrizResultado[j][i] = matrizA[i][j];
  }

  printf("A matriz transporte sera:\n");
  for (int i = 0; i < colunaA; i++) {
    for (int j = 0; j < linhaA; j++) {
      printf("%d\t", matrizResultado[i][j]);
    }
    printf("\n");
  }
}

void determinanteMatrizes() {
  int linhaA, colunaA;
  int matrizA[10][10];
  int matrizResultado[10][10];
  int determinante = 0;

  printf("Digite os elementos da matriz:\n");
  printf("Digite o tamanho da matriz separados por espaco (linha coluna): ");
  scanf(" %d %d", &linhaA, &colunaA);

  if (linhaA != colunaA) {
    printf("\n Nao existe determinante de matrizes nao quadradas.\n");
    return;
  }

  digitarMatriz(linhaA, colunaA, matrizA);
  printf("\n");

  // Laço do determinante de matrizes
  for (int i = 0; i < linhaA; i++) {
    for (int j = 0; j < colunaA; j++) {
      determinante += matrizA[i][j] * matrizA[j][i];
    }  
    determinante -= matrizA[i][i] * matrizA[i][i];
  }
  printf("O determinante da matriz eh: %d\n", determinante);
}

int main() {  
  setlocale(LC_ALL, "Portuguese_Brazil");
  int operacao; // Variável para armazenar a operação a ser realizada;


  do {
    printf("Qual a operacao a ser realizada com matrizes?\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Transporte\n");
    printf("5 - Determinante\n");
    printf("6 - Inversa\n");
    printf("7 - Ortogonal\n");
    printf("8 - Equacao Matricial\n");
    printf("9 - Sair\n");
    printf("\n");
    scanf("%d", &operacao);

    switch (operacao) {
      case 1: {
        printf("Operacao de soma selecionada.\n");
        somaMatrizes();
        break;
      }  
      case 2: {
        printf("Operacao de subtracao selecionada.\n");
        // Chame a função para realizar a subtração de matrizes
        subtracaoMatrizes();
        break;
      }
      case 3: {
        printf("Operacao de multiplicacao selecionada.\n");
        // Chame a função para realizar a multiplicação de matrizes
        produtoMatrizes();
        break;
      }  
      case 4: {
        printf("Operacao de transporte selecionada.\n");
        // Chame a função para realizar o transporte de matrizes
        transporteMatrizes();
        break;
      }
      case 5: {
        printf("Operacao de determinante selecionada.\n");
        // Chame a função para realizar o determinante de matrizes
        determinanteMatrizes();
        break;
      }  
      case 6: {
        printf("Operacao de inversa selecionada.\n");
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