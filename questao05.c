#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que calcula os pontos de uma palavra com base em seu valor
int calcular_pontos(char *palavra) {
    int pontos = 0;
    int len = strlen(palavra);
    
    // Itera por cada letra da palavra
    for (int i = 0; i < len; i++) {
        char letra = toupper(palavra[i]); // Converte a letra para maiúscula
        switch (letra) {
            // Letras que valem 1 ponto
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                pontos += 1;
                break;
            // Letras que valem 2 pontos
            case 'D': case 'G':
                pontos += 2;
                break;
            // Letras que valem 3 pontos
            case 'B': case 'C': case 'M': case 'P':
                pontos += 3;
                break;
            // Letras que valem 4 pontos
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                pontos += 4;
                break;
            // Letra que vale 5 pontos
            case 'K':
                pontos += 5;
                break;
            // Letras que valem 8 pontos
            case 'J': case 'X':
                pontos += 8;
                break;
            // Letras que valem 10 pontos
            case 'Q': case 'Z':
                pontos += 10;
                break;
        }
    }
    
    return pontos;
}

int main() {
    char palavra1[50], palavra2[50];
    int pontos1, pontos2;
    
    // Recebe a palavra do Jogador 1
    printf("Jogador 1, digite sua palavra: ");
    scanf("%s", palavra1);
    
    // Recebe a palavra do Jogador 2
    printf("Jogador 2, digite sua palavra: ");
    scanf("%s", palavra2);
    
    // Calcula os pontos das palavras
    pontos1 = calcular_pontos(palavra1);
    pontos2 = calcular_pontos(palavra2);
    
    // Exibe a pontuação de cada jogador
    printf("\nPontuação:\n");
    printf("Jogador 1: %d pontos\n", pontos1);
    printf("Jogador 2: %d pontos\n", pontos2);
    
    // Determina o vencedor ou se houve empate
    if (pontos1 > pontos2) {
        printf("Jogador 1 venceu!");
    } else if (pontos2 > pontos1) {
        printf("Jogador 2 venceu!");
    } else {
        printf("Empate!");
    }
    
    return 0;
}
