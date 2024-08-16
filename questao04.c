#include <stdio.h>

int main(void)
{
    int centavos; // Armazena o valor total em centavos
    int moedas_de_25, moedas_de_10, moedas_de_5, moedas_de_1; // Armazena a quantidade de moedas de cada valor

    // Solicita ao usuário um valor positivo em centavos
    do
    {
        printf("Troco devido: ");
        scanf("%d", &centavos);
    }
    while (centavos < 0); // Repete enquanto o valor for negativo

    // Calcula a quantidade de moedas de 25 centavos
    moedas_de_25 = centavos / 25;
    centavos %= 25; // Atualiza o valor de centavos restantes

    // Calcula a quantidade de moedas de 10 centavos
    moedas_de_10 = centavos / 10;
    centavos %= 10; // Atualiza o valor de centavos restantes

    // Calcula a quantidade de moedas de 5 centavos
    moedas_de_5 = centavos / 5;
    centavos %= 5; // Atualiza o valor de centavos restantes

    // O que restar são as moedas de 1 centavo
    moedas_de_1 = centavos;

    // Exibe o total de moedas utilizadas
    printf("%d\n", moedas_de_25 + moedas_de_10 + moedas_de_5 + moedas_de_1);
}
