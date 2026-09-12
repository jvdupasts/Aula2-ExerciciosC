#include <stdio.h>

int main() {
    int vetor[20];
    int i;
    int maior, menor;
    int pares = 0;
    int impares = 0;
    int soma = 0;
    float media;

    for (i = 0; i < 20; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];

        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    media = (float)soma / 20;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
