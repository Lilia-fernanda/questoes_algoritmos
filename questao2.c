#include <stdio.h>

// Função para multiplicar duas matrizes de ordem n e armazenar o resultado
void multiplica_matrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int n) {
    for (int i = 0; i < n; i++) { // Itera sobre as linhas da primeira matriz
        for (int j = 0; j < n; j++) { // Itera sobre as colunas da segunda matriz
            resultado[i][j] = 0; // Inicializa o elemento da matriz resultado
            for (int k = 0; k < n; k++) { // Itera para calcular o produto escalar da linha e coluna
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int n, matriz1[100][100], matriz2[100][100], resultado[100][100];

    printf("Digite a ordem das matrizes: ");
    scanf("%d", &n); // Lê a ordem das matrizes

    // Lê os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Lê os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Chama a função para multiplicar as matrizes
    multiplica_matrizes(matriz1, matriz2, resultado, n);

    // Exibe a matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
