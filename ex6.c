#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int i;
    int vogais = 0;
    int consoantes = 0;
    int espacos = 0;

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    // Remove o \n colocado pelo fgets
    nome[strcspn(nome, "\n")] = '\0';

    for (i = 0; nome[i] != '\0'; i++) {

        if (nome[i] == ' ') {
            espacos++;
        }

        else if (nome[i] == 'a' || nome[i] == 'e' ||
                 nome[i] == 'i' || nome[i] == 'o' ||
                 nome[i] == 'u' ||
                 nome[i] == 'A' || nome[i] == 'E' ||
                 nome[i] == 'I' || nome[i] == 'O' ||
                 nome[i] == 'U') {
            vogais++;
        }

        else if ((nome[i] >= 'a' && nome[i] <= 'z') ||
                 (nome[i] >= 'A' && nome[i] <= 'Z')) {
            consoantes++;
        }
    }

    printf("\nQuantidade de caracteres: %lu\n", strlen(nome));
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos: %d\n", espacos);

    return 0;
}
