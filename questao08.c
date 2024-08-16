#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, area;

    // Loop continua até que a seja 0
    while (scanf("%d", &a) == 1 && a != 0) {
        // Lê os valores de b e c
        scanf("%d %d", &b, &c);

        // Calcula a área com base nos valores fornecidos
        area = sqrt((a * b * 100) / c);

        // Exibe a área calculada
        printf("%d\n", area);
    }

    return 0;
}
