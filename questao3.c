#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long long numeroCartao; 

    // Solicita o número do cartão até que um número válido seja fornecido
    do {
        printf("Número do cartão: ");
        scanf("%lld", &numeroCartao);
    } while (numeroCartao <= 0);

    int soma = 0, digito;
    bool alternar = false;

    // Realiza o cálculo de Luhn para verificar a validade do cartão
    while (numeroCartao > 0) {
        digito = numeroCartao % 10;  // Extrai o último dígito do cartão
        if (alternar) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;  // Ajusta para somar os dígitos, caso o dobro seja maior que 9
            }
        }
        soma += digito;  // Adiciona o dígito (ou seu ajuste) à soma total
        numeroCartao /= 10;  // Remove o último dígito do cartão
        alternar = !alternar;  // Alterna o estado para o próximo dígito
    }

    // Verifica se a soma é divisível por 10 (validação de Luhn)
    if (soma % 10 == 0) {
        // Identifica o tipo de cartão com base nos primeiros dígitos
        int quantidadeDigitos = 0;
        long long temp = numeroCartao;
        while (temp > 0) {
            quantidadeDigitos++;
            temp /= 10;
        }

        if ((quantidadeDigitos == 13 || quantidadeDigitos == 16) && (numeroCartao / 100000000000000 == 4)) {
            printf("VISA\n");
        } else if ((quantidadeDigitos == 16) && (numeroCartao / 100000000000000 >= 51 && numeroCartao / 100000000000000 <= 55)) {
            printf("MASTERCARD\n");
        } else if ((quantidadeDigitos == 15) && ((numeroCartao / 1000000000000 == 34) || (numeroCartao / 1000000000000 == 37))) {
            printf("AMEX\n");
        } else {
            printf("INVÁLIDO\n");
        }
    } else {
        printf("INVÁLIDO\n");  // Exibe inválido se a soma não passar na validação de Luhn
    }
    return 0;
}
