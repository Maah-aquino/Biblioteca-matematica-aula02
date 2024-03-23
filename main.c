#include <stdio.h>
#include "matematica.h"

int main() {
    float angulo_graus;
    float angulo_radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &angulo_graus);

    // Convertendo o ângulo de graus para radianos
    angulo_radianos = angulo_graus * (3.14159265358979323846 / 180.0);

    // Calculando e imprimindo o seno do ângulo
    float seno = calcular_seno(angulo_radianos);
    printf("Seno: %.4f\n", seno);

    // Calculando e imprimindo o cosseno do ângulo
    float cosseno = calcular_cosseno(angulo_radianos);
    printf("Cosseno: %.4f\n", cosseno);

    // Calculando e imprimindo a tangente do ângulo
    float tangente = calcular_tangente(angulo_radianos);
    printf("Tangente: %.4f\n", tangente);

    return 0;
}