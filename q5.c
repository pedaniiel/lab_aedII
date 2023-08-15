#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular o produto de dois números
int produtoRecursivo(int x1, int x2) {
    if (x2 == 0) {     // Caso base: se o segundo número (x2) for 0, o produto é 0
        return 0;
    }

    if (x2 == 1) {     // Caso base: se o segundo número (x2) for 1, o produto é x1
        return x1;
    }

    // Caso recursivo: soma x1 repetidamente x2 vezes
    return x1 + produtoRecursivo(x1, x2 - 1);
}

int main() {
    int produto, x1 = 5, x2 = 5;  // Declaração das variáveis e valores iniciais
    produto = produtoRecursivo(x1, x2);  // Chama a função recursiva para calcular o produto

    printf("\nproduto: %i", produto);   // Imprime o resultado do produto
}
