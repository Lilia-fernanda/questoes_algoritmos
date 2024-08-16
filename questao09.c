#include <stdio.h>
#include <string.h>

int main() {
    int n, caso = 1;
    char sheldon[10], raj[10];
    // Opções do jogo: Pedra, Papel, Tesoura, Lagarto e Spock
    char *opcoes[] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
    
    // Matriz de vitórias: 1 indica vitória da opção na linha sobre a da coluna
    int vence[5][5] = {
        {0, 1, 0, 1, 0}, // pedra
        {0, 0, 1, 0, 1}, // papel
        {1, 0, 0, 1, 0}, // tesoura
        {0, 1, 0, 0, 1}, // lagarto
        {1, 0, 1, 0, 0}  // Spock
    };

    scanf("%d", &n); // Lê o número de rodadas

    while (n--) {
        scanf("%s %s", sheldon, raj); // Lê as escolhas de Sheldon e Raj

        int i, j;
        // Encontra o índice da escolha de Sheldon
        for (i = 0; i < 5; i++) {
            if (strcmp(sheldon, opcoes[i]) == 0) break;
        }
        // Encontra o índice da escolha de Raj
        for (j = 0; j < 5; j++) {
            if (strcmp(raj, opcoes[j]) == 0) break;
        }

        printf("Caso #%d: ", caso++);
        // Determina o resultado da rodada
        if (i == j) {
            printf("De novo!\n"); // Empate
        } else if (vence[i][j]) {
            printf("Bazinga!\n"); // Sheldon vence
        } else {
            printf("Raj trapaceou!\n"); // Raj vence
        }
    }

    return 0;
}
