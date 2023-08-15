#include <stdio.h>

// Função recursiva para inverter um número
int inverterNumeroRecursivo(int n, int invertido) {
    if (n == 0) {  // Caso base: quando o número se torna 0, retorna o número invertido
        return invertido;
    }

    int ultimoN = n % 10;  // Pega o último dígito do número
    invertido = invertido * 10 + ultimoN;  // Acrescenta o último dígito ao número invertido
    return inverterNumeroRecursivo(n / 10, invertido);  // Chama a função recursivamente com o próximo dígito
}

// Função iterativa para inverter um número
int inverterNumero(int n) {
    int invertido = 0;   // Variável para armazenar o número invertido
    int ultimoN;
    while (n > 0) {      // Enquanto ainda houver dígitos no número
        ultimoN = n % 10;   // Pega o último dígito do número
        invertido = invertido * 10 + ultimoN;  // Acrescenta o último dígito ao número invertido
        n /= 10;  // Remove o último dígito do número
    }

    return invertido;  // Retorna o número invertido
}

int main() {
    int n = 4321, invertido;  // Número a ser invertido e variável para armazenar o número invertido

    invertido = inverterNumeroRecursivo(n, 0);  // Chama a função recursiva para inverter o número
    printf("\nInvertido recursivo: %i", invertido);  // Imprime o número invertido recursivamente

    invertido = inverterNumero(n);  // Chama a função iterativa para inverter o número
    printf("\nInvertido iterativo: %i", invertido);  // Imprime o número invertido iterativamente
}
