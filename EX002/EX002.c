#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia;
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distancia;
}

int main() {
    float x1 = 3.0, y1 = 4.0;
    float x2 = 6.0, y2 = 8.0;
    
    float distancia = calcularDistancia(x1, y1, x2, y2);
    
    printf("A distância euclidiana entre os pontos é: %f\n", distancia);
    
    return 0;
}