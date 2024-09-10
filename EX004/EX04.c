#include <stdio.h>
int Absoluto(int num) {
    return (num < 0) ? -num : num;
}

int main() {
    int valores[5];
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    printf("\nValores absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor absoluto de %d: %d\n", valores[i], Absoluto(valores[i]));
    }
    
    return 0;
}