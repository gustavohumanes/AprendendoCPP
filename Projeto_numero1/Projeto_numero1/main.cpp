#include <stdio.h>

int main() {
    char nome[50];  // Array de 50 caracteres

    printf("Write your name: ");
    // L� at� 49 caracteres (o 50� � para '\0' de termina��o)
    fgets(nome, sizeof(nome), stdin);

    // Exibe o nome que foi digitado
    printf("You writed: %s\n", nome);

    return 0;
}
