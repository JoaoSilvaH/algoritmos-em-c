#include <stdio.h>

int main() {
    int vetor[10], i, valor, contador = 0;

    // Preenche vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Valor a buscar
    printf("\nDigite um valor para buscar: ");
    scanf("%d", &valor);

    // Busca
    for (i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            printf("Valor encontrado na posição %d\n", i);
            contador++;
        }
    }

    if (contador > 0) {
        printf("Quantidade de vezes encontrado: %d\n", contador);
    } else {
        printf("Valor não encontrado no vetor.\n");
    }

    return 0;
}