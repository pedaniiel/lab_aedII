#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para encontrar triplas pitagóricas com limite 'limit'
int ladosPitagoricos(int limit) {
    int c, a, b;     // Variáveis para armazenar os lados do triângulo pitagórico
    int i, j;        // Variáveis de loop para percorrer os valores possíveis

    for (i = 1; i < limit; i++) {  // Loop externo para o valor de 'i'
        for (j = 1; j < limit; j++) {  // Loop interno para o valor de 'j'

            a = pow(i, 2);  // Calcula o quadrado de 'i' (lado a)
            b = pow(j, 2);  // Calcula o quadrado de 'j' (lado b)
            c = sqrt((a + b));  // Calcula a hipotenusa 'c' usando a fórmula de Pitágoras

            if ((a + b) == pow(c, 2)) {  // Verifica se a soma dos quadrados dos lados é igual ao quadrado da hipotenusa
                printf("%i %i %i\n", i, j, c);  // Imprime a tripla pitagórica
            }
        }
    }
}

int main() {
    ladosPitagoricos(20);  // Chama a função para encontrar triplas pitagóricas com limite 20
}
