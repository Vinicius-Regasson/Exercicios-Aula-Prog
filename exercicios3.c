#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    int vetor[n];
    int pares[n]; 
    for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares[count] = vetor[i];
            count++;
        }
    }

    printf("Vetor original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nVetor de pares: ");
    for (i = 0; i < count; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}