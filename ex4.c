#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int soma[3][3];
    int i, j;

    printf("Digite os valores da primeira matriz:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os valores da segunda matriz:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nPrimeira matriz:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz soma:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
