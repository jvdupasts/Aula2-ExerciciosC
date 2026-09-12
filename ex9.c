#include <stdio.h>

#define TAM 5

void lerNotas(float notas[]) {
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[]) {
    float soma = 0;
    int i;

    for (i = 0; i < TAM; i++) {
        soma += notas[i];
    }

    return soma / TAM;
}

float encontrarMaiorNota(float notas[]) {
    float maior = notas[0];
    int i;

    for (i = 1; i < TAM; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

float encontrarMenorNota(float notas[]) {
    float menor = notas[0];
    int i;

    for (i = 1; i < TAM; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    return menor;
}

void imprimirRelatorio(float notas[]) {
    int i;

    printf("\n===== RELATORIO =====\n");

    for (i = 0; i < TAM; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    printf("Media: %.2f\n", calcularMedia(notas));
    printf("Maior nota: %.2f\n", encontrarMaiorNota(notas));
    printf("Menor nota: %.2f\n", encontrarMenorNota(notas));
}

int main() {
    float notas[TAM];

    lerNotas(notas);

    imprimirRelatorio(notas);

    return 0;
}
