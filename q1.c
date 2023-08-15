#include <stdio.h>

int main() {
    char c;           // Declaração de variável para armazenar um caractere
    int i = 0;        // Inicialização da variável de contagem
    int count = 0;    // Inicialização da variável de contagem interna

    do {              // Início de um loop "do-while" que será executado pelo menos uma vez

        for (count = 0; count < 10; count++, i++) {
            c = i;     // A variável 'c' recebe o valor da variável 'i'
            printf(" %c", c);   // Imprime o valor de 'c' (caractere) na saída padrão
        }
        printf("\n");  // Imprime uma quebra de linha após cada linha de caracteres

    } while (i < 127);  // Continua o loop até que o valor de 'i' seja menor que 127

    // Fim do programa
}
