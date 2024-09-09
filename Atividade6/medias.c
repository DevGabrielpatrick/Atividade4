#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(char tipo_media, float nota1, float nota2, float nota3) {
    float resultado;
    switch(tipo_media) {
        case 'A':
            resultado = (nota1 + nota2 + nota3) / 3;
            break;
        case 'a':
            resultado = (nota1 + nota2 + nota3) / 3;
            break;
        case 'P':
            resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
            break;
        case 'p':
            resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
            break;
        case 'H':
            
            if (nota1 == 0 || nota2 == 0 || nota3 == 0) {
                printf("Notas não podem ser zero para a média harmônica.\n");
                exit(1);  
            }
            resultado = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
            break;
            
        case 'h':
            
            if (nota1 == 0 || nota2 == 0 || nota3 == 0) {
                printf("Notas não podem ser zero para a média harmônica.\n");
                exit(1);  
            }
            resultado = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
            break;
            
        default:
            printf("Tipo de média inválido.\n");
            exit(1);  
    }
    return resultado;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3;
    
    printf("Digite as três notas separadas por espaço: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    char tipo_media;
    printf("Digite a inicial da média que você deseja, 'A' para média Aritmética, 'P' para média ponderada, 'H' para média harmônica: ");
    scanf(" %c", &tipo_media);  
    
    float media_final = media(tipo_media, nota1, nota2, nota3);
    printf("A média calculada é: %.2f\n", media_final);
    
    return 0;
}