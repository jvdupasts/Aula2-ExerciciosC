#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50];
    char nome2[50];
    int resultado;

    printf("Digite o primeiro nome: ");
    fgets(nome1, 50, stdin);

    printf("Digite o segundo nome: ");
    fgets(nome2, 50, stdin);

    // Remove o \n
    nome1[strcspn(nome1, "\n")] = '\0';
    nome2[strcspn(nome2, "\n")] = '\0';

    resultado = strncmp(nome1, nome2, 50);

    if (resultado == 0) {
        printf("\nOs nomes sao iguais.\n");
    }
    else if (resultado > 0) {
        printf("\n%s e alfabeticamente maior que %s.\n", nome1, nome2);
    }
    else {
        printf("\n%s e alfabeticamente maior que %s.\n", nome2, nome1);
    }

    return 0;
}
