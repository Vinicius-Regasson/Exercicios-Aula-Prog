#include <stdio.h>

int main() {
    int numeros[6];
    int soma = 0;

    printf("Digite 6 numeros inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos numeros eh: %d\n", soma);

    return 0;
}