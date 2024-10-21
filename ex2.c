#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; // Array para armazenar a string
    int qntde = 0; // Contador para a quantidade de 'a' e 'A'

    printf("Digite uma string: ");
    gets(str); // Lê a string do usuário

    // Percorre cada caractere da string
    for (int i = 0; i < strlen(str); i++) {
        // Verifica se o caractere é 'a' ou 'A'
        if (str[i] == 'a' || str[i] == 'A') {
            qntde++; // Incrementa o contador
        }
    }

    // Verifica se a letra 'a' ou 'A' foi encontrada
    if (qntde > 0) {
        printf("a letra 'a' ou 'A' ocorre %d vez(es) na string.\n", qntde);
    } else {
        printf("a letra 'a' ou 'A' nao foi encontrada na string.\n");
    }

    return 0;
}
