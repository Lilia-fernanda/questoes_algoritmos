#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chave[27], texto[100], cifrado[100];
    int i, j;

    // Lendo a chave
    printf("Digite a chave (26 letras): ");
    fgets(chave, 27, stdin);
    chave[strcspn(chave, "\n")] = 0

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Lendo o texto
    printf("Digite o texto a ser cifrado: ");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = 0;

    // Cifrando o texto
    for (i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) { 
            cifrado[i] = chave[texto[i] - 'A'];
            
        } else {
            cifrado[i] = texto[i];
        }
    }
    cifrado[i] = '\0';

    // Imprimindo o texto cifrado
    printf("Texto cifrado: %s\n", cifrado);

    return 0;
}