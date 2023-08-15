#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um número é perfeito
int isPerfect(int n) {
    int soma = 0, i;  // Variável 'soma' para calcular a soma dos divisores, 'i' para o loop
    for (i = 1; i < n; i++) {  // Loop para verificar os divisores menores que 'n'
        if (n % i == 0) {      // Verifica se 'i' é um divisor de 'n'
            soma += i;         // Adiciona 'i' à soma dos divisores
        }
    }

    if (soma == n) {  // Se a soma dos divisores for igual a 'n', o número é perfeito
        return soma;   // Retorna a soma dos divisores (número perfeito)
    }
    // Se a soma dos divisores não for igual a 'n', a função não retorna nada (implícito)
}

int main() {
    int n, r;  // Variáveis para o número inserido e o resultado da função

    printf("\nInsira um número: ");
    scanf("%i", &n);  // Solicita ao usuário para inserir um número

    r = isPerfect(n);  // Chama a função para verificar se o número é perfeito

    if (r == n) {
        printf("\n%i é um número perfeito", n);  // Se o resultado for igual ao número inserido, é perfeito
    } else {
        printf("\n%i não é um número perfeito", n);  // Caso contrário, não é perfeito
    }
}
