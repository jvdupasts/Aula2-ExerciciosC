#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    // Leitura dos valores
    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordem normal
    printf("\nValores na ordem digitada:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordem inversa
    printf("\n\nValores na ordem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
