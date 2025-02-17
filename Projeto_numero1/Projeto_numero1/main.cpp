#include <stdio.h>

int main() {
    char nome[50];  // Array de 50 caracteres

    printf("Write your name: ");
    // Lê até 49 caracteres (o 50º é para '\0' de terminação)
    fgets(nome, sizeof(nome), stdin);

    // Exibe o nome que foi digitado
    printf("You writed: %s\n", nome);

    return 0;
}
