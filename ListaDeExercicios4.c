#include <stdio.h>
#include <string.h>

char palavra[100], letra;
int i, n, TAM;

int numero(char *n);

int main() {
    n = numero(palavra);
    printf("A letra %c aparece %d na palavra %s", letra, n, palavra);

    return 0;
}

int numero(char *n) {
    printf("Digite a palavra: ");
    scanf("%s", palavra);
    TAM = strlen(palavra);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    n = 0;
    for (i = 0; i < TAM; i++) {
        if (letra == palavra[i]) {
            *n++;
        }
    }

    return n;
}
