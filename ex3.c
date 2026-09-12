#include <stdio.h>

int main() {
    int vetor[15];
    int numero;
    int i;
    int encontrado = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &numero);

    for (i = 0; i < 15; i++) {
        if (vetor[i] == numero) {
            printf("Numero encontrado na posicao %d.\n", i);
            encontrado = 1;
        }
    }

    if (encontrado == 0) {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}
