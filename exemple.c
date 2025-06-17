#include <stdio.h>

int main() {
    int i, n[5], acc = 0, maior;

    for (i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        acc += n[i];
    }
    int media = acc / 5;
    maior = n[0];
    for (i = 0; i < 5; i++) {
        if (n[i] > media) {
            printf("n[%d] = %d é maior que a média (%d)\n", i, n[i], media);
        }

        if (n[i] > maior) {
            maior = n[i];
        }
    }
    printf("Maior valor: %d\n", maior);

    return 0;
}
