#include <stdio.h>

int main() {
    int vetor[10], i, aux;
    int trocou;

    // Leitura do vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Bubble Sort
    do {
        trocou = 0;
        for (i = 0; i < 9; i++) {
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                trocou = 1;
            }
        }
    } while (trocou);

    // Saída
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0; 
}