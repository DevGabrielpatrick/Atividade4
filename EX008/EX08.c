#include <stdio.h>
int ehPar(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int valor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);
    
    if (ehPar(valor)) {
        printf("O número %d é par.\n", valor);
    } else {
        printf("O número %d é ímpar.\n", valor);
    }
    
    return 0;
}