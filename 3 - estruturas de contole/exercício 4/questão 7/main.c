#include <stdio.h>

int main(void) {

    int numero, soma = 0;

    while (soma < 21) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero >= 1 && numero <= 10) {
            soma += numero;
            continue;
        } else {
            printf("O valor informado nao pertence ao intervalo 1 ao 10! \n");
        }
    }

    printf("O valor da soma e: %d", soma);

    return 0;
}