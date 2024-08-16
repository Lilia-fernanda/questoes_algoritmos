#include <stdio.h>

// Função que soma os elementos de um array
int soma_array(int array[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += array[i]; // Adiciona cada elemento do array à soma
    }
    return soma; // Retorna a soma total
}

int main() {
    int n;
    
    // Solicita o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    
    int numeros[n]; // Declara o array com o tamanho informado
    
    // Solicita os elementos do array
    printf("Digite os %d numeros:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]); // Lê cada número e armazena no array
    }
    
    // Calcula a soma dos elementos do array
    int resultado = soma_array(numeros, n);
    
    // Exibe o resultado da soma
    printf("A soma dos elementos do array é %d\n", resultado);
    
    return 0;
}
