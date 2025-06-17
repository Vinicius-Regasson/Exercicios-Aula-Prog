#include <stdio.h>

int main() {
    int numeros[6];
    int soma = 0;
    float media;

    printf("Digite 6 numeros inteiros:\n");
    for(int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 6.0;

    printf("A media dos numeros digitados eh: %.2f\n", media);

    return 0;
}