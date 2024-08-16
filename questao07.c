#include <stdio.h>

int main() {
    char palavra[30];
    int chave, i;

    scanf("%s", palavra); // Lê a palavra digitada pelo usuário

    // Loop para testar diferentes chaves de cifragem
    for (chave = 1; chave <= 25; chave++) {
        // Loop para cifrar a palavra, caractere por caractere
        for (i = 0; palavra[i] != '\0'; i++) {
            palavra[i] = (palavra[i] - 'a' + chave) % 26 + 'a';
        }
        printf("chave %2d: ", chave);
        
        // Imprime a palavra cifrada
        for (i = 0; palavra[i] != '\0'; i++) {
            putchar(palavra[i]);
        }

        // Formatação de saída para melhorar a leitura
        if (chave % 5 == 0) {
            printf("\n\n");
        } else {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
