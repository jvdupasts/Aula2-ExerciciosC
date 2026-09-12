#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int menor(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

float media(float a, float b) {
    return (a + b) / 2;
}

int fatorial(int n) {
    int resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int a, b, numero;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("\nMaior: %d\n", maior(a, b));
    printf("Menor: %d\n", menor(a, b));
    printf("Media: %.2f\n", media(a, b));

    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    printf("Fatorial: %d\n", fatorial(numero));

    return 0;
}
