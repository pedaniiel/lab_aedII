#include <stdio.h>
#include <stdlib.h>

int diasDeAulas(int dia, int mes, int ano) {
    int ultDia = 29, ultMes = 10, ultAno = 2023; // Definição da data final do período
    ano  *= 365;        // Conversão do ano em dias
    mes *= 30;          // Conversão do mês em dias
    dia += mes + ano;   // Total de dias a partir do início do ano

    ultAno  *= 365;     // Conversão do ano final em dias
    ultMes *= 30;       // Conversão do mês final em dias
    ultDia += ultMes + ultAno; // Total de dias até a data final

    int semanas = (ultDia - dia) / 7; // Cálculo do número de semanas entre as datas
    int qntdAulas = semanas * 2;      // Duas aulas por semana

    return qntdAulas;  // Retorna a quantidade de aulas estimada no período
}

int main() {
    int dia, mes, ano;

    printf("\nInsira o dia: ");
    scanf("%i", &dia);   // Solicita ao usuário para inserir o dia
    printf("\nInsira o mes: ");
    scanf("%i", &mes);   // Solicita ao usuário para inserir o mês
    printf("\nInsira o ano: ");
    scanf("%i", &ano);   // Solicita ao usuário para inserir o ano

    int R = diasDeAulas(dia, mes, ano); // Chama a função para calcular a quantidade de aulas
    printf("\nQuantidade de aulas entre a data atual e fim do periodo: %i", R); // Imprime o resultado
}
